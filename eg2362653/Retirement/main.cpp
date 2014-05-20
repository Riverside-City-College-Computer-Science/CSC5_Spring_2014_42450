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
float Retire(float, float, int, float);      

//Execution begins HERE
int main(int argc, char** argv) {
    //declare variables
    float salary = 50000.0f;            
    float i_Bond = 0.05f;               
    float savAmt = salary/i_Bond;       
    int n_Years = 35;                  
    float depyear = 0.20f;              
    //calculate your retirement savings
    float r_Sav = Retire(0, i_Bond, n_Years, depyear * salary);
    cout << "Salary = $" << fixed << showpoint << setprecision(2)<< salary << endl;
    cout << "Muni bond Rate = " << fixed << showpoint << setprecision(2)<< i_Bond*100 << "%\n";
    cout << "Yearly Deposit = $" << depyear << endl;
    cout << "Number of years to save = " << n_Years << endl;
    cout << "Amount in Retirement Account = $" << fixed << showpoint << setprecision(2)<< r_Sav << endl;
    return 0;
}
//Function definitions
//Inputs: pal = principal amount
//ir = interest rate (%/year)
//n = number of years to save
//dep = regular yearly deposit amount
//Output: regular deposit amount
float Retire(float pal, float ir, int n, float dep){
    //declare savings
    float savings = pal;
    for(int year = 0; year <= n; year++){
        savings *= (1+ir);
        savings += dep;
    }
    return savings;
}
