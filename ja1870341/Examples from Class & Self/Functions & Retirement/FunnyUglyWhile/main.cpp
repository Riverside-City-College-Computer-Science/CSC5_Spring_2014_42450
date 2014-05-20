/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 30, 2014, 8:25 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int seqNum=0;
    int endTest=11;
    int counter=0;
    int numTest;
    
    //Loop to find 1475 #
    do {
    numTest=++seqNum;
    //Divide 2s
        while (seqNum%2==0)seqNum/=2;
        while (seqNum%3==0)seqNum/=3;
        while (seqNum%5==0)seqNum/=5;
    //Check
        if (numTest==1) {
        counter++;
        cout<<numTest<<endl;
        }
    } while(counter<endTest);
    
    cout<<"The "<<endTest<<" element = "<<seqNum<<endl; 
        
    return 0;
}

