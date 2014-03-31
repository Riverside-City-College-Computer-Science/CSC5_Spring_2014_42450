/* 
 * File:   main.cpp
    * Author: Frank Luna
 *
 * Created on March 21, 2014, 7:31 PM
 */

//System Libraries
#include <iostream>
#include<cmath>
using namespace std;

//Global Constant
const int CNVPCNT = 10;//Percent
const int CNVMNTH = 1.5;
//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    float intrst, totlAmt, minmumPy, bal, ans;
do   
{
    //inputting balance
    cout << "Hello, please insert your account balance.\n";
    cin >> bal;
    
    if(bal < 1000)
    {
        intrst = 1.5;
        totlAmt = bal * intrst;
        cout << "Total amount with 1.5 interest due is: " << totlAmt << endl;   
    }
    else if(bal > 1000)
    {
        intrst = 0.01;
        totlAmt = bal * intrst;
        cout << "Total amount with 1.5 interest due is: " << totlAmt << endl;
    }
    
    //Minimum payment
    if(bal < 10)
    {
        
        cout << "The minimum payment is: " << bal << endl;
    }
    else if(bal > 10)
    {
        minmumPy = bal/CNVPCNT;
        cout << "The minimum payment is: " << minmumPy; 
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Loop
    cout << "\nDo you want to try again?\ny = Yes\nn = No\n";
    cin >> ans;
    
}while(ans == 'y' ||ans == 'Y');

cout << "Goodbye!";

    return 0;
}

