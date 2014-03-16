/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 13, 2014, 11:32 PM
 */
#include <iostream>
#include <cmath>
using namespace std;
//Global constants
const float PERCENT=100;
//Function prototypes
//Execution begins here
int main(int argc, char** argv) {
//Declare variables
    float price, infl, year1p, year2p, year3p;
    cout<<"Please enter the price of your item"<<endl;
    cin>>price;
    cout<<"Enter your annual inflation rate as a percentage"<<endl;
    cin>>infl;
    cout<<"The price of your item in three years will be $";
//Calculations (purposely avoiding loops, so I picked three years)
    year1p=(price+(price*(infl/PERCENT)));
    year2p=(year1p+(year1p*(infl/PERCENT)));
    year3p=(year2p+(year2p*(infl/PERCENT)));
    int penies=(year3p+0.005)*PERCENT;
    year3p=static_cast<float>(penies)/PERCENT;
    cout<<year3p;
//Exit stage right    
    return 0;
}

