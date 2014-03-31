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
float wH2O=62.4, pi=3.14159265359;
//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned int wSphere, rad;
    float bouyFrc, vol;
    //prompt for weight and radius of sphere
    cout<<"Let's see if a sphere will float in water!"<<endl;
    cout<<"Enter the weight of the sphere in pounds."<<endl;
    cin>>wSphere;
    cout<<"Enter the radius of the sphere in feet"<<endl;
    cin>>rad;
    //Calculate volume
    vol=(4*pi*rad*rad*rad)/3;
    //Calculate Bouyant force
    bouyFrc=vol*wH2O;
    //use if/els to determine sink or float
    if (bouyFrc>=wSphere){
        cout<<"The sphere floats!!"<<endl;
    }
    else {
    cout<<"The sphere sinks"<<endl;
    }
    //exit stage right
    return 0;
}