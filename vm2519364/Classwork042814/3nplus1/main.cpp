/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 28, 2014, 8:11 AM
 * 3n+1 Sequence
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

//Global Constants

//Function Prototypes


//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
    
    int strtSeq;//Start of Sequence
    int seqLen;//Sequence Length
    //Randomly choose a sequence start
    srand(static_cast<unsigned int>(time(0)));
    strtSeq=rand()%5+20;//[20,24]
    //Create a variable n and set equal to start of sequence with a counter
    int n=strtSeq;
    int counter=1;
    //Loop until n==1
    do{
        //if(n%2==0)n/=2;
        //else n=3*n+1;
        //n=n%2?3*n+1:n/2;
        n=n%2?3*n+1:n>>1;
        counter++;
        cout<<n<<" ";
    }while (n>1);
    cout<<endl<<"Sequence Length = "<<counter<<endl;
    cout<<endl<<"Sequence Length = "<<seqLen<<endl;
    
    //Exit Stage Right
    return 0;
}

int seqLen(int n){
    //Initialize a counter
    int counter=1;
    //Calculate the sequence Length
    do{
        n=n%2?3*n+1:n>>1;
        counter++;
    }while (n>1);
   
    return counter;
    
}