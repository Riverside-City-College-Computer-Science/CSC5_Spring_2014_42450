/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 17, 2014, 5:58 PM
 * Purpose: Convert Celsius to Fahrenheit
 */
//System Libraries
#include <iostream> //I/O
#include <cmath>    //Mathematical Equations
#include <iomanip>  //Formatting
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float cels,fahr;
    //Input the Celsius Temperature
    cout<<"Input the Temperature in Celsius degrees:"<<endl;
    cin>>cels;
    //Calculate the temperature in Fahrenheit
    fahr=(cels*9)/5+32;
    //Output the Results
    cout<<setprecision(1)<<fixed<<showpoint<<endl;
    cout<<"The temperature in Fahrenheit degrees is "<<fahr<<"."<<endl;
    //Exit Stage Right!
    return 0;
}

