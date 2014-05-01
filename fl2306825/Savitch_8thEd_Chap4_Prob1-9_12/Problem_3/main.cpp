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
float totl(int dollar_par, int numer_par, int denm_par);

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    int stock, dollar, numer, denm;
    float val1, val2;
    char ans;
    
    do{
    //Inputting
    cout << "Hello, please enter the number of shares you hold\n";
    cin >> stock;
    cout << "Enter the whole dollar portion\n";
    cin >> dollar;
    cout << "The numerator\n";
    cin >> numer;
    cout << "And the denominator\n";
    cin >> denm;
    
    //Calculating
    val1 = totl(dollar, numer, denm);
    val1 = val1 / stock;
    val2 = val1 * stock;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Outputting
    cout << "The price for one share of stock is: " << val1 << 
            "\n And the total value is: " << val2 << endl;
    cout << "Would you like to try again?\nY = Yes\nN = No\n";
    cin >> ans;
    
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
    return 0;
}
float totl(int dollar_par, int numer_par, int denm_par)
{
    return (((dollar_par * static_cast<float>(denm_par)) + static_cast<float>(numer_par))/static_cast<float>(denm_par));
}

