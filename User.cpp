/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.cpp
 * Author: Dominik
 * 
 * Created on 8 kwietnia 2018, 11:56
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include "User.h"

using namespace std;

User::User(string nameArg, int ageArg) {
    name = nameArg;
    age = ageArg;
}

User::User(const User& orig) {

}

User::~User() {
}

void User::printMe(){
    cout << "My name is " << name 
            << ", my age is " << age;
}

// in .cpp file (implementations file)
// you cannot add "virtual" before the method
// but in .h file you can (but it's not obligatory
void User::printMyName() {
    cout << "\nMy name is: " << name;
}

