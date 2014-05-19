/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 18, 2014, 5:55 PM
 * Edit file (Replace double spaces with single spaces)
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes
void rmvBlnk(ifstream& , ofstream&);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    
    ifstream infile;
    ofstream outfile;
    
    infile.open("input.dat");
    outfile.open("output.dat");
    
    rmvBlnk(infile, outfile);
            
    infile.close();
    outfile.close();
            
    //Exit Stage Right
    return 0;
}

void rmvBlnk(ifstream& infile, ofstream& outfile){
    string next;
    infile.get(next);
    while(!infile.eof()){
        if(next=='  ')
            outfile<<" ";
        else
            outfile<<next;
        infile.get(next);
    }
    
}