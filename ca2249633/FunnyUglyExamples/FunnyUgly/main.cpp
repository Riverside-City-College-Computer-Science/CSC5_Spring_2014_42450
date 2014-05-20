/* 
 * File:   main.cpp
 * Author: Christopher Alvarado
 * Created on April 30, 2014, 8:02 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int divOut(int,int);
void divOut2(int &,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number=210;
    //Remove all the 2s, 3s, and 5s
    number=divOut(number,2);
    divOut2(number,3);
    number=divOut(number,5);
    //Output the result
    cout<<number<<endl;
    //Exit Stage Right
    return 0;
}

int divOut(int x,int d){
    while(x%d==0)x/=d;
    return x;
}

void divOut2(int &x,int d){
    while(x%d==0)x/=d;
}