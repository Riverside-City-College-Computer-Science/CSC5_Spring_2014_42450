/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 19, 2014, 9:17 AM
 * Search and display largest and smallest numbers.
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void maxm(ifstream&, int&);
void minm(ifstream&, int&);
//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream fin;
    ofstream fout;
    int max, min;
    fin.open("input.dat");
    if(fin.fail()){
        cout<<"Input file failed to open.\n";
        exit(1);
    }
    fin>>max;
    maxm(fin, max);
    cout<<"The largest number in the file: "<<max<<endl;
    fin.close();
    fin.open("input.dat");
    if(fin.fail()){
        cout<<"Input file failed to open.\n";
        exit(1);
    }
    cout<<"\n";
    fin>>min;
    minm(fin, min);
    cout<<"The smallest number in the file: "<<min<<endl;
    fin.close();
    cout<<"\n";
    cout<<"End of Program.\n";
    //Exit Stage Right
    return 0;
}

void maxm(ifstream& fin, int& max){
    int next;
    while(fin>>next){
        if(next>max)
            max=next;
    }
}
void minm(ifstream& fin, int& min){
    int next;
    while(fin>>next){
        if(next<min)
            min=next;
    }
}