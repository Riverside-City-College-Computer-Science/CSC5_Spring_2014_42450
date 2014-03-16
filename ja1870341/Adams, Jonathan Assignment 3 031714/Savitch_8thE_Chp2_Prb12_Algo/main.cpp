/* 
 * File:   main.cpp
 * Author: Adams, Jonathan C 42450
 *
 * Created on March 5, 2014, 10:12 AM
 */
//System Libraries              
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;
//NOTE: Avoiding loops as requested per Assignment 2. Program modified from class lab 
//to guess a # in-between 1 and 30,000. Really enjoyed learning this! Plan on
// re-designing next lesson to guess any number with loops. 

/*Global Constants
 * 
 *Function Prototypes
 * 
 *Execution Begins */
int main(int argc, char** argv) {
//Initialize a random number with the seed of
    srand(static_cast<unsigned int>(time(0)));
//Declare variables
    float num, guess, r;
//Initialize the number of square root    
    num=rand()%30000+1;// 1 - 10
//Initialize the guess
    guess=num/2;
//Output original number and guess
    cout<<"Find the square root of "<<num<<endl;
    cout<<"Start with the following guess "<<endl;
//First iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output first iteration
    cout<<"1st iteration r= "<<r<<" guess "<<guess<<endl;
    //Second iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output second iteration
    cout<<"2nd iteration r= "<<r<<" guess "<<guess<<endl;
//Third iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output third iteration
    cout<<"3rd iteration r= "<<r<<" guess "<<guess<<endl;
//Forth iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output forth iteration
    cout<<"4th iteration r= "<<r<<" guess "<<guess<<endl;
    //Fifth iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output fifth iteration
    cout<<"5th iteration r= "<<r<<" guess "<<guess<<endl;
    //Sixth iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output Sixth iteration
    cout<<"6th iteration r= "<<r<<" guess "<<guess<<endl;
    //Seventh iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output seventh iteration
    cout<<"7th iteration r= "<<r<<" guess "<<guess<<endl;
    //Eighth iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output Eighth iteration
    cout<<"8th iteration r= "<<r<<" guess "<<guess<<endl;
    //Ninth iteration 
    r=num/guess;
    guess=(r+guess)/2;
//Output ninth iteration
    cout<<"9th iteration r= "<<r<<" guess "<<guess<<endl;
//Compare to actual sqrt
    cout<<"The sqrt of "<<num;
    cout<<" from CMATH library ="<<sqrt(num);
//Exit Stage Right
    return 0;
}

