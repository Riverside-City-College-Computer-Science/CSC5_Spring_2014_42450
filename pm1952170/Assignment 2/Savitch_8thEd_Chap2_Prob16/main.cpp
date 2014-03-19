/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 6:51 PM
 * Rewrite problem given in book to include indentation, comments,
 * and appropriately named constants.
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const float PI=3.1415;
    float radius, vm;
    //Prompt user for inputs
    cout<<"Enter radius of sphere ";
    cin>>radius;
    //Equation for output
    vm=(4.0/3.0)*PI*radius*radius*radius;
    //Outputs
    cout<<"The volume is "<<vm<<endl;

    return 0;
}

