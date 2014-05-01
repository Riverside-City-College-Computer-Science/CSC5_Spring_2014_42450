/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on April 28, 2014, 8:11 AM
 */
//system Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
//Global Constants

//Function Prototypes
int seqLen(int);
int rngLen (int , int);
  



//Execution Begins
int main(int argc, char** argv) {
// Declaration of variables
    int strtSeq;// Start a Sequence

    
    //Randomly Choose a Seequence start;
    srand (static_cast<unsigned int>(time (0)));
    strtSeq= rand()%5 + 20; // [20,24]
    // create a variable n and set equal to start of sequence
    //sequence with a counter
    int n=strtSeq;
    int counter=1;
    // loop until n==1;
    cout << n << " ";
    
    do {
        //if (n%2==0 )n/=2;
        //else n=3*n+1;
        //cout << n<< " ";
       // n=n%2?3*n+1:n/2;
          // n=n%2?3*n+1:n>>1;//n/2
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
        cout << n << " ";
    }while (n>1);
    
    cout << "\nSequence lenght = " << counter++;
    cout << "\nSequence lenght = " << seqLen(strtSeq)<< endl;
    cout << "For a range of values 20 to "<<strtSeq 
            << " the max = " << rnglen(20, strtSeq)<< endl;
    
    //Exit Stage Right
    
    return 0;
}
int rngLen(int strt, int stp ){
    int max=1;
    for (int i=strt; i <=stp; i++)
        int len=seqLen(i);
    if (max<len)max=len;
}

int seqLen(int n){
    
    //Initialize a counter
    int counter =1;
    //calculate the sequence length
     do {
 
        n=n%2?n+(n<<1)+1:n>>1;
        counter++;
       
    }while (n>1);
    //return the counter
    return counter;
    
    
 }
                  