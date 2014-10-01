/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on April 30, 2014, 10:24 AM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants

//Function Prototypes
float retire (float,float,int,float);

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    float salary=50000.0f;
    float muniBnd=0.05f;
    float savNded=salary/muniBnd;
    float yrsTSav=48;
    float yrlyDep=0.10f;
    //Calculate your retirement savings
    float retSav=retire(0,muniBnd,yrsTSav,yrlyDep*salary);
    //Output the Results
    cout << setprecision(2)<<fixed<<showpoint;
    cout << "Salary = $"<< salary <<endl;
    cout << "Muni Bond Rate = "<< muniBnd*100 << "%" <<endl;
    cout << "Yearly Deposti = $"<< yrlyDep*salary <<endl;
    cout << "Years to save for retirement =" <<yrsTSav<<endl;
    cout << "Savings needed to retire = $" <<savNded <<endl;
    cout << "Amount in retirement account "<< retSav <<endl;
    return 0;
}

//Function Retirement
//Inputs
//  p=principle ($'s)
//  i=interest rate (%/year)
//  n=number of compounding periods (yrs)
//  d=deposits ($'s)
//Output
//  Savings to date
float retire(float p,float i,int n,float d){
    
    //Declare Variables
    float savings=p;
    for(int year=1;year<=n;year++){
        savings*=(1+i);
        savings+=d;
    }
    
    return(savings);
}