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
#include <cstdlib>
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
     if(infile.fail()){
        cout<<"Input file failed to open.\n";
        exit(1);
    }
    outfile.open("output.dat");
     if(outfile.fail()){
        cout<<"Output file failed to open.\n";
        exit(1);
    }
    rmvBlnk(infile, outfile);
    infile.close();
    outfile.close();    
    //Exit Stage Right
    return 0;
}
void rmvBlnk(ifstream& infile, ofstream& outfile){
    string next;
    while (infile>>next){
        outfile<<next<<" ";
    } 
}
