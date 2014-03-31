/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 8:42 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototypes

//Constants Definitions

//Execution Starts here

int main(int argc, char** argv) {
    //Average 5 test scores, output the result to user
    int test1, test2, test3, test4, test5;
    float avgTestScore;
    
    cout << "Please input 5 test scores, separated by spaces: ";
    cin >> test1 >> test2 >> test3 >> test4 >> test5;
    
    avgTestScore = (test1 + test2 + test3 + test4 + test5) / 5;
    cout << fixed << setprecision(1) << endl;
    cout << "The average of the 5 test scores is: " << avgTestScore << "." << endl;
    
    //Exit Stage Right
    return 0;
}