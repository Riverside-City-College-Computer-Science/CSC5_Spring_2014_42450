/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 6:57 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes

//Constants Definitions

//Execution Starts here

int main(int argc, char** argv) {
    //Calculate miles per gallon based on user input
    float galCapacity, milesDrivable, mpg;
    
    cout << "Please enter the number of gallons the tank can hold: ";
    cin >> galCapacity;
    
    cout << "How many can the car be driven on a tank of gas? ";
    cin >> milesDrivable;
    
    mpg = milesDrivable / galCapacity;
    
    cout << showpoint << fixed << setprecision(2) << endl;
    cout << "With a tank that can hold " << galCapacity << " gallons of gas, " 
         << endl << "if you can drive " << milesDrivable << " miles you are getting roughly "
         << endl << mpg << " miles per gallon.";
    
    //Exit Stage Right
    return 0;
}