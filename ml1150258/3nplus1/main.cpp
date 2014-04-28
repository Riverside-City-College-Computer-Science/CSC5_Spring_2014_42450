/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 28, 2014, 8:11 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//No Global Constants

//Function Prototypes
int seqLen(int);
int rngLen(int,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int strtSeq;//Start of Sequence
    //Randomly choose a sequence start
    srand(static_cast<unsigned int>(time(0)));
    strtSeq=rand()%5+20;//[20,24]
    //Create a variable n and set equal to start of
    //sequence with a counter
    int n=strtSeq;
    int counter=1;
    //Loop until n==1
    cout<<n<<" ";
    do{
        //if(n%2)n=3*n+1;
        //else n/=2;
        //n=n%2?3*n+1:n/2;
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
        cout<<n<<" ";
    }while(n>1);
    cout<<endl<<"Sequence Length = "<<counter<<endl;
    cout<<endl<<"Sequence Length = "
            <<seqLen(strtSeq)<<endl;
    cout<<"For a range of values 20 to "<<strtSeq
            <<" the max = "<<rngLen(20,strtSeq)<<endl;
    //Exit stage right
    return 0;
}

int rngLen(int strt,int stp){
    //Initialize the maximum Length
    int max=1;
    for(int i=strt;i<=stp;i++){
        int len=seqLen(i);
        if(max<len)max=len;
    }
    return max;
}

int seqLen(int n){
    //Initialize a counter
    int counter=1;
    //Calculate the sequence Length
    do{
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
    }while(n>1);
    //Return the counter
    return counter;
}