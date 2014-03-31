/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 *property tax
 * Created on March 17, 2014, 5:58 PM
 */
//system libs
#include <iostream>
#include <iomanip>

//global constants 
const float ASMTVAL=60e-2;
const float TAX=64e-2/100;
//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
    //declare variables 
    float propval,asprop,proptax;
    //ask for input
    cout<<"What is the value of the property"<<endl;
    cin>>propval;
    //calculations
    asprop=propval*ASMTVAL;
    proptax=asprop*TAX;
    //output
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"The the assessment value of the property is $"<<asprop<<endl;
    cout<<"The property tax is $"<<proptax<<endl;
    //exit stage right
    return 0;
}

