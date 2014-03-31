/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 1, 2014, 5:56 PM
 * Savitch Chap1 Prob9
 * Create a program that totals the distance an object will travel
 * in freefall if given the time in seconds.
 */

#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int time, dist, aclrtn=32, product;
    //Output Hello
    cout<<"Hello"<<endl;
    cout<<endl;
    //Prompt user to enter numbe rof seconds
    cout<<"Press enter after entering a number of seconds ";
    cin>>time;
    //Equations
    product=aclrtn*time*time;
    dist=product/2;
    //Output Result
    cout<<"If an object is in freefall for "; 
    cout<<time;
    cout<<" seconds,"<<endl; 
    cout<<"it will travel ";
    cout<<dist;
    cout<<" feet."<<endl;
    cout<<endl;
    //Output this is the end of the program
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right 
    return 0;
}

