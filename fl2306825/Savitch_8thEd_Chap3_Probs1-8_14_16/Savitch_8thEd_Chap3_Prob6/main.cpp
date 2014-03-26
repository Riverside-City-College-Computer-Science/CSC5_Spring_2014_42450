/* 
 * File:   main.cpp
 * Author: Home Computer
 *
 * Created on March 25, 2014, 6:18 PM
 */

//System Libraries
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    int a, b, c;
    float x, x2, x3, x4;
    char ans;
    
    //Input numbers
    do
    {
    cout << "ax^2 + bx + c = 0\n"
            "Please insert a number for a:\n";
    cin >> a;
    cout << "b:\n";
    cin >> b;
    cout << "c:\n";
    cin >> c;
    
    //Calculating
    x4 = ((b * b) - (4 * a * c));
    x2 = sqrt((b * b) - (4 * a * c));
    
    //if statements
    if(x2 == 0)
    {
        x= -b/(2 * a);
        cout << "x = ";
        cout << x << endl;
    }
    else if(x4 > 0)
    {
        x = (-b + (x2)) / (2 * a);
        x3 = (-b - (x2)) / (2 * a);
        cout << "x = " << x << " ," << x3;
    }
    else if (x4 < 0)
    {
        x2 = sqrt((-1) * ((b * b) - (4 * a * c)));
        cout << "x = -" << b / (2 * a) << " + " << x2 / (2 * a ) << "i\n"
                "x = -" << b / (2 * a) << " - " << x2 / (2 * a ) << "i\n";
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    //Looping
    cout << "\nWould you like to try again?\ny = Yes\nn = No\n";
    cin >> ans;
    
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
    

    return 0;
}

