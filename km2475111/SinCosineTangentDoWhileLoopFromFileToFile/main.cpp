/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on April 2, 2014, 9:40 AM
 * Purpose: 
 */

//system libraries
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    ifstream input;
    ofstream output;
    //Declare file name
    string inFile="inDeg.dat";
    char outFile[]="trigTab.dat";
    //read the degree data from a file
    int degrees;
    input.open(inFile.c_str());//opening data file
    output.open(outFile);//outputting data file
    //begin do-while
    input>>degrees;//begin with first input so to start out with
    do{
        float angRad=degrees*atan(1)/45;//the angle
        output<<fixed<<setprecision(4)<<showpoint
              <<setw(10)<<degrees
              <<setw(10)<<angRad
              <<setw(10)<<sin(angRad)
              <<setw(10)<<cos(angRad);
        if(tan(angRad)>10000)
            output<<setw(10)<<10000<<endl;
        else if(tan(angRad)<-10000)
            output<<setw(10)<<-10000<<endl;
        else
            output<<setw(10)<<tan(angRad)<<endl;
    }while(input>>degrees);//keeps looping until no more input
    //close the files
    input.close();
    output.close();
    //Exit Stage Right
    return 0;
}

