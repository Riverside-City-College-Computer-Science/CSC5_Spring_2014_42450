/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 28, 2014, 10:14 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>

using namespace std;

//Global Constants

//Function Prototype
float savngs1(float,float,int);
float savngs2(float,float,int);
float savngs3(float,float,int);
float savngs4(float,float,int);

//Execution Start Here
int main(int argc, char** argv) {
    //Declare out savings variables
    float pv=100.0f,intRate=0.04f,fv;//
    int nCmpPer=18;
    //output the input
    cout<<"Our Savings Functions"<<endl;
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Number of compounding periods = "
    cout<<"Interest Rate = "
            nCmpPer<<" (year)"<<endl;
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

float savngs3(float balance, float intrst,int n){
    return balance*exp(n*log(1+intrst));
}

float savngs3(float balance, float intrst,int n){
    if (n==0)return balance;
    return savngs3(balance,intrst,n-1)*(1+intrst);
}

float savngs2 (float balance, float intrst,int n){
    //Loop and calculate the added interest every year
    for(int year;year<=;year++){
        balance*=(1+intrst);
    }
    return balance;
}
float savngs1(float balance, float intrst,int n){
    return balance*pow((18+intrst)),n;
}