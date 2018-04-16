
/* 
 * File:   Pointers.h
 * Author: Dominik
 *
 * Created on 12 kwietnia 2018, 03:24
 */
#include <cstdlib>
#include <iostream>

#ifndef POINTERS_H
#define POINTERS_H

void incrementPointersStringExample();
void mixedArraysWithPointers();

void pointerToConstWithError();
void constPointerToConstWithError();
/////////// VOID POINTERS ///////////////////////////
void voidPointerArgIncrease(void* data, int psize);
void voidPointerTest();
/////////////// POINTERS TO FUNCTIONS //////////////////////
int addition (int a, int b);
int operation (int x, int y, int (*functocall)(int,int));
void pointersToFunctionsTest();
void declaringNullPointers();
void testPointers();
#endif /* POINTERS_H */

