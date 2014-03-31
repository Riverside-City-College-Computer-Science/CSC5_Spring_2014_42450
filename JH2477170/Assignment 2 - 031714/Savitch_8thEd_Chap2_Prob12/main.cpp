/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 5, 2014, 10:11 AM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number with the seed of time
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    float num,guess,r;
    //Initialize the number to square root
    num=rand()%3+3;//[3,4,5]
    //Initialize the guess
    guess=num/2;
    //Output the original number and guess
    cout<<"Find the square root of "<<num<<endl;
    cout<<"Start with the following guess "<<guess<<endl;
    //1st iteration of r and guess
    r=num/guess;
    guess=(r+guess)/2;
    //Output the first iteration
    cout<<"1st iteration r="<<r<<" guess="<<guess<<endl;
    //2nd iteration of r and guess
    r=num/guess;
    guess=(r+guess)/2;
    //Output the second iteration
    cout<<"2nd iteration r="<<r<<" guess="<<guess<<endl;
    //3rd iteration of r and guess
    r=num/guess;
    guess=(r+guess)/2;
    //Output the 3rd iteration
    cout<<"3rd iteration r="<<r<<" guess="<<guess<<endl;
    //4th iteration of r and guess
    r=num/guess;
    guess=(r+guess)/2;
    //Output the 4th iteration
    cout<<"4th iteration r="<<r<<" guess="<<guess<<endl;
    //Compare to the actual square root
    cout<<"The square root of "<<num;
    cout<<" from the CMATH library = "<<sqrt(num);
    cout<<endl;
    //Exit stage right!
    return 0;
}

