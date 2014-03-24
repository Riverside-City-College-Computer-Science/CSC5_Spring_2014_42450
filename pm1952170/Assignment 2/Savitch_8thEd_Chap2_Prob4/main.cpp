/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 10:41 AM
 * Use Problem 3 and calculate retro pay for any amount of months.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    const float PRCT = .076; //7.6% percent increase
    int sal, rPay, nSal, mSal, mon;
    
    //Prompt user for salary    
    cout<<"Enter previous annual salary $";
    cin>>sal;
    cout<<"Enter number of months retro active pay is due ";
    cin>>mon;
    cout<<endl;
    //Equations to calculate totals       
    rPay=sal/12*PRCT*mon;//retro pay
    nSal=sal*PRCT+sal;//new salary
    mSal=nSal/12;//monthly salary
    //Outputs
    cout<<"Retro pay for the past "<<mon<<" months is $"<<rPay<<endl;
    cout<<"Your new annual salary is $"<<nSal<<endl;
    cout<<"your new monthly salary is $"<<mSal<<endl;
    cout<<endl;
    cout<<"This is the end of the program."<<endl;
    //Exit Stage Right
          return 0;
}
