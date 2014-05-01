/* 
 * File:   main.cpp
 * Author: Ezra Guinmapang
 * Date: April 28, 2014, 9:52 AM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global variables and constants

//Function prototypes
float Savings1(float, float, int);      //calculate future value using the pow() function
float Savings2(float, float, int);      //calculate the future value using an iterative loop
float Savings3(float, float, int);      //calculate the future value using a recursive function calling itself
float Savings4(float, float, int);      //calculate the future value using a logarithmic function
//Execution begins HERE
int main(int argc, char** argv) {
    //declare variables
    float f_Val;                        //future value of your savings
    float p_Val = 100.0f;               //present value (principal) of your savings
    float i_Rate = 0.04f;               //interest rate
    int n_Period = 18;                  //number of periods to compound the interest
    cout << "Our Savings Functions" << endl;
    cout << "Present Value = $" << p_Val << endl;
    cout << "Interest Rate = " << i_Rate << "%" << endl;
    cout << "Number of compounding periods = " << n_Period << " years.\n";
    //calculate and output the future value
    cout << "Future Value = $" << fixed << showpoint;
    cout << setprecision(2) << Savings1(p_Val, i_Rate, n_Period) << endl;
    cout << "Future Value = $" << fixed << showpoint;
    cout << setprecision(2) << Savings2(p_Val, i_Rate, n_Period) << endl;
    cout << "Future Value = $" << fixed << showpoint;
    cout << setprecision(2) << Savings3(p_Val, i_Rate, n_Period) << endl;
    cout << "Future Value = $" << fixed << showpoint;
    cout << setprecision(2) << Savings4(p_Val, i_Rate, n_Period) << endl;
    return 0;
}
//Function definitions
float Savings1(float bal, float ir, int n){
    return bal*pow((1+ir),n);
}
float Savings2(float bal, float ir, int n){
    for(int year = 1; year <= n; year++){
        bal*=(1+ir);
    }
    return bal;
}
float Savings3(float bal, float ir, int n){
    if(n == 0) return bal;
    return Savings3(bal, ir, n - 1) * (1 + ir);
}
float Savings4(float bal, float ir, int n){
    return bal * exp(n*log(1+ir));
}