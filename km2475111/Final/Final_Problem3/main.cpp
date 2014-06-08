/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 6, 2014, 9:12 PM
 * Purpose: CSC5 Final
 */
/*
Problem 3
Create a function that fills one vector with even
random 2 digit numbers and another vector with
odd random numbers.  Prompt the user for the size
of these vectors.  Both will be the same size.
Output the results where you ask the user how
many columns to display.  These should be done
with 2 functions, fillVec and prntVec.
*/
//System Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

//Global Constants

//System Libraries
void fillVec();
void prntVec();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int size;
    //ask for size
    cout<<"How many numbers are in the vectors? ";
    cin>>size;
    //declare vectors
    vector<int> odd;
    vector<int> even;
    //fill vectors
    for(int i=0;i<size;i++){
        odd.push_back(1+(2*(rand()%size+1)));
        even.push_back(2*(rand()%size+1));
    }
    //output
    cout<<"Odd Vector : ";
    for(int i=0;i<size;i++){
        cout<<odd[i]<<" ";
    }
    cout<<endl;
    cout<<"Even Vector: ";
    for(int i=0;i<size;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
    //Exit Stage Right!!
    return 0;
}

