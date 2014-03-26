/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 8:56 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//Function Prototypes

//Constants Definitions

//Execution Starts here

int main(int argc, char** argv) {
    //Average 3 months' rainfall, output the average to the user
    string month1name, month2name, month3name;
    float month1amt, month2amt, month3amt;
    float avgRainfall;
    
    cout << "Input the first month's name, then its amount of rainfall (inches, separated by a space): ";
    cin >> month1name >> month1amt;
    
    cout << "Second month's name and rainfall amount: ";
    cin >> month2name >> month2amt;
    
    cout << "Third month's name and rainfall amount: ";
    cin >> month3name >> month3amt;
    
    avgRainfall = (month1amt + month2amt + month3amt) / 3;
    
    cout << fixed << setprecision(1) << endl;
    cout << "The average rainfall for " << month1name << ", " << month2name << ", and " << month3name << " is: " << avgRainfall << "." << endl;
    
    //Exit Stage Right
    return 0;
}