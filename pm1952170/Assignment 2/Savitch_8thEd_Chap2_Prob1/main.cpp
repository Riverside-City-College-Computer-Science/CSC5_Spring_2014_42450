/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 16, 2014, 11:00 AM
 * convert breakfast cereal weight in oz into tons.
 * calculate how many boxes needed for 1 ton.
 */

#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare variables
    const int ton=35273.92;
    int ounces, total, weight;
    //Prompt user to enter weight
    cout<<"Enter the weight of a package of breakfast cereal in ounces "<<endl;
    cin>>ounces;
    //Equations to calculate totals.
    weight=ounces/ton;
    total=ton/ounces;
    //Outputs
    cout<<"If you have "<<ounces<<" ounces of cereal, then you have "<<weight<<" metric tons."<<endl;
    cout<<"It would take "<<total<<" boxes to make 1 metric ton of cereal.";
    cout<<endl;
    cout<<"This is the end of the program."<<endl;


    return 0;
}

