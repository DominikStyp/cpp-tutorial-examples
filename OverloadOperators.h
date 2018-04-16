/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   OverloadOperators.h
 * Author: Dominik
 *
 * Created on 16 kwietnia 2018, 08:52
 */

#ifndef OVERLOADOPERATORS_H
#define OVERLOADOPERATORS_H



class ClientSavings {
    double savingsProp;
    const int percentagePerYear = 10;
    public:
        ClientSavings(double savings){
            savingsProp = savings;
        }
        double getSavings() const;
        ClientSavings operator+ (const ClientSavings &ref);
};


void overloadOperators();

#endif /* OVERLOADOPERATORS_H */

