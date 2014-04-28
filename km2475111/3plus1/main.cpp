/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on April 28, 2014, 8:12 AM
 * Purpose: using functions to implement 3n+1 problem
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

//Global constants

//Function Prototypes
int seqLen(int);
//Execution Begins here!
int main(int argc, char** argv) {
    //Declare variables
    int strtSeq; //start of sequence
    int counter=1;//counter
    //randomly choose a sequence start
    srand(static_cast<unsigned int>(time(0)));
    strtSeq=rand()%5+20;//[20,24]
    //create variable n and set equal to start of sequence
    int n=strtSeq;
    cout<<n<<" ";
    //loop until n=1
    do{
        //if(n%2){n=3*n+1;}
        //else{n/=2;}
        //ternary op
        //take n -> mod 2 and check -> if true, 3*n+1 -> else n/2
        //n=n%2?3*n+1:n/2;
        //shift to left(<<1) = *2,shift to right (>>1) = /2
        //shift if faster than normal operators for * and /
        n=n%2?n+(n<<1)+1:n>>1;
        //counter++;
        cout<<n<<" ";
    }while(n>1);
    cout<<endl<<"Sequence length = "<<seqLen(strtSeq)<<endl;
    //Exit Stage Right!!
    return 0;
}
int seqLen(int n){
    //initialize counter
    int counter=1;
    //calculate the seq length
    do{
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
    }while(n>1);
    //return counter
    return counter;
}
