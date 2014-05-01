/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 30, 2014, 8:02 AM
 * Purpose: Solve The Funny_Ugly Numbers
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;

//Global Constants

//Function Prototypes
void divOut2(int &,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int endTest=1475;
    int counter=0;
    int seqNum=0;
    int numTest;
    
    //Loop To Find Last Number In Sequence
    do{
        numTest=++seqNum;
        //Divide Out The 2's, 3's, And 5's
        divOut2(numTest,2);
        divOut2(numTest,3);
        divOut2(numTest,5);
        if(numTest==1){
            counter++;
        }
    }while(counter<endTest);
    
    //Output The End Point
    cout<<"The "<<endTest<<" element = "<<seqNum<<endl;
    
    //Exit Stage Right!
    return 0;
}

void divOut2(int &x,int d){
     while(x%d==0)x/=d;
}
   