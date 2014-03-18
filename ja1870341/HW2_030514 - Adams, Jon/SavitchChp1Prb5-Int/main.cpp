/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 3, 2014, 9:29 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//Declare variables
    int int1, int2, intSum, intPro;
//Input request prompt 
    cout<<"Input an integer"<<endl;
    cin>>int1;
    cout<<"Input another integer"<<endl;
    cin>>int2;
//Calculations
    intSum=int1+int2;
    intPro=int1*int2;
//Output
    cout<<"The sum of these is "<<intSum<<endl;
    cout<<"and the product is "<<intPro<<endl;
    //Exit Stage Right
    return 0;
}

