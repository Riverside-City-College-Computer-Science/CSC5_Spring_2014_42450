/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 7, 2014, 10:08 AM
 * Purpose: Taxes
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
    float income, tax;
    cout<<"Calculate your State Taxes";
    cout<<"from the $'s which you input\n";
//Loop thru the income sequence
while (cin>>income){
       if (income<15000){
         tax = 0;
       }else if (income<=25000){
         tax = ((income-15000)*.05f);
       }else {
           tax = ((income-15000)*.1f);
         }
cout<<"Income = $"<<income;
cout<<"Taxes = $"tax<<endl;
}   
    //Exit Stage Right
    return 0;
}

