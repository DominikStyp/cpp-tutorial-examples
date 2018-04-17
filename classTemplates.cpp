/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include "classTemplates.h"
using namespace std;

template<class ONE,class TWO, class THREE>
class TemplateTest {
    ONE one;
    TWO two;
    public:
        TemplateTest(ONE p1, TWO p2){
            one = p1;
            two = p2;
        }
        void printThem(){
            cout << "ONE: " << one << ", TWO: " << two << endl;
        }
        THREE getThird(THREE p3);
};

// SPECIAL TEMPLATE THAT HANDLES ONLY INTEGERS FOR CLASS TemplateTest
template<>
class TemplateTest<int,int,int> { // IMPORTANT!!! If you have specialized template you must use <int> after class name
    int one;
    int two;
    public:
        TemplateTest(int p1, int p2){
            one = p1;
            two = p2;
        }
        void printThem(){
            cout << "(for integers) ONE: " << one << ", TWO: " << two << endl;
        }
        int getThird(int p3);
};

//////////////////////////////////////////////////////////////////////////////////////////////////////

// NOTE: If you declare generic types for the class
//       You must use same template for method declaration to that class
template<class ONE,class TWO, class THREE>
THREE TemplateTest<ONE, TWO, THREE>::getThird(THREE p3){
    cout << "THREE: " << p3 << endl;
    return p3;
};
// NOTE: If you use SPECIALIZED TEMPLATE for the class
//       You don't need to use it for the method declaration to that class
int TemplateTest<int, int, int>::getThird(int p3){
    cout << "(for integers) THREE: " << p3 << endl;
    return p3;
};

void classTemplateTest(){
    TemplateTest<char, int, double> obj1('X', 100);
    obj1.printThem();
    double something = obj1.getThird(33.33);
   // let's handle only integers
    TemplateTest<int, int, int> obj2(10, 20);
    obj2.printThem();
}