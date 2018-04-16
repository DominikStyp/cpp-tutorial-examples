/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Printer.h
 * Author: Dominik
 *
 * Created on 6 kwietnia 2018, 15:00
 */

#ifndef PRINTER_H
#define PRINTER_H

#include <iostream>
using namespace std;

class Printer {
public:
    Printer(); // constructor 1
    Printer(const Printer& orig); // constructor 2
    virtual ~Printer(); // destructor
    // in arguments we dont need to pass parameter names
    // in .h file it's optional
    // in .cpp file YOU MUST name your parameters
    static void printString(string);
    
private:

};

#endif /* PRINTER_H */

