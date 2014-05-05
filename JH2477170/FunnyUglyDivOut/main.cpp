/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 30, 2014, 8:49 AM
 */
//System Libraries
#include <iostream>
using namespace std;

//No Global Constants

//Function Prototype
int divOut(int,int);

//Execution Starts Here!!
int main(int argc, char** argv) {
    //Declare Variables
    int endTest=1475;
    int counter=0;
    int seqNum=0;
    int numTest;
    //Loop to find the last number in sequence
    do{
        numTest=++seqNum;
        //Dive out the 2's,3's,5's
        numTest=divOut(numTest,2);
        numTest=divOut(numTest,3);
        numTest=divOut(numTest,5);
        if(numTest==1){
            counter++;
            //cout<<seqNum<<endl;
        }        
    }while(counter<endTest);
    //output the endpoint
    cout<<"The "<<endTest<<" element = "<<seqNum<<endl;
    //Exit stage left
    return 0;
}

int divOut(int x,int d){
    while (x%d==0)x/=d;
    return x;                        
}