/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on April 30, 2014, 8:02 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int divOut(int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int endTest=1475;
    int counter=0;
    int seqNum=0;
    int numTest;
    //Loop to find the last number in a sequence 
    do{
        numTest=++seqNum;
        //divide out the 2s, 3s, 5s
        numTest=divOut(numTest,2);
        numTest=divOut(numTest,3);
        numTest=divOut(numTest,5);
        if(numTest==1){
            counter++;
            //cout<<seqNum<<endl;
        }
      }while(counter<endTest);
      //Output the endpoint
      cout<<"The "<<endTest<<"th element = "<<seqNum<<endl;
    //Exit Stage Right
    return 0;
}

int divOut(int x,int d){
    while(x%d==0)x/=d;
    return x;
}