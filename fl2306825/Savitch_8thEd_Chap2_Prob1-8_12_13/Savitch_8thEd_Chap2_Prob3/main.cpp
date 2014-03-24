/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 14, 2014, 7:40 PM
 */

//System libraries
#include <iostream>
using namespace std;

//Global Constant
const float payInc = 0.076;
//Function prototype

//Execution Starts here!!

int main(int argc, char** argv) {
    
    //Declare variable
    float prevSal, retroAct, newAn, newMnth, answr;

    //Input previous salary
    cout << "Hello, please enter your previous annual salary\n";
    cin >> prevSal;
    
    //Calculations
    newAn = prevSal + (prevSal * payInc);
    newMnth = newAn / 12;
    retroAct = ((prevSal * payInc) / 12) * 6;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Answer
    cout << "Your new annual salary is " << newAn << " per year\n";
    cout << "Your new monthly pay rate is " << newMnth << " per month\n";
    cout << "And last, your retroactive pay for the last six months is a one time payment of ";
    cout << retroAct;
    
            
    
    return 0;
}

