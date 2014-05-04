 /* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 30, 2014, 8:42 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//globals
//function prototypes
int divOut (int x,int d);
//
int main(int argc, char** argv) {

    int seqNum=0;
    int endTest=1475;
    int counter=0;
    int numTest;
    
    //Loop to find 1475 #
    do {
    numTest=++seqNum;
    //Divide 2s
        numTest=divOut(numTest,2);
        numTest=divOut(numTest,3);
        numTest=divOut(numTest,5);
    //Check
        if (numTest==1) {
        counter++;
        //cout<<seqNum<<endl;
        }
    } while(counter<endTest);
    
    cout<<"The "<<endTest<<" element = "<<seqNum<<endl; 
    
    return 0;
}

int divOut(int x,int d) {
    while(x%d==0)x/=d;
    return x;
}