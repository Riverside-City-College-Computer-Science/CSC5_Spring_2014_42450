/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 26, 2014, 6:14 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{

//Declare Variables
double amountdue, interestdue, minpayment, balance;
char Continue;
do
{
//Input balance due
cout<<"Enter balance due: ";
cin>>balance;
if(balance>1000)
//ficalculatting the interest rate
interestdue = ((balance - 1000)*.01 + (1000)*.015);
else
//ficalculatting the interest rate
interestdue = balance*.015;
//ficalculatting the amount due
amountdue = balance + interestdue;
//ficalculatting the minpayment
minpayment = amountdue<=10?
amountdue : ((amountdue*.1)> 10? (amountdue*.1):10);
//fDisplay interest rate on balance
cout<<"\n Interest on balance is : "<<interestdue;
//Display total amount due
cout<<"\n Total amount due is: "<<amountdue;
//Display minimum payment
cout<<"\n Minimum payment is: "<<minpayment;
cout<<"\n To repeat calculations for different variables then press 'y' or 'Y' ";
cin>>Continue;
}
while (Continue =='y' || Continue =='Y');
//Pause system for while
system("pause");

//End main function
    
return 0;
}

