/* 
 * File:   main.cpp
 * Author: Roberto Hernandez
 *
 * Created on March 16, 2014, 9:41 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    float cookieNum, calorieTotal;
    
    //Ask user to input number of cookies
    cout<<"Please input the number of cookies eaten"<<endl;
    
    //Input number of cookies
    cin>>cookieNum;
    
    //Calculate calories
    calorieTotal=(cookieNum/10)*300;
    
    //Output calories
    cout<<"Total number of calories consumed = "<<calorieTotal<<endl;
    
    //Exit Stage Right
    return 0;
}

