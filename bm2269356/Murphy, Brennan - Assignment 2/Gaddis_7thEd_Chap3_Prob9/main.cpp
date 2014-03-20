/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 10:12 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Constants Definitions
const int MONTHSINYEAR = 12;

//Execution Starts here

int main(int argc, char** argv) {
    //Calculate total monthly and annual running costs of a vehicle
    float loan, insurance, gas, oil, tires, maintenance;
    float monthlyCost, annualCost;
    
    cout << "How much is your monthly loan? $";
    cin >> loan;
    
    cout << "How much is your monthly insurance rate? $";
    cin >> insurance;
    
    cout << "How much is your monthly gas cost? $";
    cin >> gas;
    
    cout << "How much do you spend on oil monthly? $";
    cin >> oil;
    
    cout << "How much is your monthly tire cost? $";
    cin >> tires;
    
    cout << "How much do you spend on monthly maintenance? $";
    cin >> maintenance;
    
    monthlyCost = loan + insurance + gas + oil + tires;
    annualCost = monthlyCost * MONTHSINYEAR;
    
    cout << endl;
    cout << "Your monthly costs are: $" << monthlyCost << "." << endl;
    cout << "Your yearly costs are: $" << annualCost << "." << endl;

    //Exit Stage Right
    return 0;
}


