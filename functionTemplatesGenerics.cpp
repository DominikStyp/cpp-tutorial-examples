
/* 
 * File:   functionTemplates-Generics.cpp
 * Author: Dominik
 *
 * Created on 11 kwietnia 2018, 02:58
 */
#include "functionTemplatesGenerics.h"
using namespace std;

// this template acts like Generics in Java, here is simple usage
template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

// more complex usage with fixed multiplier
template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}


/*
 * 
 */
void functionTemplatesGenerics() {

  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  cout << "\n" << "------- functionTemplateGenerics() ------" << "\n";
  cout << k << '\n';
  cout << h << '\n';
  cout << "\n ---------- fixed_multiply<int,3>(10) ---------- " << fixed_multiply<int,3>(10) << '\n';
  cout << "\n ---------- fixed_multiply<int,2>(10) ---------- " << fixed_multiply<int,2>(10) << '\n';
}

