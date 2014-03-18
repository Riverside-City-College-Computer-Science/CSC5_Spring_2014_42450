/* 
 * File:   main.cpp
 * Author: Adams, Jonathan 42450
 *
 * Created on March 2, 2014, 7:51 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
//Variable declaration
    int time, dist, conf;    
//Initial Time Input
cout<<"Please insert the amount of time, in seconds, ";
cout<<"that an object will be falling to know how ";
cout<<"far the object will"<<endl;
cout<<"travel during that time."<<endl;
cin>>time;
//Equation
dist = ( 32 * time^2 ) / 2;
//Output
cout<<"The object will have traveled ";
cout<< dist;
cout<<" feet in ";
cout<< time;
cout<<" seconds!"<<endl;
//Attempt to hold program open
cout<<"Press enter this distance in feet to verify you received the "<<endl;
cout<<"answer. Or press any key to close the program"<<endl;
cin>>conf;
if ( conf == dist );
/* How do I
 * 
 *  A) Just require the user to input a key to hold the program open
 without declaring an unnecessary variable. (( cin.get() x2 ?? ))
 * 
 * B) How do I create a loop?*/
    return 0;  
}

