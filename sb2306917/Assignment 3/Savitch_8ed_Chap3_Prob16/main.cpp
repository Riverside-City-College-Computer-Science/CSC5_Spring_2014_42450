/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 26, 2014, 10:29 PM
 * Purpose: Assignment 3
 */

//Include system libraries
#include <iostream>
#include <cmath>//calculations
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int cels=100, fahr=(((9*cels)/5)+32);
    //set condition and execute
    while (cels!=fahr){
        //if celsius is not equal to fahrenheit, run calc
        cels=cels-1;
        fahr=(((9*cels)/5)+32);
    }
    //output result
    cout<<"The temperature at which Celsius and Fahrenheit"<<endl;
    cout<<"are equal is "<<fahr<<" degrees"<<endl;
    //exit stage right
    return 0;
}