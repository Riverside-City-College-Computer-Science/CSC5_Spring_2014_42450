/* 
 * File:   main.cpp
 * Author: Jose A. Hernandez
 *
 * Created on March 10, 2014, 7:53 AM
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip>//Formatting
using namespace std;

//Global Constants
const float CNVHMIN=1.0/6.0e1;//Hours to Minutes
const float CNVMSEC=CNVHMIN;//Minutes to Seconds

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   
    //Declare variables
    float mph,mpm,mps;
    
    //Input the mph
    cout<<"Input MPH i.e. miles/hour"<<endl;
    cin>>mph;
    
    //Process for the Conversion
    mpm=mph*CNVHMIN;
    mps=mpm*CNVMSEC;
    
    //Output the Results
    cout<<fixed<<setprecision(5)<<showpoint;
    cout<<"Conversion to mpm = "<<mpm;
    cout<<" miles per minute"<<endl;
    cout<<"Conversion to mps = "<<mps;
    cout<<" miles per second"<<endl;
    
    //Exit stage right!
    return 0;
}

