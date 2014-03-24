/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 24, 2014, 8:23 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random seed
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
    cout<<"The end date of the horoscope = "<<cspDate<<endl;
    cout<<"The birth date = "<<mybeCsp<<endl;
    //Exit Stage Right
    return 0;
}

