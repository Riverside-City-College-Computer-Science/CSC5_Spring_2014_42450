/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on April 6, 2014, 6:13 PM
 * Purpose: Compute the value of users one stock after inputs
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float tot(int wholeD_par,int numer_par,int denom_par);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int shares,wholeD,numer,denom;
    float val,val2;
    char ans;
    //Prompt user for inputs
    //user inputs shares, whole dollar, numerator/denominator for
    //fraction portion of price
    do{
    cout<<"Enter the number of shares you own: ";
    cin>>shares;
    cout<<"Enter the whole dollar portion of the price of your shares: ";
    cin>>wholeD;
    cout<<"Enter the numerator of the fraction of dollar amount: ";
    cin>>numer;
    cout<<"Enter the denominator of the fraction of dollar amount: ";
    cin>>denom; 
    //Set decimal precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //call function
    val=tot(wholeD,numer,denom);
    //value of shares
    val=val/shares;    
    cout<<"The price of one share of stock is $"<<val<<endl;
    //value of total stock
    val2=val*shares;
    cout<<"The total value of your shares is $"<<val2<<endl;
    cout<<endl;
    cout<<"Would you like to run the program again? (Y/N): ";
    cin>>ans;
    cout<<endl;
    }while (ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}

float tot(int wholeD_par,int numer_par,int denom_par){//function heading    
    return (((wholeD_par*static_cast<float>(denom_par))+static_cast<float>(numer_par))/static_cast<float>(denom_par));
}
