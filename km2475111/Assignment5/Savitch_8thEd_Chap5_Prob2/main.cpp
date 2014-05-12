/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 12, 2014, 9:38 AM
 * Purpose: Output time after waiting
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void getInput(int &,int &,int &,int &,char&);
void waitTim(int &,int &,int &,int &,string,string);
void print(int,int);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    char ampm;
    string amPm;
    int curHrs,curMin,waitHrs,waitMin;
    //Exit Stage Right!
    return 0;
}
void getInput(int &a,int &b,int &c,int &d,char &AP){
    cout<<"Enter the Current Time in 24-hr format and "
        <<"use A for AM or P for PM"<<endl
        <<"(i.e. 2:30 PM = 14 30 P): ";
    cin>>a>>b>>AP;
    cout<<"Enter the waiting time in hours and minutes."<<endl
        <<"(i.e. 2 hours 30 min = 2 30): ";
    cin>>c>>d;
}
void waitTim(int &,int &);
void print(int,int);