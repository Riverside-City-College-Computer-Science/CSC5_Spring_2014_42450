/* 
 * File:   main.cpp
 * Author: Roy Alba
 * Purpose: SinCosTanWhileLoopFromFileToFile
 * Created on April 2, 2014, 9:40 AM
 */
//System Libraries
#include <cmath>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!!
int main(int argc, char** argv) {

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
    for(int count=1;input>>degrees;count++){
        float angRad=degrees*atan(1)/45;
        output<<fixed<<setprecision(4)<<showpoint;
        output<<setw(10)<<degrees;
        output<<setw(10)<<angRad;
        output<<setw(10)<<sin(angRad);
        output<<setw(10)<<cos(angRad);
        if (tan(angRad)>100)
                output<<setw(10)<<10000<<endl;
        else if (tan(angRad)<-100)
                output<<setw(10)<<-10000<<endl;
        else 
            output<<setw(10)<<tan(angRad)<<endl;
   }
    //Close the files
    input.close();
    output.close();        
    //Exit Stage Right!!
    return 0;
}
