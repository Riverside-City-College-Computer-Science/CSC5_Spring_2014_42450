/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 28, 2014, 10:00 AM
 * Pupose: Create A Savings Program
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <iomanip> //Formatting
#include <ctime> //Randomization
#include <cmath> //Mathematic Functions
using namespace std;

//Global Constants

//Function Prototypes
float savings1(float,float,int);
float savings2(float,float,int);
float savings3(float,float,int);
float savings4(float,float,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pv=100.0f,intRate=0.04f,fv;
    int nCmpPer=18;
    
    //Output The Inputs
    cout<<"Our Savings Functions"<<endl;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"Number Of Compounding Periods = "
            <<nCmpPer<<" (years)"<<endl;
    
    //Formatting 2 Decimal Places
    cout<<setprecision(2)<<showpoint<<fixed;
    
    //Output Savings 1 Function
    cout<<"Future Value = $"
            <<savings1(pv,intRate,nCmpPer)<<endl;
    
    //Output Savings 2 Function
    cout<<"Future Value = $"
            <<savings2(pv,intRate,nCmpPer)<<endl;
    
    //Output Savings 3 Function
    cout<<"Future Value = $"
            <<savings3(pv,intRate,nCmpPer)<<endl;
    
    //Output Savings 4 Function
    cout<<"Future Value = $"
            <<savings4(pv,intRate,nCmpPer)<<endl;
    
    //Exit Stage Right!
    return 0;
}

float savings1(float balance,float intrst,int n){
    return balance*pow((1+intrst),n);
}

float savings2(float balance,float intrst,int n){
    //Loop And Calculate The Added Interest Every Year
    for(int year=1;year<=n;year++){
        balance*=(1+intrst);
    }
    return balance;
}

float savings3(float balance,float intrst,int n){
    if(n==0)return balance;
    return savings3(balance,intrst,n-1)*(1+intrst);
}

float savings4(float balance,float intrst,int n){
    return balance*exp(n*log(1+intrst));
}

