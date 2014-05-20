/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 5, 2014, 10:28 AM
 * Purpose: retirement with arrays and functions
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

//Global constants
const int COLS=2;//total columns
//Function Prototypes
float retire(float,float,float,float);
void filRetr(float [][COLS],int,float,float,float);
void prntRetr(float [][COLS],int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    float salary=50000.0f,
          muniBnd=0.06f,
          savNded=salary/muniBnd,
          yrlyDep=0.10f;
    //Declare retirement savings array
    const int YRSTSAV=42;
    float retrmnt[YRSTSAV][COLS];
    //calculate retirement savings
    filRetr(retrmnt,YRSTSAV,muniBnd,yrlyDep,salary);
    //output savings
    cout<<setprecision(2)<<showpoint<<fixed
        <<"Salary = $"<<salary<<endl
        <<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl
        <<"Yearly Deposit = $"<<yrlyDep*salary<<endl
        <<"Years to save for retirement = "<<YRSTSAV<<endl
        <<"Savings needed to retire = $"<<savNded<<endl;
    //print the array
    prntRetr(retrmnt,YRSTSAV);
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
void filRetr(float retrmnt[][COLS],int rSize,float muniBnd,
             float yrlyDep,float salary){
    //calculate retirement savings
    for(int year=1;year<=rSize;year++){
        retrmnt[year-1][0]=year;
        retrmnt[year-1][1]=retire(0,muniBnd,year,yrlyDep*salary);
    }
}
//prints the retirement savings array
void prntRetr(float retrmnt[][COLS],int rSize){
    //print the array
    cout<<"YEAR Savings $"<<endl;
    for(int year=1;year<=rSize;year++){
        cout<<setw(4)<<static_cast<int>(retrmnt[year-1][0])
            <<setw(10)<<retrmnt[year-1][1]<<endl;
    }
}