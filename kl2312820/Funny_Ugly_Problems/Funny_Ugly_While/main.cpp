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
        while(numTest%2==0)numTest/=2;
        while(numTest%3==0)numTest/=3;
        while(numTest%5==0)numTest/=5;
        if(numTest==1){
            counter++;
        }
    }while(counter<endTest);
    
    //Output The End Point
    cout<<"The "<<endTest<<" element = "<<seqNum<<endl;
    
    //Exit Stage Right!
    return 0;
}
   