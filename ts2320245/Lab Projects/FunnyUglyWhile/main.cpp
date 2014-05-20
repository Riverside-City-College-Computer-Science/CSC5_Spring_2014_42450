/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on April 30, 2014, 8:25 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//No Global Constants

//Function Prototypes

//Execution Begins.
int main(int argc, char** argv) {
    //Declare Variables
    int endTest =1475;
    int counter=0;
    int seqNum=0;
    int numTest;
    //Loop to find the last number in sequence
    do {
        numTest=++seqNum;
        //Divide out the 2's,3's,5's
        while (numTest%2==0)numTest/=2;
        while (numTest%3==0)numTest/=3;
        while (numTest%5==0)numTest/5;
        if (numTest==1){
            counter++;
        
        }
       
    
        
    }while (counter<endTest);

    cout << "The " << endTest << " element =" << seqNum << endl;
    
    
    
    
    
    //Exit stage right
    return 0;
}

