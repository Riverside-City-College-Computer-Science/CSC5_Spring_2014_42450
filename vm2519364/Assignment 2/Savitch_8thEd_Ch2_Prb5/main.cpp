/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 11, 2014, 1:36 PM
 * Purpose: Calculate Loan Amount and Payment
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants
const int CNVPCNT=100;
const int CNVMNTH=12;

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {

//Declare Variables
float reqAmt, intRate, totInt, loanTrm;
float moPymt, facLoan;
char ans;

do
{
cout<<"\n";
//Input Data Required to Calculate Loan Amounts
cout<<"Enter loan amount required: $";
cin>>reqAmt;
cout<<"\n";
cout<<"Enter interest rate(%) of loan: ";
cin>>intRate;
cout<<"\n";
cout<<"Enter the duration of the loan (in months): ";
cin>>loanTrm;
cout<<"\n";        

//Calculations
intRate = (intRate/CNVPCNT);
//totInt = facLoan * intRate * (loanTrm/CNVMNTH); (1)
//reqAmt = facLoan - totInt; (2)
//Solved by substitution of equation (1) in to equation (2)
//and solving for facLoan
facLoan = reqAmt / (1 - intRate * loanTrm/CNVMNTH);
moPymt = facLoan/loanTrm;        

//Set two decimal point answer
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
        
//Output Loan Amounts
cout<<setw(20)<<left<<"Total loan amount:";
cout<<setw(10)<<right<<"$"<<facLoan;
cout<<"\n";
cout<<setw(20)<<left<<"Your monthly payment:";
cout<<setw(11)<<right<<"$"<<moPymt;
cout<<"\n";
cout<<"\n";
//Repeat option
cout<<"Would you like to calculate another loan amount and payment?\n";
cout<<"Press y for yes, n for no, and then press return: ";
cin>>ans;
} while (ans == 'y' || ans == 'Y');
cout<<"\n";
cout<<"Good-Bye and have a nice day.\n";
    
//Exit Stage Right!
    return 0;
}

