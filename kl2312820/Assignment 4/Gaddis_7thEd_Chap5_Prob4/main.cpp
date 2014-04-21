/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 12, 2014, 1:25 PM
 * Purpose: Membership Fee Increase Over Six Years
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <iomanip> //Formatting
using namespace std;

//System Libraries

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    float memship=2500,meminc=0.04;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The current charge for membership in ";
    cout<<"the country club is $"<<memship<<"."<<endl;
    cout<<""<<endl;
    cout<<"The charges for membership over six years, with an increase ";
    cout<<"of four percent will be:"<<endl;
    cout<<""<<endl;
    //Create The Loop To Show Increase For Next Six Years; Output The Results
    for (int year=1;year<=6;year++){
        memship+=memship*meminc;
        cout<<"In year "<<year<<", the membership will cost ";
        cout<<memship<<"."<<endl;
        cout<<""<<endl;
    }
    //Exit Stage Right!
    return 0;
}

