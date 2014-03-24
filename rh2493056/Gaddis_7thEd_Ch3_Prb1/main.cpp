/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 4:54 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short totalGall, milesMax, milesGall;
    
    //Ask user to input gallons and miles
    cout<<"Please input the number of gallons the car can hold"<<endl;
    cout<<"and the number of miles the car can be driven on a full tank."<<endl;
    
    //Input gallons and miles
    cin>>totalGall>>milesMax;
    
    //Calculate MPG
    milesGall=milesMax/totalGall;
    
    //Output the MPG
    cout<<"Miles Per Gallon= "<<milesGall<<endl;
    
    //Exit Stage Right
    return 0;
}

