/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 13, 2014, 10:01 AM
 */
//System Libraries
#include <iostream> //I/O
#include <cmath> //Mathematical Equations
#include <iomanip> //Formatting

using namespace std;

//System Libraries

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float tstScr1,tstScr2,tstScr3,average;
    float tstScr4,tstScr5;
    //Input the five test scores
    cout<<"Input the scores for the five tests."<<endl;
    cin>>tstScr1>>tstScr2>>tstScr3>>tstScr4>>tstScr5;
    //Calculate the average
    average=(tstScr1+tstScr2+tstScr3+tstScr4+tstScr5)/5;
    //Output the average
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average score is: "<<average<<endl;
    //Exit Stage Left!
    return 0;
}

