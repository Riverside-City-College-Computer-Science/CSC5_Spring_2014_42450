/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem2.21:Write a C++ program that utilizes looping and the tab escape sequence \t to print the following table of values: run program.
 *
 * Created on March 24, 2014, 11:37 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//Global Constants

//Execution Begins Here!

//Function Prototypes

//Execution Begins!
int main(int argc, char** argv) {

    int i=1;
    cout << "N\t10*N\t100*N\t1000*N\n";
    
    while ( i<=5){
        cout << i << '\t' << 10*i << '\t' << 10*i << '\t' << 1000*i<< endl;
        ++i;
    }
    return 0;
}

