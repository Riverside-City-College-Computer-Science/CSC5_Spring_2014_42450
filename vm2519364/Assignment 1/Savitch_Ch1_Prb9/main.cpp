/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on February 26, 2014, 7:54 PM
 * Purpose: Calculate the Distance and Object has Traveled
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {

//Variable Declaration    
int dist, time, acc, totl;

//Assign Value for Gravity
//Gravity=Acceleration since object is in freefall
acc=32;
//Input Time in Seconds        
cout<<"Please enter the time (in seconds) that \n";
cout<<"it took for your object to reach its destination.\n";
cout<<"\n";
cin>>time;
cout<<"\n";
//Calculate acceleration * time^2        
totl=acc*time*time;
//Calculate acceleration * time^2/2        
dist=totl/2;       
//Output Distance Object has Traveled in Feet.        
cout<<"Your object traveled a distance of ";
cout<<dist;
cout<<" feet\n";
//Exit Stage Left
    return 0;
}

