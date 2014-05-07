/* 
 * File:   main.cpp
 * Author: Frank Luna
 * Created on April 30, 2014, 8:02 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//No Global Constants

//Function prototype
void divOut2(int &, int);

//Execution Starts here!!
int main(int argc, char** argv) {
    //Declare variables
    int endTest = 1475;
    int counter = 0;
    int seqNum = 0;
    int numTest;
    //Loop to find the last number sequence
    do{
        numTest=++seqNum;
        //Divide out the 2's, 3's, 5's
        divOut2(numTest,2);
        divOut2(numTest,3);
        divOut2(numTest,5);
        if(numTest==1){
            counter++;
          
        }
    }while(counter < endTest);
    //Output the endpoint
    cout << "The " << endTest << " element = " << seqNum << endl;
  
    //Exit stage right

    return 0;
}

void divOut2(int &x, int d){
    while(x % d == 0)x /= d;
}