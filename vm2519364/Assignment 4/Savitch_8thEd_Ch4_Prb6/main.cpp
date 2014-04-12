/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 4, 2014, 8:25 PM
 * Purpose: Calculate Interest Due
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float intrst(float inBal, float moInt, int nuMo);
//Returns Total Interest Due on a Credit Balance
//Formal parameter inBal refers to the initial account balance
//Formal parameter moInt refers to the monthly interest rate
//Formal parameter nuMo refers to the number of months for which 
//interest is to be paid

//Execution Begins Here
int main(int argc, char** argv) {
    float inBal, moInt, totInt;
    int nuMo;
    char ans;
    do{
    //Input Initial Balance, Monthly Interest Rate, and Term
    cout<<"\n";
    cout<<"Calculate The Interest Due On Your Credit Account";
    cout<<"\n";
    cout<<"\n";
    cout<<"Enter your initial balance: $";
    cin>>inBal;
    cout<<"\n";
    cout<<"Enter your monthly interest rate(%): ";
    cin>>moInt;
    cout<<"\n";
    cout<<"Enter the number of months interest will be paid: ";
    cin>>nuMo;
    cout<<"\n";
    //Calculation
    totInt=intrst(inBal, moInt, nuMo);
    //Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output Interest Due
    cout<<"Your total interest due is: $";
    cout<<totInt;
    cout<<" over a ";
    cout<<nuMo;
    cout<<" month period.";
    cout<<"\n";
    cout<<"\n";
    cout<<"Would you like to recalculate your interest due?";
    cout<<"\n";
    //Repeat Option
    cout<<"Enter y for yes, n for no: ";  
    cin>>ans;
    }while (ans=='y'||ans=='Y');
    cout<<"\n";
    cout<<"Have a nice day.";
    cout<<"\n";
    //Exit Stage Right
    return 0;
}

float intrst(float inBal, float moInt, int nuMo){
    
  float totInt=inBal*((moInt/100)/12)*nuMo;  
  //float nuBal=inBal+(totInt+(totInt*moInt*nuMo));
  return (totInt);   
}

