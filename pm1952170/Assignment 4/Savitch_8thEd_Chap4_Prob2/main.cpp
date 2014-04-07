/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on April 5, 2014, 9:39 PM
 * Purpose:Modify Prob 1 for two cars and state who has better MPG.
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
    float gas,miles,gal,gasTwo,mTwo,galTwo;
    //Prompt user for inputs
    //user enters liters of gas consumed by car 1
    cout<<"Enter the number of liters of gasoline consumed by car 1: ";
    cin>>gas;
    //user enters number of miles driven by car 1
    cout<<"Enter the number of miles traveled by your car 1: ";
    cin>>miles;
    //user enters liters of gas consumed by car 2
    cout<<"Enter the number of liters of gasoline consumed by car 2: ";
    cin>>gasTwo;
    //user enters number of miles driven by car 2
    cout<<"Enter the number of miles traveled by your car 2: ";
    cin>>mTwo;
    //equation to convert liters into gallons for car 1 and 2
    gas=gas*LITGAL;
    gasTwo=gasTwo*LITGAL;
    //Function Call
    gal=totCns(gas,miles);
    galTwo=totCns(gasTwo,mTwo);
    //Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output the number of mpg the cars delivered
    cout<<"Car 1 delivered "<<gal<<" miles per gallon."<<endl;
    cout<<"Car 2 delivered "<<galTwo<<" miles per gallon."<<endl;
    //output who has better MPG
    if (gal>galTwo){
        cout<<"Car 1 has better fuel efficiency."<<endl;
    }else
        cout<<"Car 2 has better fuel efficiency."<<endl;
    //Exit Stage Right
    return 0;
}

float totCns(float gas_par, float miles_par)//Function Heading
{
    return (miles_par/gas_par);
}
