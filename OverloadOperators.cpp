/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include "OverloadOperators.h"
using namespace std;

/**
 * IF YOU WANT TO GUARANTEE THAT METHOD WON'T CHANGE OBJECT ITSELF
 * USE CONST WORD BEFORE IT'S BODY
 * 
 * @return 
 */
double ClientSavings::getSavings() const {
            // in CONST method modifying object IS FORBIDDEN
            //savingsProp += 1; // " error: assignment of member 'ClientSavings::savingsProp' in read-only object' "
            return (savingsProp + ((savingsProp * percentagePerYear) / 100) ) ;
}

/**
 * WARNING!
 * When you are using CONST reference to the object,
 * You CAN'T INVOKE NON-CONST METHODS ON IT
 * Because compiler can't guarantee that non-const method won't change the object itself.
 * 
 * @param ref
 * @return 
 */
ClientSavings ClientSavings::operator+ (const ClientSavings &ref ){
    double s0 = getSavings();
    double s1 = ref.getSavings();
    ClientSavings newSavingsObj(s0 + s1);
    return newSavingsObj;
}


void testPlusOverload() {
    ClientSavings savings1(300);
    ClientSavings savings2(400);
    // here we overload default "+" sign behavior
    ClientSavings savings3 = savings1 + savings2;
    // following is equal to above......
    ClientSavings savings4 = savings1.operator+(savings2);
    cout << "\n   ---------- testPlus() ------- \n";
    cout << "\n savings1 : " << savings1.getSavings();
    cout << "\n savings2 : " << savings2.getSavings();
    cout << "\n savings3 : " << savings3.getSavings();
    cout << "\n savings4 : " << savings4.getSavings();
    
}

void overloadOperators(){
    cout << "\n   ---------- overloadOperators() ------- \n";
    testPlusOverload();
}