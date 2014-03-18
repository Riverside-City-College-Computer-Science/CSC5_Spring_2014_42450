/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 16, 2014, 1:43 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!

int main(int argc, char** argv) {
    
   //Declare variables
    float payRt, hrWeek, depen, grsPay, wthHold, tHomPay, ssnNw, fedItNw, statItNw;
    float ssn = 0.06, fedIt = 0.14, statIt = 0.05, uniond = 10, depNw = 35;
    char ans;
    
    do
    {
    //Inputting the hours worked in a week, and number of dependents
    cout << "Hello, please enter your pay rate.\n";
    cin >> payRt;
    cout << "Insert the number of hours you've worked in a week\n";
    cin >> hrWeek;
    cout << "Insert the number of dependents\n";
    cin >> depen;
    
    //Calculations and if statement
    if(hrWeek > 40)
    {
        grsPay = (payRt * 40) + (1.5 * payRt * (hrWeek - 40));
    }
    else
    {
        grsPay = payRt * hrWeek;
    }
    
    ssnNw = grsPay * ssn;
    fedItNw = grsPay * fedIt;
    statItNw = grsPay * statIt;
    
    if(depen >= 4)
    {
        tHomPay = grsPay - (ssnNw + fedItNw + statItNw + uniond + depNw);
    }
    else
    {
        tHomPay = grsPay - (ssnNw + fedItNw + statItNw + uniond);
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting the answer
    cout << "Your gross weekly pay is " << grsPay << "\nSSN tax: " << ssnNw
         << "\nFederal Income Tax: " << fedItNw << "\nState income: " << statItNw
         << "\nUnion dues: " << uniond << "\nDependents: ";
    
    if(depen >= 4)
    {
        cout << depNw << "\nYou leave with " << tHomPay;
    }
    else
    {
        cout << "0.00\n" << "You leave with ";
        cout << tHomPay;
    }
    //Looping
    cout << "\nTry again?\ny: yes\nn: No\n";
    cin >> ans;
          
    }while (ans == 'y' || ans == 'Y');
    
    //Execution Ends here

    return 0;
}

