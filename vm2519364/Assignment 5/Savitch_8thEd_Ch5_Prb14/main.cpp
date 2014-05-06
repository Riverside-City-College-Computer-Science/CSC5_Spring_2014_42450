/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 4, 2014, 5:02 PM
 * Calculate Windchill
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void inpt(float& wspd, float& temp);
void calc(float& wspd, float& temp, float& windch);
void outpt(float& windch);
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float wspd, temp, windch;
    char ans;
    do{
    //Function Call
    inpt(wspd, temp);
    calc(wspd, temp, windch);
    outpt(windch);
    cout<<"\n";
    cout<<"Would you like to recalculate your Wind Chill?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}

void inpt(float& wspd, float& temp){
    do{
    cout<<"\n";
    cout<<"Calculate Windchill in your area in temperatures below 50 degrees Fahrenheit.\n";
    cout<<"If the temperature entered is over 50 degrees Fahrenheit the program will start again.\n";
    cout<<"Enter the following required information.\n";
    cout<<"Wind Speed(mph): ";
    cin>>wspd;
    cout<<"Temperature(F): ";
    cin>>temp;
    cout<<"\n";
    }while (temp>=51);
}
void calc(float& wspd, float& temp, float& windch){
    //Utilized Wind Chill Formula from the National Weather Service Website
    windch=35.74+(0.6215*temp)-(35.75*pow(wspd,0.16))+(0.4275*temp*pow(wspd,0.16));
}
void outpt(float& windch){
    cout.setf(ios::fixed);
    cout.precision(0);
    cout<<"\n";
    cout<<"Your Wind Chill temperature is ";
    cout<<windch;
    cout<<" degrees Fahrenheit.\n";
}