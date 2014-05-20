/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on April 11, 2014, 7:03 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//Global Constants
//Function Prototypes
//Execution Starts here
int main(int argc, char** argv) {
    float litgal=0.264179, lit, lit2, miles, mile2, mpg1, mpg2;
    cout<<"Input the number of liters that the car 1 & 2 used"<<endl;
    cin>>lit>>lit2;
    cout<<"Input the distance traveled in whole miles"<<endl;
    cin>>miles>>mile2;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    mpg1=(miles/(lit*litgal));
    mpg2=(mile2/(lit2*litgal));
    cout<<"Car 1 had "<<mpg1<<" miles per gallon on this trip!"<<endl; 
    cout<<"Car 2 had "<<mpg2<<" miles per gallon on this trip!"<<endl;
    //If I use large numbers as inputs, minute differences after the decimal
    //point, leave me with one being higher than the other, even if they are
    //equal within a hundredth of a mpg. 
    if (mpg1>mpg2) {
        cout<<"Car 1 was more fuel efficient!"<<endl;
    }
    else if (mpg1==mpg2) {
        cout<<"These two vehicles have the same fuel efficiency!"<<endl;
    }
    else {
        cout<<"Car 2 was more fuel efficient!"<<endl;
    }
    return 0;
}

