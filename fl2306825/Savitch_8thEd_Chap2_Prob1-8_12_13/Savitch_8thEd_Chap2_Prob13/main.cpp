/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 16, 2014, 8:05 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    string instrct, name, fod, adject, clor, anml;
    int num;
    
    //Outputting the questions and inputting the answers
    cout << "Hello, welcome to a game called Mad Lib! To play"
            " just simply answer the questions:\n";
    //Question 1
    cout << "What is the first or last name of your instructor?\n";
    cin >> instrct;
    //Question 2
    cout << "What is your name?\n";
    cin >> name;
    //Question 3
    cout << "choose a number between 100 and 120\n";
    cin >> num;
    //Question 4
    cout << "Choose an adjective\n";
    cin >> adject;
    //Question 5
    cout << "Pick a color\n";
    cin >> clor;
    //Question 6
    cout << "choose an animal\n";
    cin >> anml;
    //Question 7
    cout << "Choose a food\n";
    cin >> fod;
    cout << "\n";
    
    //Solution
    cout << "Dear Instructor " << instrct << ",\n\n" << "I am sorry that I am "
            "unable to turn in my homework at this time. First, I ate a "
            "rotten " << fod << ", which made me turn " << clor << 
            " and extremely ill. I came down with a fever of " << num << 
            ". Next, my " << adject << " pet " << anml << " animal must have "
            "smelled the remains of the " << fod << " on my homework, "
            "because he ate it. I am currently rewriting my homework and hope "
            "you will accept it late.\n\nSincerely,\n" << name;
    
    //Execution ends here
    return 0;
}

