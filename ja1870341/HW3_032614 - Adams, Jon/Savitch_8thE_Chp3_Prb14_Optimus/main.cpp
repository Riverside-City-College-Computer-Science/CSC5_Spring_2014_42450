/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 26, 2014, 8:35 PM
 */
//System Libraries
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
//Global Constant
//Function prototype
//Execution Starts here!!
int main(int argc, char** argv) {
    //Declare variables
    unsigned int prime;
    cout<<"Press any key to see the prime numbers between 1 and 100!"<<endl;
    cin.get();
    for(unsigned int prime=2; prime <= 100; ++prime) {
        unsigned int even=2;
        for(;even<=prime-1;even++) {
            if(prime%even == 0)
                break;
                                   }
           if(even==prime&&even!=2) 
             cout<<prime<<", ";
                                                     }
    cout<<"and..."<<endl;
    cout<<"that's all folks!"<<endl;
    
    return 0;
}
