/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 29, 2014, 10:26 PM
 * Purpose: Calculate MPG
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float CNVGALL=0.264179;//Conversion of one liter to gallon

//Function Prototypes
float cnsmd(float gas_par, float dist_par);//Function Declaration
//Calculates the miles per gallon that a car delivers
//The formal parameter named gas is the amount of gas consumed by the car,
//in liters
//The formal parameter dist is the distance, in miles, that the car traveled

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declared Variable
    float mpg, gas, dist;
    
    cout<<"Enter the amount of gas consumed on your trip, in liters: ";
    cin>>gas;
    cout<<"\n";
    cout<<"Enter the total distance traveled by the car, in miles: ";
    cin>>dist;
    cout<<"\n";
    //Convert amount of gas from liters to gallons
    gas=(gas*CNVGALL);
    //Function Call
    mpg=cnsmd(gas, dist);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Your car has traveled ";
    cout<<dist;
    cout<<" miles, using ";
    cout<<gas;
    cout<<" gallons of gas.\n";
    cout<<"\n";
    cout<<"Your car delivered ";
    cout<<mpg;
    cout<<" miles per gallon.\n";
    
    //Exit Stage Right
    return 0;
}

float cnsmd(float gas_par, float dist_par) //Function Heading
{
    return (dist_par/gas_par);
}

