/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on February 26, 2014, 10:01 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Function

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
   
    //Declare Variables 
    unsigned short a,b,c;
    
    //Assign Values
    //These errors in logic produce
        //a=30000;
        //b=35537;
    //Produce this result
        //a = 30000
        //b = 35537
        //c = a + b = 1
    a=30000;
    b=35000;
   
    //Calculate the sum
    c=a+b;
    
    //Output the results
    //This error
    //cou<<"a = "<<a<<endl;
    //Produces this result
    //main.cpp:36:5: error: ‘cou’ was not declared in this scope
    //nbproject/Makefile-impl.mk:39: recipe for target `.build-impl' failed
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = a + b = "<<c<<endl;
    
    //Exit Stage Right!
    
    return 0;
}

