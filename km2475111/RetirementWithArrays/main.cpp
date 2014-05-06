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
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    float salary=50000.0f,
          muniBnd=0.06f,
          savNded=salary/muniBnd,
          yrlyDep=0.10f;
    //Declare retirement savings array
    const int YRSTSAV=42;
    float retrmnt[YRSTSAV];
    //calculate retirement savings
    for(int year=1;year<=YRSTSAV;year++){
        retrmnt[year-1]=retire(0,muniBnd,year,yrlyDep*salary);
    }
    //output savings
    cout<<setprecision(2)<<showpoint<<fixed
        <<"Salary = $"<<salary<<endl
        <<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl
        <<"Yearly Deposit = $"<<yrlyDep*salary<<endl
        <<"Years to save for retirement = "<<YRSTSAV<<endl
        <<"Savings needed to retire = $"<<savNded<<endl;
    //print the array
    cout<<"YEAR Savings $"<<endl;
    for(int year=1;year<=YRSTSAV;year++){
        cout<<setw(4)<<year<<setw(10)<<retrmnt[year-1]<<endl;
    }
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