/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 8, 2014, 9:50 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototype
float interest(float initl_par, float percnt_par, int mnthly_par);

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare Variables
    float initl, percnt, totInt;
    int mnthly;
    char ans;
    
    do{
    //Inputting
    cout << "Hello, please enter your initial balance on your credit card\n";
    cin >> initl;
    cout << "Now enter you monthly interest rate\n%";
    cin >> percnt;
    cout << "Finally, the number of monthly payment\n";
    cin >> mnthly;
    
    //Calculations
    totInt = interest(initl, percnt, mnthly);
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting
    cout << "Your total interest due is: " << totInt << 
            " within " << mnthly << " months." << endl;
    cout << "Would you like to try again?\nY = Yes\nN = No\n";
    cin >> ans;
    
    }while(tolower(ans) == 'y');

    cout << "Goodbye!";
    return 0;
}

float interest(float initl_par, float percnt_par, int mnthly_par)
{
    return (initl_par * (percnt_par / 100)/ 12) * mnthly_par;
}