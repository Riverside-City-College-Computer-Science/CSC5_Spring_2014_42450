/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 30, 2014, 8:02 AM
 * Purpose: Solve The Funny_Ugly Numbers
 */

//System Libraries
#include <iostream> //Input/Output
using namespace std;

//Global Constants

//Function Prototypes
int divOut(int,int);
void divOut2(int &,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int number=210;
    
    //Remove All The 2's, 3's, 5's
    number=divOut(number,2);
    number=divOut(number,3);
    number=divOut(number,5);
    divOut2(number,3);
    //Output The Results
    cout<<number<<endl;
    
    //Exit Stage Right!
    return 0;
}

void divOut2(int &x,int d){
     while(x%d==0)x/=d;
}

int divOut(int x,int d){
     while(x%d==0)x/=d;
    return x;
}
   
                        