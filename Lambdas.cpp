/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;



// here we pass lambda to the other function that calls it
void lambdaRetriever( vector<int> v1,  void(*func)(int) ){
    for(int element : v1){
        func(element);
    }
}

void lambdaRetrieverFunctional( vector<int> v1, const function<void(int)> &func ){
    for(int element : v1){
        func(element);
    }
}

void lambdaOnVector(){
    vector<int> v1 = {1,2,3,4,5,6,7,8};
    cout << "\n --- lambdaOnVector() --------";
    auto lambdaFunc = [](int value){ cout << "\nCurrent value is: " << value; };
    lambdaRetriever(v1, lambdaFunc);
}

void lambdaOnVectorWhichFindsTheValue(){
    vector<int> v1 = {1,2,3,4,5,6,7,8};
    cout << "\n --- lambdaOnVectorWhichFindsTheValue() --------";
    // using Lambda as a filter
    vector<int>::iterator iteratorInt = find_if(v1.begin(), v1.end(), [](int val){ return val > 6; });
    cout << "\n iteratorInt: " << *iteratorInt; // 7
}

void lambdaThatUseExternalVariables(){
    vector<int> v1 = {1,2,3,4,5,6,7,8};
    string message = "\nCurrent value from lambda is: ";
    cout << "\n --- lambdaThatUseExternalVariables() --------";
    auto lambdaFunc = [&message](int value){ cout << message << value; };
    // following won't work because function pointer can't be converted to this specific lambda type (which has external vars)
    //" error: cannot convert 'lambdaThatUseExternalVariables()::<lambda(int)>' to 'void (*)(int)' for argument '2' to 'void lambdaRetriever(std::vector<int>, void (*)(int))' "
    // lambdaRetriever(v1, lambdaFunc);
    
    // to get rid of this error we can use other built in functional library 
    lambdaRetrieverFunctional(v1, lambdaFunc);
}

void testLambdas(){
    cout << "\n ---------------- testLambdas() --------\n";
    lambdaOnVector();
    lambdaThatUseExternalVariables();
    lambdaOnVectorWhichFindsTheValue();
}