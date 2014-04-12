/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 26, 2014, 10:29 PM
 * Purpose: Assignment 3
 */

//Include system libraries
#include <cstdlib>//I/O stream
#include <iostream>
#include <cmath>//calculations
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned int initPop, finPop, numDays;
    float a=(1+sqrt(5))/2, b=(1-sqrt(5))/2;
    //prompt for initial green crud population and number of days
    cout<<"Let's calculate the population of green crud"<<endl;
    cout<<"Enter the initial green crud population in pounds."<<endl;
    cin>>initPop;
    cout<<"Enter the number of days that pass until you check population again"<<endl;
    cin>>numDays;
    //Declare variables for calculation
    unsigned int cycle=numDays/5;
    float A=pow(a,cycle), B=pow(b,cycle);
    if (cycle<1){
        cout<<initPop<< "pounds"<<endl;
    }
    else {
    //Calculate using Fn=(A^n-(B)^n)/sqrt(5)*initPop
    finPop=((A-B)/sqrt(5))*initPop;
    cout<<"The population of green crud"<<endl;
    cout<<"after "<<numDays<<" will be"<<endl;
    cout<<finPop<<" pounds."<<endl;
    }
    //exit through trap door on stage
    return 0;
}