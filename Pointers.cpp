/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Pointers.h"
#include "User.h"
using namespace std;

// result is:  10, 20, 30, 40, 50
void mixedArraysWithPointers(){
    int numbers[5];
    int * p;
    p = numbers;  *p = 10; // array pointer always points to the first element of the array
    p++;  *p = 20; // p++ switches pointer to next element of the array
    p = &numbers[2];  *p = 30; // pointer points to 3rd element of the array
    p = numbers + 3;  *p = 40; // pointer points to the 1st + 3 = 4th element of the array
    p = numbers;  *(p+4) = 50; // pointer points to the (1st + 4) = 5th element of the array
    cout << "\n   ---------- mixedArraysWithPointers() ------- \n";
    for (int n=0; n<5; n++)
      cout << numbers[n] << ", ";
}


void incrementPointersStringExample(){
    cout << "\n   ---------- incrementPointersStringExample() ------- \n";
    char str[] = "some test string 112233";
    char* strP = str;
    int size = sizeof(str);
    
    // we can increment string pointer in the loop until the end of the string
    cout << "\n --- for loop \n";
    for(int x = 0; x < size; x++){
        cout << *(strP++);
    }
    cout << "\n --- while loop \n";
    
    // ...but we can also do it easier, by checking when we match end of the string
    strP = str;
    do {
        cout << *(strP++); // same effect as in for loop, but without need for count of the string size
    }
    while(*(strP) != '\0' ); // if loop sees '\0' (end of the string character) it ends
    
}


//////////// CONST POINTERS //////////////////////
void pointerToConstWithError(){
    int someInt = 10;
    const int* pointToInt = & someInt;
    //   if you have a pointer to const value, you cannot change it, only read it
    //   following gives runtime error:
    //   "error: assignment of read-only location '* pointToInt'"
    // *pointToInt = 20;
}

void constPointerToConstWithError(){
    int someInt = 10;
    int someInt2 = 20;
    // here you have constant pointer, which points to constant value
    // that means you: 1) cant change pointer address, 2) cant change value it's pointing to
    const int* const pointToInt = & someInt;
    //     " error: assignment of read-only variable 'pointToInt' "
    // pointToInt = & someInt2;
    //     " error: assignment of read-only location '*(const int*)pointToInt' "
    // *pointToInt = 300;
}
///////////////////////////////////////////////////


/////////// VOID POINTERS ///////////////////////////
// void pointers can be casted to any type
void voidPointerArgIncrease(void* data, int psize){
    // check if pointer has size of char
    if ( psize == sizeof(char) ) { 
        char* pchar; 
        pchar=(char*)data; 
        ++(*pchar); 
    }
  // check if pointer has size of an integer
  else if (psize == sizeof(int) ) { 
      int* pint; 
      pint=(int*)data; 
      ++(*pint); 
  }
}

void voidPointerTest(){
  char a = 'x';
  int b = 1602;
  voidPointerArgIncrease (&a,sizeof(a));
  voidPointerArgIncrease (&b,sizeof(b));
}
//////////////////////////////////////////////////////////



/////////////// POINTERS TO FUNCTIONS //////////////////////
int addition (int a, int b) { return (a+b); }
int operation (int x, int y, int (*functocall)(int,int))
{
  return (*functocall)(x,y);
}

void pointersToFunctionsTest(){
     int m,n,o;
     // this is how we declare pointer to function
     int (*addPointer)(int, int) = addition;
     // this syntax is also valid
     int (*addPointer1)(int a, int b) = addition;
     m = operation (1, 4, addition); // we can pass a function
     n = operation (1, 4, addPointer); //or we can pass a pointer to function
     o = (*addPointer1)(1,4); // or dereference pointer here and invoke as function
     cout << "\n--------- pointersToFunctionsTest() ----------------\n";
     cout << "m,n,o variables " << m << "," 
             << n << "," 
             << o << " == 5";
}

void pointersToFunctionsTest1(){
    // here we can make alias to the type of function
    typedef int(*AdditionFunction)(int,int);
    // here we assign proper function to its proper type
    AdditionFunction addNumsFunc1 = addition;
    // or we can skip that and be less specific by naming this type as "auto"
    auto addNumsFunc2 = addition;
    cout << "\n--------- pointersToFunctionsTest1() ----------------\n";
    cout << addNumsFunc1(1,10) << " = 11 \n"; 
    cout << addNumsFunc2(1,10) << " = 11 \n"; 
}
////////////////////////////////////////////////

/////////////// POINTERS TO CLASSES //////////////

void pointersToClasses(){
    User * u1, * u2, * uArr;
    cout << "\n--------- pointersToClasses() ----------------\n";
    User tmpUser("Doom123", 35);
    // reference
    u1 = &tmpUser;
    // dynamic memory allocation
    u2 = new User("Batman", 45);
    // dynamic memory allocation for array
    // NOTICE: using {} initializer you can initialize objects LIKE array elements
    uArr = new User[2] { {"Superman", 200}, {"Grodd", 112} };
    
    // if you're using pointer -> is needed to DEREFERENCE real object behind the pointer
    u1->printMe(); cout << "\n";
    // dereferencing array is automatic by [] operator
    uArr[1].printMe(); cout << "\n";
}

void declaringNullPointers(){
    int * p = 0;
    int * q = nullptr;
    // older	
    int * r = NULL;
}

void testPointers(){
    cout << "\n------------------ testPointers() -------------------\n";
    mixedArraysWithPointers();
    incrementPointersStringExample();
    pointersToFunctionsTest();
    pointersToClasses();
    pointersToFunctionsTest1();
}