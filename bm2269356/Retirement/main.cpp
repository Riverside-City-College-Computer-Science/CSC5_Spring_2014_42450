/* 
 * File:   main.cpp
 * Author: Brennan Murphy
 * Created on April 30, 2014, 10:23 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//No Global Constants

//Function Prototypes
float retire(float,float,int,float);

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    float salary=50000.0f;
    float muniBnd=0.06f;
    float savNded=salary/muniBnd;
    float yrsTSav=42;
    float yrlyDep=0.10f;
    //Declare retirement savings array
    const int YRSTSAV = 42;
    float retrmnt[YRSTSAV];
    //Calculate your retirement savings
    for(int year=1;year<=YRSTSAV;year++) {
        retrmnt[year-1] = retire(0,muniBnd,year,yrlyDep*salary);
    }
    //Output the results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl;
    cout<<"Yearly Deposit = $"<<yrlyDep*salary<<endl;
    cout<<"Years to save for retirement = "<<YRSTSAV<<endl;
    cout<<"Savings needed to retire = $"<<savNded<<endl;
    cout << endl;
    cout << setw(10) << left << "Year" << right << "Savings $" << endl;
    for(int year=1;year<=YRSTSAV;year++) {
        cout << setw(10) << left << year << right << " $" << retrmnt[year-1] << endl;
    }
    //Exit stage right!!!
    return 0;
}

//Function Retirement
//Inputs
//   p=prinicple ($'s)
//   i=interest rate (%/year)
//   n=number of compounding periods (yrs)
//   d=deposits ($'s) made each year
//Outputs
//   Savings to date
float retire(float p,float i,int n,float d){
    //Declare savings
    float savings=p;
    for(int year=1;year<=n;year++){
        savings*=(1+i);
        savings+=d;
    }
    return savings;
}