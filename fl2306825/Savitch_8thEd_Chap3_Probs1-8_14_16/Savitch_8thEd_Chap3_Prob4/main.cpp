/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on March 22, 2014, 9:35 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constant

//Function prototype

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    int x, y;  
    char ans;
    do
    {   
    //Inputting birthday
    cout << "Hello, please insert the day number of your birth..\n";
    cin >> y;
    cout << "Now insert the month number of your birth..\n";
    cin >> x;
    
    
    //If statements
    
    if((x ==1 && y >= 22)||(x == 2 && y <= 18))
    {
        cout << "Your horoscope sign is: Aquarius\nand your element is: Air";
    }
    else if((x == 2 && y >= 19)||(x == 3 && y <= 20))
    {
        cout << "Your horoscope sign is: Pisces\nand your element is: Air";
    }
    else if((x == 3 && y >= 21)||(x == 4 && y <= 19))
    {
        cout << "Your horoscope sign is: Aries\nand your element is: Fire";
    }
    else if((x == 4 && y >= 20)||(x == 5 && y <= 20))
    {
        cout << "Your horoscope sign is: Taurus\nand your element is: Earth";
    }
   else if((x == 5 && y >= 21)||(x == 6 && y <= 21))
    {
        cout << "Your horoscope sign is: Gemini\nand your element is: Air";
    }     
    else if((x == 6 && y >= 22)||(x == 7 && y <= 22))
    {
        cout << "Your horoscope sign is: Cancer\nand your element is: Air";
    }
    else if((x == 7 && y >= 23)||(x == 8 && y <= 22))
    {
        cout << "Your horoscope sign is: Leo\nand your element is: Fire";
    }
    else if((x == 8 && y >= 23)||(x == 9 && y <= 22))
    {
        cout << "Your horoscope sign is: Virgo\nand your element is: Earth";
    }
    else if((x == 9 && y >= 23)||(x == 10 && y <= 22))
    {
        cout << "Your horoscope sign is: Libra\nand your element is: Air";
    }
    else if((x == 10 && y >= 23)||(x == 11 && y <= 21))
    {
        cout << "Your horoscope sign is: Scorpio\nand your element is: Water";
    }
    else if((x == 11 && y >= 22)||(x == 12 && y <= 21))
    {
        cout << "Your horoscope sign is: Sagittarius\nand your element is: Fire";
    }
    else if((x == 12 && y >= 22)||(x == 1 && y <= 19))
    {
        cout << "Your horoscope sign is: Capricorn\nand your element is: Earth";
    }
    else
    {
        cout << "Invalid";
    }
    
    //Looping
    cout << "\nWould you like to try again?\ny = Yes\nn = No\n";
    cin >> ans;

    }while(ans == 'y' ||ans == 'Y');
    
    cout << "Goodbye!";
return 0;
}


