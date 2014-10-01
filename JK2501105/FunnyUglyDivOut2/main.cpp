/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on April 30, 2014, 8:17 AM
 */

#include <iostream>

using namespace std;

//Global constants

//Function Prototypes
void divOut2(int &,int);

//Execution begins here

int main(int argc, char** argv) {
    
    //Declare variables
    int endTest=1475;
    int counter=0;
    int seqNum=1;
    int numTest;
    //Loop to find the last number and sequence
    do{
        numTest=seqNum;
        //Divide out the 2's, 3's, 5's
        divOut2(numTest,2);
        divOut2(numTest,3);
        divOut2(numTest,5);
        if(numTest==1){
            counter++;
            cout << seqNum <<endl;
        }
        seqNum++;
        
    }while(counter<endTest);
    
    //Output the results
    cout << "The "<<endTest<<" element = " <<seqNum<<endl;
    //Exit stage right
    return (0);
}


void divOut(int &x,int d){
    while(x%d==0)x/=d;
}