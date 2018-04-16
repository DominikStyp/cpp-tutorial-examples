#include "StructExamples.h"

using namespace std; 

struct product {
    string name;
    int id;
    double price;
};

void structTest1(){
    product p;
    p.id = 10;
    p.name = "Apple";
    p.price = 22.10;
    cout << "\n------------------ structTest1() ------------ \n";
    cout << "Product p.name is " << p.name;
}

void structInlineTest2(){
    struct userInfo {
        string email;
    };
    struct user {
        string name;
        int age;
        userInfo info;
    } users[2];
    
    users[0].name = "Dr Doom";
    users[0].info.email = "drDoom@fantastic-four.com";
    cout << "\n------------------ structInlineTest2() ------------ \n";
    cout << "users[0].name is " << users[0].name;
    cout << "\nusers[0].info.email.name is " << users[0].info.email; 
}

void pointerToStruct(){
    product productsArr [3];
    // NOTICE: here if no pointer is used we use "." operator to get to the property
    productsArr[0].price = 33.33; 
    product * prod1Pointer = &productsArr[0];
    cout << "\n------------------ pointerToStruct() ------------ \n";
    // NOTICE: here when we use pointer to the product we can DEREFERENCE ITS MEMBER via "->" operator
    cout << "First prod1Pointer->price is: " << prod1Pointer->price << "\n";
    // NOTICE: "->" operator is THE SAME as dereference pointer and access structure property
    // which is equivalent to: (*prod1Pointer.price)
    cout << "First (*prod1Pointer).price is: " << (*prod1Pointer).price << "\n";
    
}

void structsTest(){
    structTest1();
    structInlineTest2();
    pointerToStruct();
}