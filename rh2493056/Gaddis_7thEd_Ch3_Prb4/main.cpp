/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 8:29 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float month1, month2, month3, rainTotal, rainAve;
    
    //Ask user to input rain inches
    cout<<"Please input the rain levels in inches"<<endl;
    cout<<"for the three months you would like to average"<<endl;
    
    //Input rain inches
    cin>>month1>>month2>>month3;
    
    //Calculate average
    rainTotal=month1+month2+month3;
    rainAve=rainTotal/3;
            
    //Output average
    cout<<"The average rainfall for June, July, and August is "<<setprecision(2)<<fixed<<rainAve<<" inches."<<endl;
    
    //Exit Stage Right
    return 0;
}

