/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 * Created on February 24, 2014, 9:13 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Functions and Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    // acc is ft/s
    int acc = 32;
    //in seconds
    int time = 0;
    //in feet
    int distance = 0;
    cout << "How long will the object be dropping? Enter seconds: ";
    cin >> time;
    
    distance = ((acc * time) * (acc * time))/2;
    
    cout << "The object will fall " << distance 
         << " feet in " << time << " seconds." << endl;
    cout << "This is the end of the program." << endl;

    return 0;
}

