/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 1, 2014, 8:43 PM
 * Wait Time | 12 Hour Format
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void input3(int& hour, int& mins);
void wait3(int& hour, int& mins);
void twelve3(int& hrs, int& mins, char& ampm);
void output3(int& hour, int& mins, char& ampm);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hour, mins;
    char ans, ampm;
    do{
    //Function Call    
    input3(hour, mins);
    wait3(hour, mins);
    twelve3(hour, mins, ampm);
    output3(hour, mins, ampm);
    cout<<"\n";
    cout<<"Would you like to recalculate your wait time?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    cout<<"\n";
    }while(ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}

void input3(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
}
void wait3(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    } 
}

void twelve3(int& hour, int& mins, char& ampm){
    
    if (hour>12&&hour<=23){
        hour=hour-12;
        ampm='P';
    }else if (hour==12){
        ampm='P';
    }else if(hour==0){
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){
        ampm='A';
    }else if(hour>=24||mins>59){
        cout<<"\n";
        cout<<"Error! Try again.";
    }
}

void output3(int& hour, int& mins, char& ampm){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" "<<ampm<<"M after your wait.\n";
}