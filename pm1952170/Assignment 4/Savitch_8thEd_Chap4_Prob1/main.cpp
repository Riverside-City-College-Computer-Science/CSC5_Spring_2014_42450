/* 
 * File:   main.cpp
 * Author: Peter Morales *
 * Created on April 5, 2014, 8:51 PM
 * Purpose: After user inputs, output miles per gallon car delivers.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants
const float LITGAL=0.264179;//1 liter to 1 gallon
//Function Prototypes
float totCns(float gas_par,float miles_par);//Function Declaration
//totals the MPG
//gas is the total amount of gas consumed by car in liters
//miles is total amount of miles traveled by the car
//Execution Begins Here
int main(int argc, char** argv) {
    //Define Variables
    float gas,miles,gal;
    //Prompt user for inputs
    //user enters liters of gas consumed by car
    cout<<"Enter the number of liters of gasoline consumed by your car: ";
    cin>>gas;
    //user enters number of miles driven
    cout<<"Enter the number of miles traveled by your car: ";
    cin>>miles;
    //equation to convert liters into gallons
    gas=gas*LITGAL;
    //Function Call
    gal=totCns(gas,miles);
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output the number of mpg the car delivered
    cout<<"Your car delivered "<<gal<<" miles per gallon."<<endl;
    //Exit Stage Right
    return 0;
}

float totCns(float gas_par, float miles_par)//Function Heading
{
    return (miles_par/gas_par);
}

