/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 5, 2014, 10:12 AM
 */
//System Libraries              
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
using namespace std;

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
    num=rand()%1000+1;// 3 4 or 5
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
//Compare to actual sqrt
    cout<<"The sqrt of "<<num;
    cout<<" from CMATH library ="<<sqrt(num);
//Exit Stage Right
    return 0;
}

