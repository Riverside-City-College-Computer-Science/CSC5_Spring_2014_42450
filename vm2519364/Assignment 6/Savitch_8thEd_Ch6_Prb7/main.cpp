/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 19, 2014, 10:28 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes
void merge(ifstream& fin1, ifstream& fin2, ofstream& fout);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream fin1, fin2;
    ofstream fout;
    
    merge(fin1, fin2, fout);
    
    //Exit Stage Right
    return 0;
}
void merge(ifstream& fin1, ifstream& fin2, ofstream& fout){
    int setA, setB, set;
    //Open Files
    fout.open("output.dat");
    fin1.open("input1.dat");
    fin2.open("input2.dat");
    //Read and Input Data to Output File
    while (fin1>>setA){
        fout<<setA<<" "<<endl;   
    }
    
    while (fin2>>setB){
        fout<<setB<<" "<<endl;
    }
    //Close Files
    fin2.close();
    fin1.close();
    fout.close();
}
