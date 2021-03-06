/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 30, 2014, 10:23 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//No Global Constants

//Function prototype
float retire(float, float, int, float);

//Execution Starts here!!
int main(int argc, char** argv) {
    //Declare variables
    float salary = 50000.0f;
    float muniBnd = 0.05f;
    float savNded = salary / muniBnd;
    float yrsTSav = 48;
    float yrlyDep = 0.10f;
    //Calculate your retirement savings
    float retSav = retire(0, muniBnd, yrsTSav, yrlyDep * salary);
    //output the results
    cout << setprecision(2) << fixed << showpoint;
    cout << "Salary = " << salary << endl;
    cout << "Muni Bond Rate = " << muniBnd * 100 << "%" << endl;
    cout << "Yearly Deposits = $" << yrlyDep + salary << endl;
    cout << "Years to save for retirement = " << yrsTSav << endl;
    cout << "Savings needed to retire = $" << savNded << endl;
    cout << "Amount in retirement account = $" << retSav << endl;
    return 0;
}

//Function retirements
//input
//p = prinicple ($'s)
//i = interest rate (%/year)
//n = number of compounding periods (yrs)
//d = deposits ($;s)
//outputs
//savings to date
float retire(float p, float i, int n, float d){
    //declare savings
    float savings = p;
    for(int year = 1; year < n; year++){
        savings *= (1 + i);
        savings += d;
    }
    return savings;
}