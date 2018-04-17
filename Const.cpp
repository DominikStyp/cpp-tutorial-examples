/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
using namespace std;
class TestConst {
    int x = 30;
    public:
        // const function
        void constFunc() const {
            cout << "\n   --- constFunc() ------- ";
            // " error: assignment of member 'TestConst::x' in read-only object "
            // you can't set ANY class member in const method
            // x = 10;
        }
        
        void constOverloadTest1() const {
            cout << "\n   --- constOverloadTest1() CONST FUNCTION ------- ";
        }
        void constOverloadTest1() {
            cout << "\n   --- constOverloadTest1() NOT CONST FUNCTION ------- ";
        }
        
        int returnRegularInt(){
            return x;
        }
        int& returnRegularIntByReference(){
            return x;
        }
        // regular function but returning const value
        const int& returnConstInt(){
            return x;
        }
        
        // const function but returning const value
        const int& constFuncReturnConstInt() const {
            return x;
        }
        
        void nonConstFunc(){
             cout << "\n   --- nonConstFunc() ------- ";
        }
};


void testConstOverload(){
    const TestConst o1;
    TestConst o2;
    cout << "\n  ------ testConstOverload() ------- ";
    o1.constOverloadTest1(); // const version of this function is used
    o2.constOverloadTest1(); // no-const version of this function is used
}

void testConstClass(){
    TestConst obj;
    obj.constFunc(); // OK
    
    //-------- Return const int by reference ---
    // " error: invalid conversion from 'const int*' to 'int' [-fpermissive] "
    // int x = &obj.returnConstInt();
    
    //------- Return regular int by reference ----
    // " error: lvalue required as unary '&' operand "
    // int x = &obj.returnRegularInt();
    
    //------- Return regular int by reference ----
    // " error: invalid conversion from 'int*' to 'int' [-fpermissive] "
    // int x = &obj.returnRegularIntByReference();
    
    //------- Return regular int by reference ----
    // Compiler FORCES you to use const int variable in this case
    // " error: invalid conversion from 'const int*' to 'int' [-fpermissive] "
    // int x = &obj.returnConstInt();
    
    int x = obj.returnRegularInt(); //OK
    int y = obj.constFuncReturnConstInt();
    cout << "\nx = " << x << endl;
    x = 20; // OK, you can change x despite it is returned as const
    cout << "\nx = " << x << endl;
    
    const TestConst obj2;
    obj2.constFunc(); // OK
    // " error: passing 'const TestConst' as 'this' argument discards qualifiers [-fpermissive] "
    // you cant use NON-CONST function on const object
    // obj2.nonConstFunc(); //ERROR
    
}

//////////// CONST POINTERS //////////////////////
void pointerToConstTEST(){
    int someInt = 10;
    const int* pointToInt = & someInt;
    //   if you have a pointer to const value, you cannot change it, only read it
    //   following gives runtime error:
    //   "error: assignment of read-only location '* pointToInt'"
    // *pointToInt = 20;
}

void constPointerToConstTEST(){
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


void testConst(){
    cout << "\n   ---------- testConst() ------- \n";
    testConstClass();
    testConstOverload();
}