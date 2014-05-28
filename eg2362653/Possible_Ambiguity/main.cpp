/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 21, 2014, 9:39 AM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//Global varables and function

//Function prototypes
void swap(int &, int&); //pass by reference
void swap(int *, int *); //pass by pointer
//Execution begins HREE
int main(int argc, char** argv) {
    //declare variables
    srand(static_cast<int>(time(0)));
    int a = rand() % 10;
    int b = rand() % 10;
    int c = rand() % 10;
    int d = rand() % 10;
    //output initial values
    cout << "A = " << a << ", B = " << b << endl;
    cout << "C = " << b << ", D = " << d << endl;
    //clear the ambiguity: will it compile?
    swap(a, b); //swap by pointer
    swap(&c, &d); //swap by reference
    //Output results
    cout << "A = " << a << ", B = " << b << endl; //compiler knows to distinguish between pointers
    cout << "C = " << b << ", D = " << d << endl; //and reference variables, so overloading is possible
    return 0;
}
void swap(int &x, int&y){ //pass by reference
    int temp = x;
    x = y;
    y = temp;
}
void swap(int *x, int *y){ //pass by pointer
    int temp = *x;
    *x = *y;
    *y = temp;
}