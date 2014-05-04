/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 30, 2014, 10:19 AM
 */
//Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//Global Constants
//Function prototypes
float retire (float, float, int, float);
//Execution
int main(int argc, char** argv) {
    cout<<setprecision(2)<<fixed<<showpoint;
    //Declare variables
    float salary=50000.0f;
    float muniBnd=0.05f;
    float savNded=salary/muniBnd;
    float yrsTSav=48;
    float yrlyDep=0.10f;  
    //Calculate your retirement savings
    float retSav=retire(0, muniBnd, yrsTSav, yrlyDep*salary);
    //Output results
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Municipal Bond Rate = "<<muniBnd*100<<"%"<<endl;
    cout<<"Yearly Deposit = $"<<yrlyDep*salary<<endl;
    cout<<"Years to Save for Retirement: "<<yrsTSav<<endl;
    cout<<"Savings Needed to Retire = $"<<savNded<<endl;
    cout<<"Amount in retirement account: $"<<retSav<<endl;
    return 0;
}
//Inputs
//      Function retirement
//      p = principle i = interest, n = compounding periods, d = deposit
//Outputs
//      Saving to date
float retire (float p, float i, int n,float d) {
    //declare savings
    float savings=p;
    for(int year=1;year<=n;year++) {
        savings*=(1+i);
        savings+=d;
    }
    return savings;
}