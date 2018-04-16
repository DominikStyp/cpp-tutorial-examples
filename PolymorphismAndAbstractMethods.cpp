/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "PolymorphismAndAbstractMethods.h"

void abstractMethodsTest(){
    // using User object in regular way
    User user;
    user.printMe();
    user.printMyName();
    // using it via polymorphic call
    polymorphicCall(&user);
    // or without function
    //    AbstractUser *abstractUser;
    //    abstractUser = &user;
    //    abstractUser->printMyName();
}

void polymorphicCall(AbstractUser *abstractUser){
    // if you call it polymorphically, YOU MUST USE -> operator instead of .
    abstractUser->printMyName();
}