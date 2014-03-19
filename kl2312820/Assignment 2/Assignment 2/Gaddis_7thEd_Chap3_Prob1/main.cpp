/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 12, 2014, 8:02 AM
 */
//System Libraries
#include <iostream> //I/O
#include <iomanip> //Formatting
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float galgas,milsdrv,mpg;
    //Input the number of gallons of gas the car can hold
    //Input the number of miles that can be driven on a full tank of gas
    cout<<"Input the number of gallons of gas the car can hold. "<<endl;
    cin>>galgas;
    cout<<"number of miles that can be driven on a full tank of gas. "<<endl;
    cin>>milsdrv;
    //Converting to miles per gallon
    mpg=milsdrv/galgas;
    //Output the Results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The number of miles that may be driven per "<<endl;
    cout<<"gallon of gas is "<<mpg<<endl;
    //Exit Stage Right!
    return 0;
}

