/* 
 * File:   main.cpp
 * Author: Stephen Boggs
 * Created on March 26, 2014, 10:29 PM
 * Purpose: Assignment 3
 */

//Include system libraries
#include <cstdlib>//I/O stream
#include <iostream>
#include <cmath>//calculations
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float intrst1=.015, intrst2=.010, acctBal, totDue, minPay;
    float tmpInt1, newBal, tmpInt2, tmpInt3;
    //prompt for acct balance
    cout<<"Let's calculate your minimum monthly payment"<<endl;
    cout<<"Enter your account balance in $ "<<endl;
    cin>>acctBal;
    //set decimal place to 2
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //begin if/else statement to display proper min payment
    if (acctBal<=1000){
        //declare temp interest variable and calc interest
        tmpInt1=acctBal*intrst1;
        //calc total due
        totDue=tmpInt1+acctBal;
        cout<<"The total amount due is "<<endl;
        cout<<"$"<<totDue<<endl;
        cout<<"the minimum payment due is "<<endl;
        //use if/else to show min pay due
        if (totDue<=10){
            cout<<"$"<<totDue<<endl;  
        }
        else if(totDue>10){
            minPay=totDue*.10;
            if (minPay>10){
            cout<<"$"<<minPay<<endl;
            }
            else if (minPay<=10){
                cout<<"$10.00"<<endl;
            }     
        } 
    }
    else if (acctBal>1000){
        //use variable newBal for the balance after
        //the first $1000
        newBal=acctBal-1000;
        //calc interest
        tmpInt2=1000*intrst1;
        tmpInt3=newBal*intrst2;
        //calc tot due
        totDue=tmpInt2+tmpInt3+acctBal;
        cout<<"The total amount due is"<<endl;
        cout<<"$"<<totDue<<endl;
        cout<<"The minimum payment due is"<<endl;
        if (totDue<=10){
            cout<<"$"<<totDue<<endl;
        }
        else if (totDue>10){
            minPay=totDue*.10;
            cout<<"$"<<minPay<<endl;
        }
    }
    //exit stage right
    return 0;
}
