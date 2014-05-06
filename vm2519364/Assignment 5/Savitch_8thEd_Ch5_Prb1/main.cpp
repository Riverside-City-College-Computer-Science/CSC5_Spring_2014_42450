/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on April 30, 2014, 8:35 PM
 * Covert 24hr Time to 12hr
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void input(int& hour, int& mins);//Input 24-hour format time
void convrt(int& hour, int& mins, char& ampm);//Convert time to 12-hour format time
void out(int& hour, int& mins, char& ampm);//Output 12-hour format time

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    int hour, mins;
    char ampm, ans;
    do{
    //Function Call    
    input(hour, mins);
    convrt(hour, mins, ampm);
    out(hour, mins, ampm);
    cout<<"\n";
    cout<<"Would you like to convert your 24-hour notation time again?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    cout<<"\n";
    }while (ans=='y'||ans=='Y');
    //Exit Stage Right
    return 0;
}
void input(int& hour, int& mins){
    cout<<"Enter your 24 hour format time. Hours then minutes."<<endl;
    cout<<"HH: ";
    cin>>hour;
    cout<<"MM: ";
    cin>>mins;
    cout<<endl;
    cout<<"You have entered the 24-hour format time of: ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins<<endl;
}
void convrt(int& hour, int& mins, char& ampm){  
    
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
void out(int& hour, int& mins, char& ampm){
    cout<<endl;
    if(hour<=12&&mins<=59){
    cout<<"The 12-hour format is ";
    cout<<hour<<":"<<setw(2)<<setfill('0')<<mins<<" "<<ampm<<"M"<<endl; 
    }
}