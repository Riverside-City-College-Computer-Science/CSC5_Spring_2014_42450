/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 23, 2014, 10:07 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {

    //Declare variables
    int hour, tmemin;
    float r1 = 0.40, r2 = 0.25, r3 = 0.15, cost;
    char day, day2, ans;
    
    
    
    //Input time start, time length, and day of the call
    do
    {
    cout << "Hello, Please input the day of the call in two variables:\n"
            "Mo  Tu  We  Th  Fr  Sa  Su\n";
    cin >> day >> day2;
    do
    {
    cout << "What time did you start the call in a 24 hour notation?\n";
    cin >> hour;
    if(hour >= 25)
    {
        cout << "Invalid, please try again.\n";
    }
    }while(hour >= 25);
    cout << "Finally, how long was the call?\n";
    cin >> tmemin;
    
    //If statements
    if((tolower(day) == 'm')||(tolower(day) == 'o'))//**************************
    {
         if ((hour >= 8 && tmemin >= 00)||(hour <= 18 && tmemin <= 59))
        {
            cost = tmemin * r1;
        }else
        {
            cost = tmemin * r2;
        }
    }
    else if((tolower(day) == 't')||(tolower(day) == 'u'))//*********************
    {
         if ((hour >= 8 && tmemin >= 00)||(hour <= 18 && tmemin <= 59))
        {
            cost = tmemin * r1;
        }else
        {
            cost = tmemin * r2;
        }
    }
    else if((tolower(day) == 'w')||(tolower(day) == 'e'))//*********************
    {
         if ((hour >= 8 && tmemin >= 00)||(hour <= 18 && tmemin <= 59))
        {
            cost = tmemin * r1;
        }else
        {
            cost = tmemin * r2;
        }
    }
    else if((tolower(day) == 't')||(tolower(day) == 'h'))//*********************
    {
         if ((hour >= 8 && tmemin >= 00)||(hour <= 18 && tmemin <= 59))
        {
            cost = tmemin * r1;
        }else
        {
            cost = tmemin * r2;
        }
    }
    else if((tolower(day) == 'f')||(tolower(day) == 'r'))//*********************
    {
         if ((hour >= 8 && tmemin >= 00)||(hour <= 18 && tmemin <= 59))
        {
            cost = tmemin * r1;
        }else
        {
            cost = tmemin * r2;
        }
    }
         else if((tolower(day) == 's')||(tolower(day2) == 'a'))//***************
    {
        cost = tmemin * r3;
    }
     else if((tolower(day) == 's')||(tolower(day2) == 'u'))//*******************
    {
        cost = tmemin * r3;
    }
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "The time was: " << hour << ":" << tmemin << 
            "\non a " << day << day2 << ".\nand the cost is: $" << cost <<endl;
    
    //Looping
    cout << "Do you want to try again?\ny = Yes\nn = No\n";
    cin >> ans;
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
    
    //Execution ends here
    return 0;
}

