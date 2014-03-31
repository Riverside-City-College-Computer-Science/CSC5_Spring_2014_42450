/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 14, 2014, 8:54 PM
 */

//System Libraries
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

//Global Constant
const int CNVPCNT = 100;
const int CNVMNTH = 12;

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    float loan, oldintrest, newintrest, dration, mnthPay;
    
    //Inputing the info
    cout << "Hello, please input the loan value.\n ";
    cin >> loan;
    cout << "Now enter the interest rate.\n %";
    cin >> oldintrest;
    cout << "Finally, enter the duration of the loan in months\n";
    cin >> dration;
    
    //Calculations
    oldintrest = (oldintrest/CNVPCNT);
    newintrest = loan / (1 - oldintrest * dration/CNVMNTH);
    mnthPay = newintrest / dration;
    
     //Setting decimal points
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Solution
    cout << "The total loan amount is:\n " << newintrest << endl;
    cout << "And your monthly payment is:\n " << mnthPay << endl; 
    
    
    
            
            
            
            

    return 0;
}

