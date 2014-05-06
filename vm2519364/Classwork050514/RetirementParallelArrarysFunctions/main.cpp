/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 30, 2014, 10:23 AM
 * Retirement
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
float retire(float, float, int, float);
void filRetr(float [], int [], int, float, float, float);
void prntRetr(float [],int);

//Execution Begins Here
int main(int argc, char** argv) {
//Declare variables
    float salary=50000.0f;
    float muniBnd=0.06f;
    float savNded=salary/muniBnd;
    float yrlyDep=0.10f;
    //Declare retirement savings array
    const int YRSTSAV=42;
    float retrmnt[YRSTSAV];
    int 
     //Calculate the retirement savings
    filRetr(retrmnt,YRSTSAV,muniBnd,yrlyDep,salary);
    //Output Results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl;
    cout<<"Yearly Deposit = $"<<yrlyDep*salary<<endl;
    cout<<"Years to save for retirement = "<<YRSTSAV<<endl;
    cout<<"Savings needed to retire = $"<<savNded<<endl;
    //Print the Array
    prntRetr(retrmnt,YRSTSAV);
    //Exit Stage Right
    return 0;
}
void filRetr(float retre[],int rSize, float mb, float yDep, float salary){
    //Calculate the retirement savings
    for(int year=1;year<=rSize;year++){
        years[year]
        retre[year-1]=retire(0,mb,year,yDep*salary);
    }
}
void prntRetr(float retre[],int rSize){
    cout<<"YEAR  Savings $"<<endl;
    for(int year=1;year<=rSize;year++){
        cout<<setw(4)<<year<<setw(2)<<" "<<retre[year-1]<<endl;
    }
}
//Function Retirement
//Inputs
//  p=principle ($'s)
//  i=interest rate (%/year)
//  n=number of compounding periods (yrs)
//  d=deposits ($'s)made each year
//Output
//  Savings to date
float retire(float p, float i, int n, float d){
    //Declare savings
    float savings=p;
    for(int year=1;year<=n;year++){
        savings*=(1+i);
        savings+=d;
    }
    return savings;
}
