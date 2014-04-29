/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 11, 2014, 3:58 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    float ht, wt, hat, jacket, waist;
    unsigned short age;
    char ans;
    
    do{
    //Inputting
    cout << "What is your height?\n";
    cin >> ht;
    cout << "Your weight?\n";
    cin >> wt;
    cout << "And your age?\n";
    cin >> age;
    
    //calculate
    //Hat
    hat = (wt / ht) * 2.9;
    
    //if/else statements
    //Jacket
    if(age < 40)
    {
        jacket = ((ht * wt)/ 288);
    }
    else
    {
        float adj = age%10;
        jacket = ((ht * wt)/ 288)+(0.125 * adj);
    }
    //Waist
    if(age < 30)
    {
        waist = (wt / 5.7);
    }
    else
    {
        float adj = age%2;
        waist = (wt / 5.7)+(0.1 * adj);
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting
    cout << "Your hat size is " << hat << 
            "\nJacket size is " << jacket << 
            "\nAnd your waist size is " << waist 
            << endl;
    cout << "Try again?\nY = Yes\nN = No\n";
    cin >> ans;
        
    }while(tolower(ans) == 'y');

    return 0;
}