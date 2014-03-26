/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 21, 2014, 6:28 PM
 * Purpose: Calculate if a sphere will float
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    float bForce, vol, wtrWht=62.4, rad, sphWht;
    float pi=3.14159265;
    
    //Input Weight and Radius
    cout<<"\n";
    cout<<"Enter the radius of your sphere (in feet): ";
    cin>>rad;
    cout<<"\n";
    cout<<"Enter the weight of your sphere (in pounds): ";
    cin>>sphWht;
    cout<<"\n";
    
    //Calculate volume of the sphere
    vol = (pi * rad * rad * rad *4) / 3;
    //Set decimal accuracy
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    //Output Data
    cout<<"The volume of your sphere is ";
    cout<<vol;
    cout<<" cubic feet.";
    cout<<"\n";
    //Calculate buoyant force
    bForce = vol * wtrWht;
    //Output buoyant force
    cout<<"\n";
    cout<<"The buoyant force of your sphere is ";
    cout<<bForce;
    cout<<" pounds.";
    cout<<"\n";
    cout<<"\n";
    if (bForce>=sphWht){
        cout<<"Your sphere will float!";
    }else
        cout<<"Your sphere will sink.";
    cout<<"\n";
            
    
    //Exit Stage Right
    return 0;
}

