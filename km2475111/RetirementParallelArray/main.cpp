/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on May 5, 2014, 10:35 AM
 * Purpose: make a parallel array
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
void filRetr(float [],int[],int,float,float,float);
void prntRetr(float [],int[],int);
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
    int years[YRSTSAV];
    //calculate retirement savings
    filRetr(retrmnt,years,YRSTSAV,muniBnd,yrlyDep,salary);
    //output savings
    cout<<setprecision(2)<<showpoint<<fixed
        <<"Salary = $"<<salary<<endl
        <<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl
        <<"Yearly Deposit = $"<<yrlyDep*salary<<endl
        <<"Years to save for retirement = "<<YRSTSAV<<endl
        <<"Savings needed to retire = $"<<savNded<<endl;
    //print the array
    prntRetr(retrmnt,years,YRSTSAV);
    //Exit stage right!!
    return 0;
}
//calculates retirement savings
float retire(float p,float i,float n,float d){
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
//fills the array with savings per year
void filRetr(float retrmnt[],int years[],int rSize,float muniBnd,
             float yrlyDep,float salary){
    //calculate retirement savings
    for(int year=1;year<=rSize;year++){
        years[year-1]=year;
        retrmnt[year-1]=retire(0,muniBnd,year,yrlyDep*salary);
    }
}
//prints the retirement savings array
void prntRetr(float retrmnt[],int years[],int rSize){
    //print the array
    cout<<"YEAR Savings $"<<endl;
    for(int year=1;year<=rSize;year++){
        cout<<setw(4)<<years[year-1]<<setw(10)<<retrmnt[year-1]<<endl;
    }
}