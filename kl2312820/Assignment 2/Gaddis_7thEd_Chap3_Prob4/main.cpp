/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 13, 2014, 10:39 AM
 */
//System Libraries
#include <iostream> //I/O
#include <cmath> //Mathematical Equations
#include <iomanip> //Formatting
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
   //Declare Variables
    string moOne,moTwo,moThree;
    float rnOne,rnTwo,rnThree,average;
   //Input the name for three months
    cout<<"Input the names of three months."<<endl;
    cout<<"Month One:"<<endl;
     cin>>moOne;
    cout<<"Month Two:"<<endl;
     cin>>moTwo;
    cout<<"Month Three:"<<endl;
     cin>>moThree;
   //Input the rainfall for the months
    cout<<"Input the rainfall (in inches) of the three months."<<endl;
    cout<<moOne<<":"<<endl;
     cin>>rnOne;
    cout<<moTwo<<":"<<endl;
     cin>>rnTwo;
    cout<<moThree<<":"<<endl;
     cin>>rnThree;
   //Calculate the average rainfall
     average=(rnOne+rnTwo+rnThree)/3;
   //Output the average rainfall
     cout<<fixed<<setprecision(2)<<showpoint;
     cout<<"The average rainfall for "<<moOne<<", "<<moTwo<<",and ";
     cout<<moThree<<" is ";
     cout<<average<<"inches."<<endl;
   //Exit Stage Right!
    return 0;
}

