/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Enums.h"
using namespace std;

/**
 * Values of enumerated types declared with enum are implicitly convertible to an integer type, and vice versa. 
 * In fact, the elements of such an enum are always assigned an integer numerical equivalent internally, 
 * to which they can be implicitly converted to or from.
 */


void enumTest(){
    enum colors_enum { black, blue, green, cyan, red, purple, yellow, white};
    //     BUT..... following code won't work due to: 
    //    " error: redeclaration of 'black' " - because this way you can't have same names in different enums :(
    // enum other_colors_enum { black }; // error
    colors_enum mycolor1, mycolor2;
    mycolor1 = white;
    mycolor2 = blue;
    cout << "\n------------------ enumTest() ------------ \n";
    if(mycolor1 == blue){
        cout << "___________";
    }
    if (mycolor1 == white){
        cout << "\n mycolor1 == white";
    }
}

void enumClassTest(){
    enum class Colors {black, blue, green, cyan, red, purple, yellow, white};
    enum class Colors1 {black, blue}; // using enum clas you can redeclare values in enums
    Colors mycolor;
    mycolor = Colors::blue;
    cout << "\n------------------ enumClassTest() ------------ \n";
    if(mycolor == Colors::blue){
        cout << "\n mycolor == Colors::blue";
    }
    //   following code won't work due to:
    //   " note:   no known conversion for argument 2 from 'enumClassTest()::Colors1' to 'enumClassTest()::Colors' "
    // if(mycolor == Colors1::blue){
    //    cout << "\n mycolor == Colors1::blue";
    // }
}

void enumsTest(){
    enumTest();
    enumClassTest();
}

