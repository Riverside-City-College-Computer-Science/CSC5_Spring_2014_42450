/* 
 * File:   main.cpp
 * Author: Ezra Guinmapang
 * Date: April 28, 2014, 8:12 AM
 */

//Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

//Global variables and constants

//Function prototypes
int s_Length(int);              //3n+1 function for a single input value
int r_Length(int, int);         //3n+1 function for a range of values
//Execution begins HERE
int main(int argc, char** argv) {
    //Declare functions
    int strtSeq;                //beginning of sequence
    //Randomly choose a sequence starting point
    srand(static_cast<unsigned int>(time(0)));          //seed rand()
    strtSeq = rand() % 5 + 20;                          //generate a random number between 20 to 24
    //declare a variable and initialize to the beginning number in the sequence with a counter
    int n = strtSeq;
    int ctr = 1;
    //loop until n == 1
    cout << n << " ";
    do{
        ctr++;
        n = n % 2 ? n + (n << 1) + 1 : n >> 1;
        cout << n << " ";
    }while(n > 1);
    cout << endl << "Sequence Length: " << ctr << endl;
    cout << endl << "Sequence Length: " << s_Length(strtSeq) << endl;
    cout << "For a range of values from 20 to " << strtSeq << " the max = " << r_Length(20, strtSeq);
    return 0;
}
//Function definitions
int s_Length(int n){
    //calculate the sequence length
    int ct = 1;
    do{
        n = n % 2 ? n + (n << 1) + 1 : n >> 1;
        ct++;
    }while(n > 1);
    return ct;
}
int r_Length(int start, int stop){
    int max = 1;                                //initialize the maximum length
    for(int i = start; i <= stop; i++){         //loop until the stop point is reached
        int seqlen = s_Length(i);               //find the sequence length for i
        if(max < seqlen) max = seqlen;          //if maximum length is greater than the current maximum valur
                                                //change the maximum to the new maximum length
    }
    return max;
}