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
        while(numTest%2==0)numTest/=2;
        while(numTest%3==0)numTest/=3;
        while(numTest%5==0)numTest/=5;
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