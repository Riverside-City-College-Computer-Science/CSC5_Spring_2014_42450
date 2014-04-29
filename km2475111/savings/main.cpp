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
float savngs1(float,float,int);
float savngs2(float,float,int);
float savngs3(float,float,int);
float savngs4(float,float,int);
int main(int argc, char** argv) {
    //Declare variables
    float pv=100.0f,intRate=0.04f;
    int nCmpPer=18;
    //output savings
    cout<<"Our savings functions"<<endl
        <<"Present values = $"<<pv<<endl
        <<"Interest Rate = "<<intRate*100<<"%"<<endl
        <<"Number of compounding periods = "<<nCmpPer
        <<" (years)"<<endl;
    //calculate and output
    cout<<setprecision(2)<<showpoint<<fixed
        <<"Future Value = $"
        <<savngs1(pv,intRate,nCmpPer)<<endl
        <<"Future Value = $"
        <<savngs2(pv,intRate,nCmpPer)<<endl
        <<"Future Value = $"
        <<savngs3(pv,intRate,nCmpPer)<<endl
        <<"Future Value = $"
        <<savngs4(pv,intRate,nCmpPer)<<endl;
    //Exit stage right!!
    return 0;
}
float savngs1(float balance,float intrst, int n){
    //expensive to call
    return balance*pow((1+intrst),n);
}
float savngs2(float balance,float intrst, int n){
    //loop and calculate interest for every year
    for(int year=1;year<=n;year++){
        balance*=(1+intrst);
    }
    return balance;
}
float savngs3(float balance,float intrst, int n){
    //self recursion
    if(n==0)return balance;
    return savngs3(balance,intrst,n-1)*(1+intrst);
}
float savngs4(float balance,float intrst, int n){
    //using logs
    return balance*exp(n*log(1+intrst));
}