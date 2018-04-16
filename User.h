/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.h
 * Author: Dominik
 *
 * Created on 8 kwietnia 2018, 11:56
 */


#ifndef USER_H
#define USER_H

#include <cstdlib>
#include <iostream>
#include <string>

#include "AbstractUser.h"

using namespace std;

// this means we make inheritance PUBLIC
class User : public AbstractUser {
public:
    User(string="Doom", int=35);
    User(const User& orig);
    virtual ~User();
    void printMe();
    
    // in .cpp file (implementations file)
    // you cannot add "virtual" before the method implementation
    // but in .h file you can do it (but it's not obligatory)
    // virtual void printMyName(); is also valid here
    void printMyName();
private:
    string name;
    int age;
};

#endif /* USER_H */

