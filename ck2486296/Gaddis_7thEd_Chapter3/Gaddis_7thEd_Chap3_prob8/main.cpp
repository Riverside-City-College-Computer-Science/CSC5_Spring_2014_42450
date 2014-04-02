/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 *How much insurance
 * Created on March 17, 2014, 4:57 PM
 */
//system libs
#include <iostream>
//global constants 
const float INSPCT=8e-1;

//system prototypes

//execution begins here!!
using namespace std;

int main(int argc, char** argv) {
//declare variables
    float homeval;
    //ask for input
    cout<<"how much is your house worth? "<<endl;
    cin>>homeval;
 //calculations
    float total =(homeval*INSPCT);
    cout<<"The minimum amount of insurance you should buy for the property is $"<<total;
    return 0;
}

