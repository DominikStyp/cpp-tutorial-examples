/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbstractUser.h
 * Author: Dominik
 *
 * Created on 8 kwietnia 2018, 15:28
 */

#ifndef ABSTRACTUSER_H
#define ABSTRACTUSER_H

class AbstractUser {
public:
    AbstractUser();
    AbstractUser(const AbstractUser& orig);
    virtual ~AbstractUser();
    virtual void printMyName() = 0;
private:

};

#endif /* ABSTRACTUSER_H */

