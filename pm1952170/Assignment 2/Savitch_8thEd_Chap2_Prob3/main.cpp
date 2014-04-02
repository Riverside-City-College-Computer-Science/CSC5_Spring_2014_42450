/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 9:21 AM
 * Goal: Total pay due after 7.6% pay increase
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    const float PRCT = .076; //Percent increase
    int sal, rPay, nSal, mSal;
    
    //Prompt user for salary    
    cout<<"Enter previous annual salary $";
    cin>>sal;
    cout<<endl;
    //Equations to calculate totals       
    rPay=sal/2*PRCT;
    nSal=sal*PRCT+sal;
    mSal=nSal/12;
    //Outputs
    cout<<"Retro pay for the past 6 months is $"<<rPay<<endl;
    cout<<"Your new annual salary is $"<<nSal<<endl;
    cout<<"your new monthly salary is $"<<mSal<<endl;
    cout<<endl;
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right
          return 0;
}

