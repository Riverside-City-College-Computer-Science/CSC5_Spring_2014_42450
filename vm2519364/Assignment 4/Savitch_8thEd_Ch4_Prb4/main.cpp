/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 30, 2014, 8:20 PM
 * Purpose: Estimate the Rate of Inflation
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
float infla(float lstYr_parm, float today_parm);
//Will calculate the rate of inflation, in percent
//The formal parameter lstYr is the price of any item last year
//The formal parameter today is the price of the same item today.

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    float estInf, lstYr, today;
    char ans;
    do{
    //Input Prices
    cout<<"\n";
    cout<<"Estimate the rate of inflation.\n";
    cout<<"\n";
    cout<<"Enter last years price of any item: $";
    cin>>lstYr;
    cout<<"\n";
    cout<<"Enter today's price of that same item: $";
    cin>>today;
    cout<<"\n";
    //Function Call
    estInf = infla(lstYr, today);
    //Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Output Inflation Rate
    cout<<"The rate of inflation based on last years prices is ";
    cout<<estInf;
    cout<<" percent.";
    cout<<"\n";
    cout<<"\n";
    //Repeat Calculation Option
    cout<<"Would you like to recalculate an inflation estimate?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
} while (ans=='y'||ans=='Y');
cout<<"\n";
cout<<"The End";
    //Exit Stage Right
    return 0;
}

float infla(float lstYr_parm, float today_parm)
{
    float diff;
    diff=(today_parm-lstYr_parm);
    return ((diff/lstYr_parm)*100);
}