/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 8, 2014, 4:52 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    const float lit = 0.264179;
    float miles1, cons, mpg;
    char ans;
    
    do{
    //Outputting for both cars
    cout << "Please insert the miles you traveled in you car.\n";
    cin >> miles1;
    cout << "Now insert the number of liters of gasoline consumed\n";
    cin >> cons;
           
    //Calculating
    cons = (cons * lit);
    mpg = miles1 / cons;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting answer
    cout << "Your car consumed at least " << mpg << 
            " miles per gallon.\nWould you like to try again?\n"
            "Y = Yes\nN = No\n";
    cin >> ans;
   
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
     return 0;
}

