/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 12, 2014, 2:28 PM
 * Purpose: Convert Celsius To Fahrenheit
 */

//System Libraries
#include <iostream> //Input/Output
#include <iomanip> //Formatting
using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float fahr,cel;
    //Output The Table
    cout<<" Celsius     Fahrenheit"<<endl;
    cout<<"------------------------"<<endl;
    
    //Create Loop And Output Results
    for (cel=0;cel<=20;cel++){
        fahr=(9/5)*cel+32;
        if (cel<10){
            cout<<" "<<cel<<setw(16)<<fahr<<endl;
        }
        else cout<<" "<<cel<<setw(15)<<fahr<<endl;
    }
    

    return 0;
}

