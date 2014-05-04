/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 1, 2014, 8:43 PM
 * Wait Time | 24-hour Format
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void input(int& hour, int& mins);
void wait(int& hour, int& mins);
void output(int& hour, int& mins);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hour, mins;
    char ans;
    do{
    //Function Call    
    input(hour, mins);
    wait(hour, mins);
    output(hour, mins);
    cout<<"\n";
    cout<<"Would you like to recalculate your wait time?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    cout<<"\n";
    }while(ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}

void input(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}
void wait(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    }    
}
void output(int& hour, int& mins){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" hours after your wait.\n";
}