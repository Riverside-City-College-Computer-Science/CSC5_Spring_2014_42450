/* 
 * File:   main.cpp
 * Author: christopher Merrill
 *
 * Created on April 7, 2014, 8:34 AM
 */
//system libraries
#include <cstdlib>
#include <iostream>
#include<cmath>
#include<iomanip>

using namespace std;
//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    float income,tax=0, taxinc;
    //taxinc is "taxed income"
    cout<<"Please enter amount made in income."<<endl;
    cin>>income;
    //set standards to which the income will be taxed
    if (income<15000)
            tax=0;
    else if(income<25000)
        tax=(income-15000)*.05;
    else tax = (1000)*.05+(income-25000)*.10;
    taxinc=income-tax;
    //cout the tax and total to user
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your tax is $"<<tax<<" and your income after taxes is $"<<
            taxinc<<"."<<endl;

    return 0;
}

