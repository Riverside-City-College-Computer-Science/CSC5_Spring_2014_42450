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
    int x, y, ans;  
    
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
        cout << "Your horoscope sign is: Aquarius\n";
    }
    else if((x == 2 && y >= 19)||(x == 3 && y <= 20))
    {
        cout << "Your horoscope sign is: Pisces\n";
    }
    else if((x == 3 && y >= 21)||(x == 4 && y <= 19))
    {
        cout << "Your horoscope sign is: Aries";
    }
    else if((x == 4 && y >= 20)||(x == 5 && y <= 20))
    {
        cout << "Your horoscope sign is: Taurus";
    }
   else if((x == 5 && y >= 21)||(x == 6 && y <= 21))
    {
        cout << "Your horoscope sign is: Gemini";
    }     
    else if((x == 6 && y >= 22)||(x == 7 && y <= 22))
    {
        cout << "Your horoscope sign is: Cancer";
    }
    else if((x == 7 && y >= 23)||(x == 8 && y <= 22))
    {
        cout << "Your horoscope sign is: Leo";
    }
    else if((x == 8 && y >= 23)||(x == 9 && y <= 22))
    {
        cout << "Your horoscope sign is: Virgo";
    }
    else if((x == 9 && y >= 23)||(x == 10 && y <= 22))
    {
        cout << "Your horoscope sign is: Libra";
    }
    else if((x == 10 && y >= 23)||(x == 11 && y <= 21))
    {
        cout << "Your horoscope sign is: Scorpio";
    }
    else if((x == 11 && y >= 22)||(x == 12 && y <= 21))
    {
        cout << "Your horoscope sign is: Sagittarius";
    }
    else if((x == 12 && y >= 22)||(x == 1 && y <= 19))
    {
        cout << "Your horoscope sign is: Capricorn";
    }
    else
    {
        cout << "Invalid";
    }
    
    
    //Looping
    cout << "\nWould you like to try again?\ny = Yes\nn = No\n";
    cin >> ans;
    }while(tolower(ans) == 'y');
    
    cout << "Goodbye!";
return 0;
}


