/* 
 * File:   main.cpp
 * Author: christopher merrill
 *
 * Created on August 20, 2013, 2:45 PM
 */
//system libraries
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<fstream>
#include<cmath>
#include<cstring>
using namespace std;
//function prototype

//global constants

//execution begins here
int main(int argc, char** argv) {
    //declare variables
    ifstream input;
    ofstream output;
    //declare file names
    string inFile="indeg.dat";
    char outFile[]="trigTable.dat";
    //read the degree data from the file
    int degrees;
    input.open(inFile.c_str());
    output.open(outFile);
    for(int count=1;input>>degrees;count++){
        float angRad=degrees*atan(1)/45;
        output<<fixed<<setprecision(4)<<showpoint;
        output<<setw(10)<<degrees;
        output<<setw(10)<<angRad;
        output<<setw(10)<<sin(angRad);
        output<<setw(10)<<cos(angRad);
        if(tan(angRad)>100||tan(angRad)<-100)
            output<<setw(10)<<"      inf"<<endl;
        output<<setw(10)<<tan(angRad)<<endl;
    }
    //close the files
    input.close();
    output.close();
    
    //exit stage right        
    return 0;
}