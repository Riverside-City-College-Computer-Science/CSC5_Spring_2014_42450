/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 9:56 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Function Prototypes

//Constants Definitions
const float RECOMMENDEDPERCENT = 0.8;

//Execution Starts here

int main(int argc, char** argv) {
    //Calculate how much insurance the user should purchase to safely be able to rebuild their structure
    float rebuildCost, recommendedInsAmt;
    
    cout << "What is the replacement cost of your structure? $";
    cin >> rebuildCost;
    
    recommendedInsAmt = rebuildCost * RECOMMENDEDPERCENT;
    
    cout << "You should buy at least $" << recommendedInsAmt << " of insurance." << endl;
    //Exit Stage Right
    return 0;
}


