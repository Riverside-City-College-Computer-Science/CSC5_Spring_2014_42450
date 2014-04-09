/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on March 15, 2014, 1:07 PM
 */

//system libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    string month1, month2, month3;
    float rain1, rain2, rain3, avg;
    
    //prompt user for the month and rainfall
    cout<<"Enter the names of the three months:"<<endl;
    cin>>month1;
    cin>>month2;
    cin>>month3;
    cout<<"Enter the respective amount of rainfall in inches:"<<endl;
    cin>>rain1;
    cin>>rain2;
    cin>>rain3;
    
    //calculate the average rainfall 
    avg=(rain1+rain2+rain3)/3;
    
    //Output the average rainfall of the three months
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average monthly rainfall for "<<month1<<", "<<month2<<",and ";
    cout<<month3<<" is "<<avg<<" inches."<<endl;
    

    return 0;
}

