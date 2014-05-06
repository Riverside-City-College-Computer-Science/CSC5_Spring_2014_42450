/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 30, 2014, 10:23 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//No Global Constants

//Function Prototypes
float retire(float,float,int,float);
void  filRetr(float [],int [],int,float,float,float);
void  prntRetr(float [],int [],int);

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    float salary=50000.0f;
    float muniBnd=0.06f;
    float savNded=salary/muniBnd;
    float yrlyDep=0.10f;
    //Declare retirement savings array
    const int YRSTSAV=42;
    float retrmnt[YRSTSAV];
    int   years[YRSTSAV];
    //Calculate your retirement savings
    filRetr(retrmnt,years,YRSTSAV,muniBnd,yrlyDep,salary);
    //Output the results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl;
    cout<<"Yearly Deposit = $"<<yrlyDep*salary<<endl;
    cout<<"Years to save for retirement = "<<YRSTSAV<<endl;
    cout<<"Savings needed to retire = $"<<savNded<<endl;
    //Print the array
    prntRetr(retrmnt,years,YRSTSAV);
    //Exit stage right!!!
    return 0;
}

void  filRetr(float retre[],int years[],int rSize,
              float mB,float yDep,float salary ){
    //Calculate your retirement savings
    for(int year=1;year<=rSize;year++){
         years[year-1]=year;
         retre[year-1]=retire(0,mB,year,yDep*salary);
    }
}
void  prntRetr(float retre[],int years [],int rSize){
    //Print the array
    cout<<"YEAR Savings $"<<endl;
    for(int year=1;year<=rSize;year++){
         cout<<setw(4)<<years[year-1]<<setw(10)<<retre[year-1]<<endl;
    }
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
