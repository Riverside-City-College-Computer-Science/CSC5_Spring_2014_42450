/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on April 2, 2014, 9:41 AM
 */

//System Libraries
#include <fstream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) 
{
    //Declare Variables
    
    ifstream input;
    ofstream output;
    //Declare file names
    string inFile="inDeg.dat";
    char outFile[]="trigTab.dat";
    //Read the degree data from a file
    int degrees;
    input.open(inFile.c_str());
    output.open(outFile);
    input>>degrees;
    do
   
    {
        float angRad=degrees*atan(1)/45;
        output<<fixed<<setprecision(4)<<showpoint;
        output<<setw(10)<<degrees;
        output<<setw(10)<<angRad;
        output<<setw(10)<<sin(angRad);
        output<<setw(10)<<cos(angRad);
        if(tan(angRad)>100)
          output<<setw(10)<<100<<endl;
        else if(tan(angRad)<-100)
            output<<setw(10)<<-100<<endl;
        else
            output<<setw(10)<<tan(angRad)<<endl;
        
    }
    while(input>>degrees);
    
    //Close the File
    input.close();
    output.close();
    //Exit stage
    
    return 0;
}

