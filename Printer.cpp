/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Printer.cpp
 * Author: Dominik
 * 
 * Created on 6 kwietnia 2018, 15:00
 */
#include <iostream>
#include "Printer.h"

Printer::Printer() {
}

Printer::Printer(const Printer& orig) {
}

Printer::~Printer() {
}

void Printer::printString(string str){
    cout << str << "\n";
}

