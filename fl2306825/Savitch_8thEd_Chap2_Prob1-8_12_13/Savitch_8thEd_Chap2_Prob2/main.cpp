/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 14, 2014, 3:58 PM
 */

//System Libraries
#include<iostream>
#include<cmath>
using namespace std;

//Global Constant
const float dietsd = (1.0/10)*(1.0/100);

//Function prototype

//Execution Starts here
int main(int argc, char** argv) {
    
    //Declare variables
    
    int answr, mousWeigh, dietrWeigh;
    
    
    //Outputting question 
    cout << "Your friend is worried about his diet. He recently heard about a "
            "government research lab on diet soda causing deaths to laboratory "
            "mices. Now, he desperately wants to start losing weight, but has "
            "trouble giving up on drinking soda. Your friend wants to know how "
            "much diet soda is possible to drink without dying.\n\n";
    
    //Inputing weight of dieter to stop dieting
    cout << "Please add the weight your friend decides to stop dieting.\n";
    cin >> dietrWeigh;
    cout << "How much did the mices on the lab weight?\n";
    cin >> mousWeigh;
    
    //Calculation
    answr = (mousWeigh / dietsd) / dietrWeigh;
    
    //Outputting the answer
    cout << "Drinking " << answr << " ounces of artificial sweetener is dangerous for your friend!\n";
    
    //Execution ends here
    return 0;
}

