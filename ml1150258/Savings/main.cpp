/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 28, 2014, 8:11 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

//No Global Constants

//Function Prototypes
float savngs1(float,float,int);
float savngs2(float,float,int);
float savngs3(float,float,int);
float savngs4(float,float,int);

int main(int argc, char** argv) {
    //Declare our savings variables
    float pv=100.0f,intRate=0.04f,fv;
    int nCmpPer=18;
    //Output the inputs
    cout<<"Our Savings Functions"<<endl;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"Number of compounding periods = "
            <<nCmpPer<<" (years)"<<endl;
    //Calculate and output the future value
    cout<<setprecision(2)<<showpoint<<fixed;
    cout<<"Future Value = $"
            <<savngs1(pv,intRate,nCmpPer)<<endl;
    cout<<"Future Value = $"
            <<savngs2(pv,intRate,nCmpPer)<<endl;
    cout<<"Future Value = $"
            <<savngs3(pv,intRate,nCmpPer)<<endl;
    cout<<"Future Value = $"
            <<savngs4(pv,intRate,nCmpPer)<<endl;
    //Exit stage right
    return 0;
}

float savngs4(float balance,float intrst,int n){
    return balance*exp(n*log(1+intrst));
}

float savngs3(float balance,float intrst,int n){
    if(n==0)return balance;
    return savngs3(balance,intrst,n-1)*(1+intrst);
}

float savngs2(float balance,float intrst,int n){
    //Loop and calculate the added interest every year
    for(int year=1;year<=n;year++){
        balance*=(1+intrst);
    }
    return balance;
}

float savngs1(float balance,float intrst,int n){
    return balance*pow((1+intrst),n);
}

