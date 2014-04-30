/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 30, 2014, 10:24 AM
 * Purpose: Create Retirement Function
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip> // Formatting
using namespace std;

//Global Constants

//Function Prototypes
float retire(float,float,int,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float salary=50000.0f; //Salary
    float muniBnd=0.05f; //MunicipalBond
    float savNded=salary/muniBnd; //Savings Needed
    float yrsTSav=48; //Years To Save
    float yrlyDep=0.10f; //Yearly Deposit
    
    //Calculate Your Retirement Savings
    float retSav=retire(0,muniBnd,yrsTSav,yrlyDep*salary);
    //Output The Results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Salary = $"<<salary<<"."<<endl;
    cout<<"Municipal Bond Rate = "<<muniBnd*100<<"%."<<endl;
    cout<<"Yearly Deposit = $"<<yrlyDep*salary<<"."<<endl;
    cout<<"Years to save for retirement = "<<yrsTSav<<"."<<endl;
    cout<<"Savings needed to retire = $ "<<savNded<<endl;
    cout<<"Amount in retirement account = $ "<<retSav<<endl;
    return 0;
}

//Function Retirement
//Inputs
// p=Principle ($'s)
// i=Interest Rate (%/Year)
// n=Number Of Compounding Periods
// d=Deposits ($'s)
//Outputs
// Savings To Date

float retire(float p,float i,int n,float d){
    //Declare Savings
    float savings=p;
    for(int year=1;year<=n;year++){
        savings*=(1+i);
        savings+=d;
    }
    return savings;
}