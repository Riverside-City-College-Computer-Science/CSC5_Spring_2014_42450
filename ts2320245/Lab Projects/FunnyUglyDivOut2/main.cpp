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
void  divOut2 (int &, int);
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
     divOut2(numTest,2);
     divOut2(numTest,3);
     divOut2(numTest,5);
        if (numTest==1){
            counter++;
        
        }
       
    
        
    }while (counter<endTest);

    cout << "The " << endTest << " element = " << seqNum << endl;
    
    
    
    
    
    //Exit stage right
    return 0;
}

void divOut2 (int &x, int d){
    while (x%d == 0 )x/=d;
}
