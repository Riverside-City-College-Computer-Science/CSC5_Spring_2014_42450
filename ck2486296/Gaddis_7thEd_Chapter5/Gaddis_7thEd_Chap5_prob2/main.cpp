/* 
 * File:   main.cpp
 * Author: Christopher Kooyman
 * Created on April 10, 2014, 4:43 PM
 * Characters for the ASCII Codes
 */
//system Libraries 
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//execution Begins Here!

int main(int argc, char** argv) {
//Declare variables 
    char ascchr;
    for(int count=0;count<=127;count++){
       ascchr=(char)count;
       cout<<ascchr<<"  ";
       //formatting
       if(count==16||count==32||count==48||count==64||count==80||count==96||count==112)
           cout<<endl;
    }
    //exit stage right
    return 0;
}

