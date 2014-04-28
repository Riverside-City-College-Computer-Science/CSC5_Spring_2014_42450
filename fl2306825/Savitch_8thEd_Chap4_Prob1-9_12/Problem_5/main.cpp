/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 8, 2014, 7:04 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype 

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    float inflation, itmPresnt, itmYearAgo, itmYear2;
    char ans;
    
    do{
    //Outputting
    cout << "Please insert a price of an item in present day.\n";
    cin >> itmPresnt;
    cout << "Now insert the same item price a year ago.\n";
    cin >> itmYearAgo;        
    
    //Calculate
    inflation = itmPresnt / itmYearAgo;
    itmYear2 = inflation * itmYearAgo;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting answer
    cout << "The inflation rate was "<< inflation << " percent. "
            "The price before the previous year was " 
            << static_cast <float> (itmYear2) << 
            "\nWould you like to try again?\nY = Yes\nN = No\n";
    cin >> ans;
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye";
       
    return 0;
    
}

