/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 *Avg rainfall
 * Created on March 17, 2014, 2:04 PM
 */
//system libs
#include <iostream>
//global constants 


//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
//declare variables
    char mon1[12], mon2[12], mon3[12];
    float rain1,rain2,rain3;
    //ask for input
    cout<<"Enter in the three months you want to average the rainfall for "<<endl;
    cin>>mon1>>mon2>>mon3;
    cout<<"enter the amount of rain that fell for each month(in inches) "<<endl;
    cin>>rain1>>rain2>>rain3;
     //calculations
    float total=(rain1+rain2+rain3)/3;
    cout<<"The average rainfall for "<<mon1<<", "<<mon2<<", and "<<mon3;
    cout<<" is "<<total<<" Inches"<<endl;
        return 0;
    
}

