/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 23, 2014, 4:14 PM
 * Purpose: Create a program that will tell you if a sphere will sink or float.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    const float wWtr=62.4, pi=3.14159265359;
    float wLbs,rad,vol,bFce;
    //Prompt user for inputs
    cout<<"Enter weight in pounds: ";
    cin>>wLbs;
    cout<<"Enter radius in feet: ";
    cin>>rad;
    cout<<endl;
    //equation to calculate volume
    vol=(4/3)*pi*rad*rad*rad;
    //equation to calculate buoyancy
    bFce=vol*wWtr;
    //if-else statement to declare if sphere will sink or float
    if (bFce>=wLbs)
    {
        cout<<"The sphere will float."<<endl;
    }else
    {
        cout<<"The sphere will sink."<<endl;
    } 
    //Exit Stage Right      
    return 0;
}

