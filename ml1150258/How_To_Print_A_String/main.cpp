/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 24, 2014, 8:23 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants None

//Function Prototypes None

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Pick a random number
    int mybeCsp=rand()%14+14;
    int cspDate=rand()%5+18;
    int diff=mybeCsp-cspDate;
    //Output if on the cusp
    if(diff<=2&&diff>=-2){
        cout<<"This date is on the ";
        cout<<"\"cusp\""<<endl;
    }
    //Output the dates
    cout<<"The end date of the horiscope = ";
    cout<<cspDate<<endl;
    cout<<"The birthdate = "<<mybeCsp<<endl;
    //Exit stage right
    return 0;
}

