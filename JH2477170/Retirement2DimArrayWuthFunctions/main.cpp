/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 5, 2014, 10:14 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//No Global Constants
const int COLS=42;//Year and Savings

//Function Prototypes
float retire(float,float,int,float);
void filRetr(float [] [COLS],int,float,float,float);
void prntRetr(float [][COLS],int);


//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare variables
    float salary=50000.0f;
    float muniBnd=0.06f;
    float savNded=salary/muniBnd;
    float yrlyDep=0.10f;
    //Declare retirement savings array
    const int YRSTSAV=42;
    float retrmnt[YRSTSAV][COLS];
    //Calculate your retirement savings
    filRetr(retrmnt,YRSTSAV,muniBnd,yrlyDep,salary);
    //Output the results
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"Salary = $"<<salary<<endl;
    cout<<"Muni Bond Rate = "<<muniBnd*100<<"%"<<endl;
    cout<<"Yearly Deposit = $"<<yrlyDep*salary<<endl;
    cout<<"Years to save for retirement = "<<YRSTSAV<<endl;
    cout<<"Savings needed to retire = $"<<savNded<<endl;
    //cout<<"Amount in retirement account = $"<<retSav<<endl;
    //print the array
    prntRetr(retrmnt,YRSTSAV);
    //Exit stage right!!!
    return 0;
}
void filRetr(float retrmnt[][COLS],int rSize
             ,float mB,float yDep,float salary){
    //Calculate for variables
    for(int year=1;year<=rSize;year++){
        retrmnt[year-1][0]=year;
        retrmnt[year-1][1]=(0,mB,year,yDep*salary);
        
    }
}
void prntRetr(retre [][COLS],int rSize){
        //Print 
        cout<<setprecision(2)<<fixed<<showpoint;
        cout<<"YEAR SAVINGS $ "<<endl;
        for(int year=1;year<=rSize;year++){
            cout<<setw(4)<<static_cast<int>(retre[year-1][0]
                    <<setw(10)<<retre[year-1][1]<<endl;
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