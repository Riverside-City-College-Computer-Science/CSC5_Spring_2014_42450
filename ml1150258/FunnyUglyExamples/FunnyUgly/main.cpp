/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 30, 2014, 8:02 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//No Global Constants

//Function prototypes
int divOut(int,int);
void divOut2(int &,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int number=210;
    //Remove all the 2's,3's,5's
    number=divOut(number,2);
    divOut2(number,3);
    number=divOut(number,5);
    //Output the results
    cout<<number<<endl;
    //Exit stage left!
    return 0;
}

void divOut2(int &x,int d){
    while(x%d==0)x/=d;
}

int divOut(int x,int d){
    while(x%d==0)x/=d;
    return x;
}

