/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 15, 2014, 10:35 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    int numOfPeop, rmCap, x;
    char ans;
    do
    {
    //inputting number of people, and the capacity
    cout << "Hello, How many people will attend the meeting?\n";
    cin >> numOfPeop;
    cout << "How many individual can the room hold?\n";
    cin >> rmCap;
    
    //If statement Exceeding the capacity
    if(numOfPeop > rmCap)
    {
        x = numOfPeop - rmCap;
        cout << "I'm sorry, but exceeding the room capacity violates fire law regulation. " << x << " attendees must leave the room.\n";
    }
    //Else statement Following the rules
    else
    {
        x = rmCap - numOfPeop;
        cout << "Great! Also, " << x << " more can attend the meeting.\n";
    }

    //looping
    cout << "Try again?\ny = yes\nn = no\n";
    cin >> ans;
    }while(ans == 'y' || ans == 'Y');
    
    //Execution Ends Here
    return 0;
}

