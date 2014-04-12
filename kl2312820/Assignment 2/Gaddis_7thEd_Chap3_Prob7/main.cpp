/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 17, 2014, 1:41 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Prototype Functions

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int cookBag,serving,numcook;
    float cal,totcal;
    //Assign Variables
    cal=75;
    //Input the number of cookies that you ate
    cout<<"How many cookies did you eat? "<<endl;
    cin>>numcook;
    //Calculate the total number of calories
    totcal=static_cast<float>(numcook)*cal;
    //Output the Results
    cout<<"The total number of calories you consumed is ";
    cout<<totcal<<"cal."<<endl;
    //Exit Stage Right!
    return 0;
}

