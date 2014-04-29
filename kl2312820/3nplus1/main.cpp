/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 28, 2014, 7:56 AM
 * Purpose: Create And Run The Collatz Conjecture
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <iomanip> //Formatting
#include <ctime> //Random Generator
using namespace std;

//Global Constants

//Function Prototypes
int seqLen(int);
int rngLen(int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int strtSeq; //Start Of Sequence
    
    //Randomly Choose A Sequence Start
    srand(static_cast<unsigned int>(time(0)));
    strtSeq=rand()%5+20; //Gives A Number Between 20 And 24
    
    //Create A Variable 'n' And Set Equal To Start Of Sequence
    int n=strtSeq;
    int counter=1;
    
    //Loop Until 'n'==1
    cout<<n<<" ";
    do{
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
        cout<<n<<" ";
    }while(n>1);
    cout<<endl<<"Sequence Length = "<<counter<<endl;
    cout<<endl<<"Sequence Length = "
            <<seqLen(strtSeq)<<endl;
    cout<<"For a range of values 20 to "
            <<strtSeq<<" the max = "<<(rngLen(20,strtSeq))<<endl;
    //Exit Stage Right!
    return 0;
}

int rngLen(int strt,int stp){
    //Initialize The Maximum
    int max=1;
    for(int i=strt;i<=stp;i++){
        int len=seqLen(i);
        if(max<len)max=len;
    }
    return max;
}

int seqLen(int n){
    //Initialize A Counter
    int counter=1;
    do{
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
    }while(n>1);
    //Return The Counter
    return counter;
}

