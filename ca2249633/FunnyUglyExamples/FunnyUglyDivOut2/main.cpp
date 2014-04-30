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
void divOut2(int &,int);

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
        divOut2(numTest,2);
        divOut2(numTest,3);
        divOut2(numTest,5);
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

void divOut2(int &x,int d){
    while(x%d==0)x/=d;
}