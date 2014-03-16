/* 
 * File:   main.cpp
 * Author: Adams, Jonathan C 42450 
 *
 * Created on March 15, 2014, 4:36 PM
 */
#include <iostream>
using namespace std;
//Global Constants
const float OZ_TON=3.527392e4;
//Function Prototypes
//Execution Starts Here
int main(int argc, char** argv) {
//Declare variables
    unsigned int cerBox;
    cout<<"Input the weight of the ceral box in ounces"<<endl;
    cin>>cerBox;
    cout<<"The box weighs "<<cerBox/OZ_TON<<" metric tons"<<endl;
    cout<<"It would take "<<OZ_TON/cerBox<<" boxes to have a metric ton"<<endl;
//Exit Stage Right
    return 0;
}

