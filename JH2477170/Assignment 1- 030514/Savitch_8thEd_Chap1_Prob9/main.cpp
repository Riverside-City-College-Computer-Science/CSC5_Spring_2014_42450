/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 1, 2014, 1:50 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Systems

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int accel=32, time, dist;
    
    //Prompt the user what to do
    cout<<"Press return after input number"<<endl;
    cout<<"Enter time in seconds"<<endl;
    cin>>time;
    
    //Calculate the distance in feet
    dist = accel * time * time / 2;
    cout<<"If an object free falls at a constant rate of "<<endl;
    cout<<"32ft/sec, with no friction or resistance,"<<endl;
    cout<<"then the distance traveled in "<<time<<" seconds is "<<dist<<" feet."<<endl;
    
    //Exit Stage Right!
    return 0;
}

