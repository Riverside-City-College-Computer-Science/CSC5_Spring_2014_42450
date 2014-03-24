/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 1, 2014, 1:08 PM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Systems

//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int numQtrs, numDimes, numNickels, total_sum;
  
    //Input Numbers
    cout<<"Enter quantity of "<<endl;
    cout<<"Quarters = Q, Dimes = D, Nickels = N as"<<endl;
    cout<<"Q+D+N "<<endl;
    cout<<"Press return after input numbers"<<endl;
    cin>>numQtrs>>numDimes>>numNickels;
    
    //Calculate the Sum in Cents
    total_sum = numQtrs*25 + numDimes*10 + numNickels*5;
    
    //Output the Sum in Cents
    cout<<"Total Sum = "<<total_sum<<" cents"<<endl;
    
    //Exit Stage Right!
    return 0;
}

