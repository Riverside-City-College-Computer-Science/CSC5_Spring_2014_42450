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
       while(numTest%2==0)numTest/=2;
       while(numTest%3==0)numTest/=3;
       while(numTest%5==0)numTest/=5;
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

