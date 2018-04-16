
#include <array>
#include "arrays.h"

using namespace std; 

int* modifyArray(int arr[]){
    arr[0] = 11;
    arr[1] = 22;
    arr[2] = 33;
    return arr;
}
void modifyArrayByPointer(int* arr){
    arr[0] = 111;
    arr[1] = 222;
    arr[2] = 333;
}

void libraryArray(){
    cout << "\n---------libraryArray()---------\n";
    array<int,3> myarray {10,20,30};
    for (int i=0; i<myarray.size(); ++i){
       cout << "lib-array element is: " << myarray[i] << "\n";
    }

}

void arrayTest(){
    int intArray[] = {1,2,3};
    int* intArrayPointer = modifyArray(intArray);
    cout << "\n---------arrayTest()---------\n";
    printf("1 element of the array is %d \n", intArrayPointer[1]);
    printf("2 element of the array is %d \n", modifyArray(intArray)[2]);
    printf("...");
    modifyArrayByPointer(intArray);
    printf("1 element of the CHANGED BY POINTER is %d \n", intArray[1]);
    libraryArray();
}