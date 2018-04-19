 /*
1) You can't have 2 global NON-STATIC variables of functions with the same name across translation units (.cpp files) in one project !!!
If you try this:   
  int nonStaticVarOutsideClass = 20;
  
You'll get an error: 
    build/Debug/MinGW-Windows/main.o:main.cpp:(.data+0x0): multiple definition of `nonStaticVarOutsideClass'
    build/Debug/MinGW-Windows/StaticKeywordOutsideClass.o:StaticKeywordOutsideClass.cpp:(.data+0x4): first defined here
*/

#include <iostream>
using namespace std;

/*
  This is possible despite that we already defined staticVarOutsideClass in "StaticKeywordOutsideClass.cpp" file
  because STATIC in this case means the variable is PRIVATE to the scope of the .cpp translation unit
  same as this variable, which will visible ONLY to this file
 */
static int staticVarOutsideClass = 10;
/**
 This however won't work:
       extern int staticVarOutsideClass;
 Due to:
      undefined reference to `staticVarOutsideClass'
      collect2.exe: error: ld returned 1 exit status
 Because:
      We can't link to the static variable, since it's private to the file in which it's defined
 * 
 */

// here Linker links this variable to the external variable from file StaticKeywordOutsideClass.cpp
extern int nonStaticVarOutsideClass;

void staticKewordOutsideClassTest(){
    cout << "\n--------- staticKewordOutsideClassTest() ------- \n";
    cout << "staticVarOutsideClass = " << staticVarOutsideClass << endl; // 10
    // ..... but here's the trick, that we can use global NON-STATIC variable from the other translation unit
    // as follows, by declaring it in as EXTERN.
    cout << "staticVarOutsideClass = " << nonStaticVarOutsideClass << endl; // 20
}