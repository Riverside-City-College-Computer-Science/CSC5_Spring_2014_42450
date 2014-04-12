/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 10:10 PM
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
    float cel,fahr;
    //output design
    cout<<" celsius     fehrenheit"<<endl;
    cout<<"------------------------"<<endl;
    //loop
    for(cel=0;cel<=20;cel++){
        fahr=(9/5)*cel+32;
        if(cel<10){
            cout<<" "<<cel<<setw(16)<<fahr<<endl;
        }
        else
            cout<<" "<<cel<<setw(15)<<fahr<<endl;
    } 
    return 0;
}

