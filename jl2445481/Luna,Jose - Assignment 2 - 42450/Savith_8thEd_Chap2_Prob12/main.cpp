/*
 * File:   main.cpp
 * Author: Jose Luna
 *
 * Created on March 5, 2014, 10:12 AM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>

using namespace std;

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    //Initialize the Random Number with the seed of time
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    float num,guess,r;
    //Initialize the number to the square root
    num=rand()%3+3;//(3,4,5)
    //Initialize the guess
    guess=num/2;
    //Output the original number and guess
    cout << "Find the square root of "<<num<<endl;
    cout <<"Start with the following guess "<<guess<<endl;
    //1st Iteration of r and guess
    r=num/guess;
    guess=(r+guess)/2;
    //output the first iteration
    cout <<"1nd iteration r="<<r<<" guess= "<<guess<<endl;
    //output the second iteration
    cout <<"2nd iteration r="<<r<<" guess= "<<guess<<endl;
    r=num/guess;
    guess=(r+guess)/2;
    //Output the third Iteration
    cout <<"3rd iteration r="<<r<<" guess= "<<guess<<endl;
    r=num/guess;
    guess=(r+guess)/2;
    //output the fourth iteration
    cout <<"4th iteration r="<<r<<" guess= "<<guess<<endl;
    //compare to the actual square root
    cout <<"The square root of "<<num;
    cout <<" for the CMATH Library= "<<sqrt(num);
    cout <<endl;
    //Exit stage right
    return 0;
}