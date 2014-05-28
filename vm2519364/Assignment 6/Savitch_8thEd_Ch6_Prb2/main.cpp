/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 18, 2014, 3:46 PM
 * Average from a File
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream infile;
    ofstream outfile;
    infile.open("input.dat");
    int next, sum=0, count=0;
    while (infile >> next){
        sum=sum+next;
        count++;
    }
    cout<<"\n";
    cout<<"The average is "<<static_cast<float>(sum/count);
    cout<<"\n";
    infile.close( );
    //Exit Stage Right
    return 0;
}

