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
int rngLen(int,int);
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
        //shift to left(<<1) = *2,shift to right (>>1) = /2
        //shift if faster than normal operators for * and /
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
        cout<<n<<" ";
    }while(n>1);
    //output results
    cout<<endl<<"Sequence length = "<<counter;//with counter
    cout<<endl<<"Sequence length = "<<seqLen(strtSeq);//with function
    cout<<endl<<"For a range of values 20 to "<<strtSeq
        <<" the max = "<<rngLen(20,strtSeq)<<endl;
    //Exit Stage Right!!
    return 0;
}
int rngLen(int strt, int stp){
    //initialize maximum length
    int max=1;
    for(int i=strt;i<=stp;i++){
        int len=seqLen(i);
        if(max<len)max=len;
    }
    return max;
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
