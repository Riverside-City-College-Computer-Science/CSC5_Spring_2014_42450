/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on March 19, 2014, 8:21 AM
 * Purpose: Astrology Program
 */

//System Library
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
     //Declare Variables
    int month, date;
    char ans;
    do{
    //Input Birthday
    cout<<"\n";
    cout<<"Enter birth month (ex. January = 1): ";
    cin>>month;
    cout<<"\n";
    cout<<"Enter birth date: ";
    cin>>date;
    cout<<"\n";
    if ((month==3&&date>=21)||(month==4&&date<=19)){
        cout<<"Aries: Your Horoscope Here";
    }
    else if ((month==4&&date>=20)||(month==5&&date<=20)){
        cout<<"Taurus: Your Horoscope Here";
    }
    else if ((month==5&&date>=21)||(month==6&&date<=21)){
        cout<<"Gemini: Your Horoscope Here";
    }
    else if ((month==6&&date>=22)||(month==7&&date<=22)){
        cout<<"Cancer: Your Horoscope Here";
    }
    else if ((month==7&&date>=23)||(month==8&&date<=22)){
        cout<<"Leo: Your Horoscope Here";
    }
    else if ((month==8&&date>=23)||(month==9&&date<=22)){
        cout<<"Virgo: Your Horoscope Here";
    }
    else if ((month==9&&date>=23)||(month==10&&date<=22)){
        cout<<"Libra: Your Horoscope Here";
    }
    else if ((month==10&&date>=23)||(month==11&&date<=21)){
        cout<<"Scorpio: Your Horoscope Here";
    }
    else  if ((month==11&&date>=22)||(month==12&&date<=21)){
        cout<<"Sagittarius: Your Horoscope Here";
    }
    else if ((month==12&&date>=22)||(month==1&&date<=19)){
        cout<<"Capricorn: Your Horoscope Here";
    }
    else if ((month==1&&date>=20)||(month==2&&date<=18)){
        cout<<"Aquarius: Your Horoscope Here";
    }
    else if ((month==2&&date>=19)||(month==3&&date<=20)){
        cout<<"Pisces: Your Horoscope Here";
    }
    else 
     {
        cout<<"Invalid Entry";
     }
    cout<<"\n";
    cout<<"\n";
    cout<<"Would you like to check another horoscope?\n";
    cout<<"Enter y for yes, n for no: ";
    cin>>ans;
    }while (ans=='y'||ans=='Y');
      cout<<"\n";      
    cout<<"The End"; 
    //Exit Stage Right
    return 0;
}

