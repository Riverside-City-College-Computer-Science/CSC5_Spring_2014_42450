/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 9, 2014, 6:36 PM
 * Purpose: Convert MPH to Minutes per Mile and Seconds per Mile
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {

   //Variable Declaration
    float mpm, mph, spm;
    const int minHr=60, secHr=3600;
    
    cout<<"Enter your pace in miles per hour: ";
    cin>>mph;
    cout<<"\n";
    
    //Calculate Minutes per Mile and Seconds per Mile
    mpm = minHr/mph;
    spm = secHr/mph;
    
    cout.setf(ios::fixed);
    cout.precision(2);  
    
    cout<<"Your pace is ";
    cout<<mpm;
    cout<<" minutes per mile or ";
     
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
    
    cout<<spm;
    cout<<" seconds per mile.";
    cout<<"\n";
    
//Exit Stage Right    
    return 0;
}

