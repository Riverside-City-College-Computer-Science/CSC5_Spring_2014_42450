/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 5, 2014, 10:10 AM
 */

/*
 * 
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

//Global Constant

//Function Prototype

//Execution begins here

int main(int argc, char** argv) {
    
    //initialize the random number with the seed of time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    float num,guess,r;
    
    //initialize the number to square root
    num = rand()%3+3;//[3,4,5]
    
    //initialize the guess
    guess = num/2;     
    
    //Output the original number
    cout << "Find the square root of " << num << endl;
    cout << "Start with the following guess " << guess << endl;
    
    //1rst iteration of r and guess*********************************************
    r = num/guess;
    guess = (r+guess)/2;
    
    //Output the first iteration
    cout << "1rst iteration r = " << r << " guess = " << guess << endl;
    
    //2nd iteration of r and guess
    r = num/guess;
    guess = (r+guess)/2;
    
    //Output the second iteration***********************************************
    cout << "1rst iteration r = " << r << " guess = " <<guess << endl;
    
    //3rd iteration of r and guess**********************************************
    r = num/guess;
    guess = (r+guess)/2;
    
    //Output the third iteration
    cout << "1rst iteration r = " << r << " guess = " <<guess << endl;
    
    //4th iteration of r and guess**********************************************
    r = num/guess;
    guess = (r+guess)/2;
    
    //Output the fourth iteration
    cout << "1rst iteration r = " << r << " guess = " <<guess << endl;
    
    //Compare to the actual square root
    cout << "The square root of " << num;
    cout << " from the CMATH library = " << sqrt(num) << endl;
    
    //exit stage right!

    return 0;
}

