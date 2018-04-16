/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functionTemplatesGenerics.h
 * Author: Dominik
 *
 * Created on 11 kwietnia 2018, 03:02
 */

#ifndef FUNCTIONTEMPLATESGENERICS_H
#define FUNCTIONTEMPLATESGENERICS_H


#include <cstdlib>
#include <iostream>
#include <string>

template <class T>
T sum (T a, T b);

template <class T, int N>
T fixed_multiply (T val);


void functionTemplatesGenerics();

#endif /* FUNCTIONTEMPLATESGENERICS_H */

