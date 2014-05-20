/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 28, 2014, 8:11 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

//Global Constants

//Function Prototype
int seqLen (int);
        
//Execution Begin Here!
 
int main(int argc, char** argv) {
    //Declare Variables
    int strtSeq;//start of sequence
    //Randomly choose a sequence start
    srand(static_cast<unsigned int>(time(0)));
    strtSeq=rand()%5+20;//[20,24]
    //Create a Variable n set equal to start of sequence
    //Sequence with a counter
    int n=strtSeq;
    int counter=1;
    //loop until n==1
    do{
        //if(n%2)n=3*n+1;
        //else n/2;
        //n=n%2?3*n+1:n/2;
        //n=n%2?3*n+1:n>>1;//Shifting
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
        cout<<n<<" ";
    }while(n>1);
    cout<<endl<<"sequence length = "<<counter<<endl;
    cout<<endl<<"sequence length = "
            <<seqLen(strtSeq)<<endl;
    cout<<"For a range of value 20 to "<<strtSeq
            <<" the max"
    
    //Exit stage right!!!
    
    return 0;
}
int rnglen(int strt,int stp){
    //initialize the max length
    int max=1;
    for(int i=strt;i<=stp;i++)
        int len=seqLen(i);
        if(max<len)max=len;
}
return max;
}
int seqLen(int n){
    //initialize a counter
    int counter=1;
    //calculate the sequence length
    do{
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
    }while(n>1);
    //Return the counter
    return counter;
}