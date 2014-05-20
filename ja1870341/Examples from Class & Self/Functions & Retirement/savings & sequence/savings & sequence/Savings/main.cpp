/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 28, 2014, 9:57 AM
 */

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants
//Function Prototypes
float savng1(float,float,int);
float savng2(float,float,int);
float savng3(float,float,int);
float savng4(float,float,int);
//Execution
int main(int argc, char** argv) {
   //Declare variables
    float pv=100, intRate=0.04f, fv;
    int nCmpPer=18;
    //Output inputs
    cout<<"Our savings functions"<<endl;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate - "<<intRate*100<<"%"<<endl;
    cout<<"Number of compounding period = "
            <<nCmpPer<<" (years)"<<endl;
    //Calculate future value
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"Future Value ="
            <<savng1(pv,intRate,nCmpPer)<<endl;
    cout<<"Future Value ="
            <<savng2(pv,intRate,nCmpPer)<<endl;
    cout<<"Future Value ="
            <<savng3(pv,intRate,nCmpPer)<<endl;
    cout<<"Future Value ="
            <<savng4(pv,intRate,nCmpPer)<<endl;
    //Exit stage right
    return 0;
}

float savng1(float balance, float intrst ,int n) {
    
    return balance*pow(1+intrst,n);
    
}
float savng2(float balance, float intrst, int n) {
    for(int year=1;year<=n;year++){
        balance*=(1+intrst);
    }
    return balance;
}
float savng3(float balance, float intrst, int n) {
    if(n==0)return balance;
    return savng3(balance,intrst,n-1)*(1+intrst);
}
float savng4(float balance, float intrst, int n) {
    return balance*exp(n*log(1+intrst));
}
