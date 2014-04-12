/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 5:18 PM
 * 
 */
//system Libraries 
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    float memship=2500,meminc=4e-2;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"the current cost of membership is $"<<memship<<endl;
    for(int year=1;year<=6;year++){
        memship+=memship*meminc;
        cout<<"In "<<year<<" year the membership cost will be $"<<memship<<endl;
    }
    //exit stage right
    return 0;
}

