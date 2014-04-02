/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 29, 2014, 10:26 PM
 * Purpose: Calculate MPG for 2 cars
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
    float mpg, mpgTwo, gas, gasTwo, dist, distTwo;
    //Input Car One Info
    cout<<"Enter the amount of gas consumed by car 1 on your trip, in liters: ";
    cin>>gas;
    cout<<"\n";
    cout<<"Enter the total distance traveled by the car 1, in miles: ";
    cin>>dist;
    cout<<"\n";
    //Input Car Two Info
    cout<<"Enter the amount of gas consumed by car 2 on your trip, in liters: ";
    cin>>gasTwo;
    cout<<"\n";
    cout<<"Enter the total distance traveled by the car 2, in miles: ";
    cin>>distTwo;
    cout<<"\n";
    //Convert amount of gas from liters to gallons
    //gas=(gas*CNVGALL);
    //gasTwo=(gasTwo*CNVGALL);
    //Function Call
    mpg=cnsmd(gas, dist);
    mpgTwo=cnsmd(gasTwo, distTwo);
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output Car One Info
    cout<<"Car 1 has traveled ";
    cout<<dist;
    cout<<" miles, using ";
    cout<<(gas*CNVGALL);
    cout<<" gallons of gas.\n";
    cout<<"\n";
    cout<<"Car 1 delivered ";
    cout<<mpg;
    cout<<" miles per gallon.\n";
    cout<<"\n";
    //Output Car Two Info
    cout<<"Car 2 has traveled ";
    cout<<distTwo;
    cout<<" miles, using ";
    cout<<(gasTwo*CNVGALL);
    cout<<" gallons of gas.\n";
    cout<<"\n";
    cout<<"Car 2 delivered ";
    cout<<mpgTwo;
    cout<<" miles per gallon.\n";
    cout<<"\n";
    //Determine what car is more fuel efficient
    if (mpg<mpgTwo)
        cout<<"Car 2 has the best fuel efficiency.\n";
    else
        cout<<"Car 1 has the best fuel efficiency.\n";
    
    //Exit Stage Right
    return 0;
}

float cnsmd(float gas_par, float dist_par) //Function Heading
{
    return (dist_par/(gas_par*CNVGALL));
}

