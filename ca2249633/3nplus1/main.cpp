/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on April 28, 2014, 8:11 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int seqLen(int);
int rngLen(int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int strtSeq;//Start of sequence 
    //Randomly choose sequence start
    srand(static_cast<unsigned int>(time(0)));
    strtSeq=rand()%5+20;//[20,24]
    //Create a variable n and set equal to start of sequence 
    int n=strtSeq;
    int counter=1;
    //Loop until n==1
    cout<<n<<" ";
    do{
        //if(n%2==0)n/=2;
        //else n=3*n+1;
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
        cout<<n<<" ";
    }while(n>1);
    cout<<endl<<"Sequence Length = "<<counter<<endl;
    cout<<endl<<"Sequence Length = "<<seqLen(strtSeq)<<endl;
    cout<<"For a range of values 20 to "<<strtSeq<<" to the max = "
            <<rngLen(20,strtSeq)<<endl;
    //Exit Stage Right
    return 0;
}

int rngLen(int strt,int stp){
    int max=1;
    for(int i=strt;i<=stp;i++){
        int len=seqLen(i);
        if(max<len)max=len;
    }
    return max;
}

int seqLen(int n){
    //initialize the counter
    int counter=1;
    //calculate the sequence length
    do{
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
        //return the counter
    }while(n>1);
    return counter;
}