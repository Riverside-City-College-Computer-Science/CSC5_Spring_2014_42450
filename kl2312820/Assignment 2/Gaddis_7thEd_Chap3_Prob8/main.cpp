/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on March 17, 2014, 2:45 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Prototype Functions

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float repCost,ins;
    //Assign Variables
    ins=repCost*0.80;
    //Input the replacement cost of a building
    cout<<"Input the replacement cost of a building (In dollars). "<<endl;
    cin>>repCost;
    //Calculate the minimum amount of insurance needed
    ins=repCost*0.80;
    //Output
    cout<<"The minimum amount of insurance needed is ";
    cout<<"$"<<ins<<"."<<endl;
    //Exit Stage Right!
    return 0;
}

