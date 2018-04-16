#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) { 
        radius = r; 
    }
    Circle() { 
        radius = 1; 
    }
    double circum() {
        return 2*radius*3.14159265;
    }
    double area() {
        return radius*radius*3.14159265;
    }
};


class Cylinder {
    Circle base;
    double height;
  public:
    // member initializer list initializes properties of the class
    // that have to be initialized in the constructor
    Cylinder(double r, double h) : base (r), height(h) {}
    double volume() {return base.area() * height;}
};

// here are different types of constructor invocations
// all pass first argument to the constructor
void differentTypesOfInvocations(){
  Circle c1 (10.0);   // functional form
  Circle c2 = 20.0;   // assignment init
  Circle c3 {30.0};   // uniform init
  Circle c4 = {40.0}; // POD-like
  // !!!!! WARNING !!!!!! THIS ISN'T PROPER CONSTRUCTOR CALL !!!
  // This is declaration of the function which returns Circle object and receives no parameters
  Circle c6(); // NO CONSTRUCTOR CALL!
  // OK
  Circle c7{};
  // OK
  Circle c5;
}
