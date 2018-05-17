
#include <iostream>
#include "PointerVSReference.h"

/**
 * In this function we pass int via pointer to it
 * Then dereference the pointer via (*x), and increment the value
 * @param x
 */
void passValueByPointer(int* x){
    (*x)++;
}

/**
 * In this function we use (easier) passing by reference,
 * which is more intuititive to write, and means that the value of int
 * is NOT copied, but passed via it's original memory address &x, and incremented
 * 
 * @param x
 */
void passValueByReference(int &x){
    x++;
}

void PointerVSReference(){
    int someInt = 10;
    // both functions act the same
    passValueByPointer(&someInt); // 11
    passValueByReference(someInt); // 12
    std::cout << "\n--------- PointerVSReference() ------------\n";
    std::cout << "someInt is: " << someInt;
}