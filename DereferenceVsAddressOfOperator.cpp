/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "DereferenceVsAddressOfOperator.h"

using namespace std;

void testAddressOf(string &str){
    cout << "\n>>>From testAddressOf(): address of str is: " << &str;
    cout << "\n>>>From testAddressOf(): actual value of str is: " << str;
    str += "  fg";
}

void testDereferenceOperator(string *str){
    cout << "\n>>>From testDereferenceOperator(): dereferenced pointer value is: " << *str;
    cout << "\n>>>From testDereferenceOperator(): pointer points to address: " << str;
    // to dreference memory address which pointer is pointing to, we must use dereference again as follows
    *str += "  hi"; // here we have our 'str' value again
}



void dereferenceVsAddressOfOperatorsTest(){
    cout << "\n-------------------- dereferenceVsAddressOfOperatorsTest() -------------- ";
    
    string str = "abcde";
    testAddressOf(str); // you must pass actual object here to retrieve it's address via &str
    cout << "\nAfter testAddressOf(str) string has value: " << str;
    // following should be read as:
    // " Assign memory address of 'str' to pointer variable 'pointerStr' which will point to value of 'str' "
    string *pointerStr = &str;
    testDereferenceOperator(pointerStr);
    cout << "\nAfter testDereferenceOperator(pointerStr) string has value: " << str;
    testDereferenceOperator(&str); // &str is memory address of the value in 'str'
    cout << "\nAfter testDereferenceOperator(&str) string has value: " << str;
}