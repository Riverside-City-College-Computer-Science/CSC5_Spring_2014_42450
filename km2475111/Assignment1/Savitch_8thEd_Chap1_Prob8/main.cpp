/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * Created on February 24, 2014, 8:40 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functions and Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    int qtrVal = 25;
    int dimVal = 10; 
    int nikVal = 5;
    int numQtrs, numDims, numNickl = 0;
    int totalVal = 0;
    int totalCents = 0;
    cout << "Enter number of quarters you have: ";
    cin >> numQtrs;
    cout << "Enter number of dimes you have: ";
    cin >> numDims;
    cout << "Enter number of nickels you have: ";
    cin >> numNickl;
    int totQtrs = qtrVal * numQtrs;
    int totDim = dimVal * numDims;
    int totNik = nikVal * numNickl;
    int dollars = 0;
    totalVal = totQtrs + totDim + totNik;
    totalCents = totalVal % 100;
    if (totalVal > 100){
        dollars = totalVal / 100;
        if (dollars == 1){
            cout << "You have " << dollars << " dollar." << endl;
        }
        else{
            cout << "You have " << dollars << " dollars." << endl;
        }
    }
    cout << "You have " << totalCents << " cents." << endl;
    cout << "That is the end of the program." << endl;
    
    return 0;
}
    

