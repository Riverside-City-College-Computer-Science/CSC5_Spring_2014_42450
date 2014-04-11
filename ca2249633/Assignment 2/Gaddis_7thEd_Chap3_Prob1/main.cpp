/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 12, 2014, 9:26 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    float numGal, tMiles, mpg;
    
    //Prompt user for the total number of gallons
    //the vehicle's gas tank holds.
    cout<<"How many gallons can your gas tank hold?"<<endl;
    cin>>numGal;
    //Promt the user for how many miles the car 
    //can travel with a full tank.
    cout<<"How many miles can your car travel on a full tank?"<<endl;
    cin>>tMiles;
    
    //Calculate the MPH
    mpg=tMiles/numGal;
    
    //Output the results
    cout<<"Your car gets "<<mpg<<" miles per gallon."<<endl;
    
    //Exit Stage Right

    return 0;
}

