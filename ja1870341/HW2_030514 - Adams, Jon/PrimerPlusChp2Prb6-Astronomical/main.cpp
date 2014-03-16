/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 4, 2014, 4:41 PM
 */
//System libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes

/*C++ Primer Plus - Sixth Edition - Chapter 2 Problem 6: 
 * Write a program that has main () call a user defined
 * function that takes a distance in light years as an argument
 * and then returns the distance in astronomical units.
 */

//Execution
int main(int argc, char** argv) {
    //Are there unsigned floats?
    float lightye;
    unsigned long astrun;
    //Input request
    cout<<"Please enter your object's distance in light years."<<endl;
    cin>> lightye;
    //Calculations and output display
    astrun= (lightye * 2.65608e5);
    cout<<"Object is "<<astrun<<" astronomical units away!!"<<endl;
    cin.get();
    cin.get();
//Exit Stage Right
    return 0;
}

