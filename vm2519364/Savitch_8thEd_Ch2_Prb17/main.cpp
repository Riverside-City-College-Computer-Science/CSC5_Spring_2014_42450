/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 11, 2014, 5:38 PM
 * Purpose: Calculate amount of water in a well
 */

#include <iostream>
#include <cmath>
using namespace std;

//Global Constants
int const CNVINCH = 12;

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {

//Declare Variables

    float rad, hght, vol, tmpRad, tmpInc, volg;
    const float pi=3.14159265358, gallons=7.48;
    
//Input of Data
    cout<<"Enter the radius of your well in inches: ";
    cin>>rad;
    cout<<"\n";
    cout<<"Enter the height of your well in feet: ";
    cin>>hght;
    cout<<"\n";
            
//Calculate Volume
tmpRad=pow(rad,2);
tmpInc=pow(CNVINCH,2);
vol = pi * (tmpRad/tmpInc) * hght;
volg = vol * gallons;

//Set to two decimal precision
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);

//Output of Data
cout<<"Your well hold ";
cout<<volg;
cout<<" gallons of water.";
cout<<"\n";    
//Exit Stage Right
    return 0;
}

