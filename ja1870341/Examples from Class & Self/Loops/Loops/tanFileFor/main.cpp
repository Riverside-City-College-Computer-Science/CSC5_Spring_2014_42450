/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 * Created on April 2, 2014, 9:40 AM
 */
//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
using namespace std;
//Global Constants
//Function Prototypes
//Executioner
int main(int argc, char** argv) {
//Declare variables
    ifstream input;
    ofstream output;
    //Declare file name
    string inFile="inDeg.dat";
    char outFile[]="trigTab.dat";
    //Read the degree data from a file
    int degrees;
    input.open(inFile.c_str());
    output.open(outFile);
    for(int count=1;input>>degrees;count++) {
        float angRad=degrees*atan(1)/45;
        output<<fixed<<setprecision(4)<<showpoint;
        output<<setw(10)<<degrees;
        output<<setw(10)<<angRad;
        output<<setw(10)<<sin(angRad);
        output<<setw(10)<<cos(angRad);
        if (tan(angRad)>100)
            output<<setw(10)<<100<<endl;
        else if (tan(angRad)<-100)
            output<<setw(10)<<-100<<endl;
        else
            output<<setw(10)<<tan(angRad)<<endl;
    }
    //Close the files
    input.close();
    output.close(); 
    //Exit Stage Right
    return 0;
}

