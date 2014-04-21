/* 
 * File:   main.cpp
 * Author: Kelly Lozano
 * Created on April 12, 2014, 1:48 PM
 * Purpose: Find Out The Distance Traveled
 */

//System Libraries
#include <cstdlib> //Standard Library
#include <iostream> //Input/Output
#include <iomanip> //Formatting
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float speed,hours,dist;
    
    //Ask For An Input Of The Speed Of The Vehicle (In MPH)
    //And How Many Hours Traveled
    cout<<"Please enter the speed of the vehicle, in miles per hour:"<<endl;
    cin>>speed;
    while (speed<=0){
        cout<<"Hmmm, I don't think you went anywhere with a speed ";
        cout<<"like that. Please enter a positive speed!"<<endl;
        cin>>speed;
    }
    
    cout<<"How many hours did you travel?"<<endl;
    cin>>hours;
    while (hours<1){
        cout<<"Either you traveled awfully fast or you were ";
        cout<<"abducted by aliens and lost time. Put in a different ";
        cout<<"amount of hours please."<<endl;
        cin>>hours;
    }
    
    //Run The Loop, Find Distance Traveled And Output The Results
    cout<<"Hours      Distance Traveled"<<endl;
    cout<<"----------------------------"<<endl;
    for (int count=1;count<=hours;count++){
        dist=speed*count;
        if (count<=9){
            cout<<count<<setw(19)<<dist<<endl;
        }
        else cout<<count<<setw(18)<<dist<<endl;
    }
    //Exit Stage Right!
    return 0;
}

