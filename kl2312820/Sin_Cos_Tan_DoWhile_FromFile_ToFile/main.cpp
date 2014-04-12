/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 2, 2014, 9:41 AM
 * Purpose: To Learn While Loops and Pull Files
 */

//System Libraries
#include <fstream> //Pull Files
#include <iomanip> //Formatting
#include <cmath> //Mathematics
#include <cstring> //For Name Files
#include <iostream> //I/O
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    ifstream input;
    ofstream output;
    //Declare File Names
    string inFile="indegree.dat"; //String
    char outFile[]="TrigTab.dat"; //Character Array
    //Read the Degree data from a file
    int degrees;
    input.open(inFile.c_str());
    output.open(outFile);
    input>>degrees;
    do{
        float angRad=degrees*atan(1)/45;
        output<<fixed<<setprecision(4)<<showpoint;
        output<<setw(10)<<degrees;
        output<<setw(10)<<angRad;
        output<<setw(10)<<sin(angRad);
        output<<setw(10)<<cos(angRad);
        if(tan(angRad)>10000)
            output<<setw(10)<<10000<<endl;
        else if(tan(angRad)<-10000)
            output<<setw(10)<<-10000<<endl;
        else
        output<<setw(10)<<tan(angRad)<<endl;
    }while (input>>degrees);
    //Close the Files
    input.close();
    output.close();
    //Exit Stage Right!
    return 0;
}

