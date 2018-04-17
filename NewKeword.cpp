/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
#include "NewKeword.h"
#include "windows.h"
#include "psapi.h"

using namespace std;
int loopTimes = 100;

SIZE_T getCurrentProcessMemoryUsage(){
    PROCESS_MEMORY_COUNTERS pmc;
    GetProcessMemoryInfo(GetCurrentProcess(), &pmc, sizeof(pmc));
    return pmc.PagefileUsage;
}
void printCurrentProcessMemoryUsage(string info){
    cout << info << " Memory usage: " << getCurrentProcessMemoryUsage() << endl;
}

// new keyword allocates memory on heap
// it means ONLY DELETE keyword will delete this memory allocation
void heapAllocationUsingNew(){
    string* str;
    for(int i = 0; i < loopTimes; i++){
        str = new string("abcdefghijklmn");
    }
    printCurrentProcessMemoryUsage("--- inside heapAllocationUsingNew()");
    // memory leak if don't use:   delete str
}

// without new string will be allocated on stack
// that means it WILL BE CLEARED when function ends
void stackAllocation(){
    string str;
    for(int i = 0; i < loopTimes; i++){
        str = "abcdefghijklmn";
    }
    printCurrentProcessMemoryUsage("--- inside stackAllocation()");
}

void newKewordTest(){
    cout << "\n--------- newKewordTest() ------- \n";
    printCurrentProcessMemoryUsage("--- before stackAllocation()");
    stackAllocation();
    printCurrentProcessMemoryUsage("--- after stackAllocation()");
    ////// 
    cout << "\n ------ MEMORY LEAK BELOW --------\n";
    printCurrentProcessMemoryUsage("--- before heapAllocationUsingNew()");
    heapAllocationUsingNew();
    printCurrentProcessMemoryUsage("--- after heapAllocationUsingNew()");
}