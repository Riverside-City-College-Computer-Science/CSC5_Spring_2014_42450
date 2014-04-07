/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on April 7, 2014, 9:37 AM
 * Calculate state income taxes
 */

//System libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float income,tax;

    //Input the term to stop the sequence
    cout << "Calculate your State Taxes "
            << "from the $'s income which you input" << endl;

    //Loop through sequence
    while(cin >> income){
        if(income < 15000) {
            tax=0;
        } else if (income <= 25000) {
            tax = (income-15000) * .05f;
        } else {
            tax = 10000 * .05f + (income-25000) * .1f;
        }
        cout << "Income = $ " << income;
        cout << "   Tax = $ " << tax << endl;
    };
    
    return 0;
}

