#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include "arrays.h"
#include "Printer.h" 
#include "PolymorphismAndAbstractMethods.h"
#include "functionTemplatesGenerics.h"
#include "DereferenceVsAddressOfOperator.h"
#include "Pointers.h"
#include "StructExamples.h"
#include "typedefAndUsingToCreateAliases.h"
#include "Enums.h"
#include "OverloadOperators.h"


int main() {

    Printer::printString("Test print string.");
    //arrayTest();
    //abstractMethodsTest();
    //functionTemplatesGenerics();
    //dereferenceVsAddressOfOperatorsTest();
    testPointers();
    //structsTest();
    //typeDefAndUsingTest();
    //enumsTest();
    overloadOperators();
    return 0;
}




