/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 30, 2014, 8:02 AM
 * Ugly Number Sequence
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes
void divOut2(int& x, int d);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int endTest=1475;
    int counter=0;
    int seqNum=0;//set to zero to allow incrementation first
    int numTest;
    //Loop to find the last number in sequence
   do{
       
       numTest=++seqNum;//Increment first
          //Divide out the 2's, 3's, 5's
       divOut2(numTest,2);
       divOut2(numTest,3);
       divOut2(numTest,5);
       if(numTest==1){
       counter++;
       cout<<seqNum<<endl;
       }
   } while(counter<endTest);
   //Output the endpoint
   cout<<"The "<<endTest<<" element "<<seqNum<<endl;
    
    //Exit Stage Right
    return 0;
}

void divOut2(int& x, int d){
    while(x%d==0)x/=d;
}