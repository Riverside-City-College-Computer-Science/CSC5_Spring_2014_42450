/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 28, 2014, 8:12 AM
 * Purpose: using functions to implement 3n+1 problem
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

//Global constants

//Function Prototypes
float retire(float,float,float,float);
int main(int argc, char** argv) {
    //Declare variables
    float salary=50000.0f,
          muniBnd=0.05f,
          yrsTSav=48,
          savNded=salary/muniBnd,
          yrlyDep=0.10f;
    //calculate savings
    float retSav=retire(0,muniBnd,yrsTSav,yrlyDep*salary);
    //output savings
    cout<<setprecision(2)<<showpoint<<fixed
        <<"Salary = $"<<salary<<endl
        <<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl
        <<"Yearly Deposit = $"<<yrlyDep<<endl
        <<"Years to save for retirement = "<<yrsTSav<<endl
        <<"Savings needed to retire = $"<<savNded<<endl
        <<"Amount in retirement savings = $"<<retSav<<endl;
    //Exit stage right!!
    return 0;
}
float retire(float p,float i,float n,float d){
    //Function Retirement
    //Inputs
    //   Principle = p
    //   Interest = i
    //   Num of compounding periods (years) = n
    //   Deposits ($'s) = d
    //Outputs
    //   Savings to date
    float savings=p;
    for(int year=1;year<=n;year++){
        savings*=(1+i);
        savings+=d;
    }
    return savings;
}