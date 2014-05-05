/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 30, 2014, 10:23 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//No Global Constants
float retire(float,float,int,float);

//Execution Starts Here!!!
int main(int argc, char** argv) {
    //Declare Variable
    float salary=50000.0f;
    float muniBnd=0.5f;
    float savNded=salary/muniBnd;
    float yrsTSav=48;
    float yrlyDep=0.10f;
    //Calculate your retirement Savings
    float retSav=retire(0,muniBnd,yrsTSav,yrlyDep*salary);
    //Output Results
    cout<<setpercision(2)<<fixed<<showpoint;
    cout<<"Salary = "<<salary<<endl;
    cout<<"Muni Bond Rate = "<<muniBnd<<"%"<<endl;
    cout<<"Yearly Deposit = $" <<yrsTSav<<endl;
    cout<<"Savings need to retire = $"<<sav
    return 0;
}
//Function Retirement
//Inputs
//      p=principle ($'s)
//      i=interest rate (%/year)
//      n=number of compounding periods (yrs)
//      d=deposits ($'s)
//Outputs
//      Savings to date

float retire(float p,float i,int n,float d){
       //Declare Savings
        float savings=p;
        for(int year=1;year<=n;year++){
            savings*=(1+i);
            savings+=d;
        }
        return savings;
  }