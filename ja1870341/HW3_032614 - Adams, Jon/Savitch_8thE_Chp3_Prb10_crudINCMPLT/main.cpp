/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 29, 2014, 4:14 PM
 */
//I've worked on this for 4 hours. Im waving the white flag. 
//NOTE: A lot of extra variables from playing around
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//Global constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    //Variables
    float isize, time, growth, growth2, growth3, rate, fib, n=0, n2=1;
    //Input
    cout<<"Input the initial size of green crud in pounds"<<endl;
    cin>>isize;
    growth=isize;
    cout<<"Input how many days you would like to have the population grow"<<endl;
    cin>>time;
    rate=time/5;
    //I got this code from a request on cplusplus forums. I still am not sure
    //how to use it. 
    /*/////////////////////////////////////////////////////////////////////
    float a0=1,a1= 1;
    if(rate==0)
        return a0;
    else if(rate==1)
        return a1;
    while(rate-->1){
        unsigned int temp(a1);
        a1 += a0;
        a0 = temp;
    }
    return a1;
    *//////////////////////////////////////////////////////////////////////
    /*Here is the code I was working on:
     *     if ((1==rate)||(2==rate)) {
        cout<<"Population size is"<<isize<<endl;
    }
    else {
        while (rate>=3) {
            growth2=growth;
            growth3=growth2;
            growth=growth2+growth3;
            rate--;
            }
    }
     *////////////////////////////////////////////////////////////////////

        cout<<"Crud pile is "<<growth<<endl;
    

    return 0;
}

