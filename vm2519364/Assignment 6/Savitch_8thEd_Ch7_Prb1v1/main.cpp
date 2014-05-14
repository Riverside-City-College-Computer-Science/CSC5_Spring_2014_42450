/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 13, 2014, 12:39 PM
 * Average Rainfall
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void inpt(int [], int);
void calc(int&);


//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    const int MONTHS=12;
    int rain[MONTHS];
    //Function Call
    inpt(rain, MONTHS);
    
    //Exit Stage Right
    return 0;
}

void inpt(int a[], int lastMo){
    for (int month=1; month<=lastMo; month++){
        cout<<"Enter the average and actual rainfall for month "<<month<<endl;
        calc(a[month-1]);
    }
}

void calc(int& diff){
    diff=0;
    float avg, act;
    cout<<"Average Rainfall: ";
    cin>>avg;
    cout<<"Actual Rainfall: ";
    cin>>act;
    diff=act-avg;
    
}
