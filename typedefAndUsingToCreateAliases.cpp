using namespace std;
typedef char C;
typedef unsigned int unsInt;

#include <cstdlib>
#include <iostream>
#include <string>

// way 1 of making aliases is to use typedef
void useTypedef(){

    // from now we can create variables in following way
    // because typedef made an alias to char type by the name 'C'
    C someChar = 'x';
    unsInt someUnsignedInt = 234234234;
    cout << "\n------------------ useTypedef() ------------ \n";
    cout << "\nSome char is: " << someChar;
    cout << "\nSome unsigned int is: " << someUnsignedInt;
}

// way 2 (preferred) is to use "using" keyword to make an alias
void useUsing(){
    using unsignedInt = unsigned int ;
    unsignedInt someUnsignedInt = 234234234;
    cout << "\n------------------ useUsing() ------------ \n";
    cout << "\nSome unsigned int is: " << someUnsignedInt;
}

void typeDefAndUsingTest(){
    useTypedef();
    useUsing();
}