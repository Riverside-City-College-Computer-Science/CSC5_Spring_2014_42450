/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on March 22, 2014, 2:12 PM
 * Purpose: Modify Problem 3 to include compatible element types.
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int mon, date;
    
    //Prompt user for inputs
    cout<<"Enter the month you were born as a number 1-12: ";
    cin>>mon;
    cout<<"Enter the date you were born in that month: ";
    cin>>date;
    cout<<endl;
    
    //if-else for Aries and cusp of Taurus and Pisces.
    if ((mon==3&&date>=21)||(mon==4&&date<=19))
    {
        cout<<"Aries: Horoscope "<<endl;
        cout<<endl;
        if (mon==4&&date>=17)
        {
            cout<<"Your birthday is on the cusp."<<endl;
            cout<<"Taurus: Horoscope"<<endl;
            cout<<endl;
        }
        if (mon==3&&date<=23)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Pisces: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==3&&date>=21)||(mon==4&&date<=19)||(mon==7&&date>=23)
                ||(mon==8&&date<=22)||(mon==11&&date>=22)||(mon==12&&date<=21))
        {
            cout<<"You are compatible with Leo and Sagittarius";
            cout<<endl;
        }
    }    
    //if-else for Taurus and cusp of Gemini and Aries  
    else if ((mon==4&&date>=20)||(mon==5&&date<=20))
    {
        cout<<"Taurus: Horoscope "<<endl;
        cout<<endl;
        if (mon==5&&date>=18)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Gemini: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==4&&date<=22)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Aries: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==4&&date>=20)||(mon==5&&date<=20)||(mon==8&&date>=23)
                ||(mon==9&&date<=22)||(mon==12&&date>=22)||(mon==1&&date<=19))
        {
            cout<<"You are compatible with Virgo and Capricorn";
            cout<<endl;
        }
    }    
    //if-else for Gemini and cusp of Cancer and Taurus
    else if ((mon==5&&date>=21)||(mon==6&&date<=21))
    {
        cout<<"Gemini: Horoscope "<<endl;
        cout<<endl;
        if (mon==6&&date>=19)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Cancer: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==5&&date<=23)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Taurus: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==5&&date>=21)||(mon==6&&date<=21)||(mon==9&&date>=23)
                ||(mon==10&&date<=22)||(mon==1&&date>=20)||(mon==2&&date<=18))
        {
            cout<<"You are compatible with Libra and Aquarius";
            cout<<endl;
        }
    }    
    //if-else for Cancer and cusp of Leo and Gemini
    else if ((mon==6&&date>=22)||(mon==7&&date<=22))
    {
        cout<<"Cancer: Horoscope "<<endl;
        cout<<endl;
        if (mon==7&&date>=20)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Leo: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==6&&date<=24)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Gemini: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==6&&date>=22)||(mon==7&&date<=22)||(mon==10&&date>=23)
                ||(mon==11&&date<=21)||(mon==2&&date>=19)||(mon==3&&date<=20))
        {
            cout<<"You are compatible with Scorpio and Pisces";
            cout<<endl;
        }
    }    
    //if-else for Leo and cusp of Virgo and Cancer
    else if ((mon==7&&date>=23)||(mon==8&&date<=22))
    {
        cout<<"Leo: Horoscope"<<endl;
        cout<<endl;
        if (mon==8&&date>=20)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Virgo Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==7&&date<=25)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Cancer: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==3&&date>=21)||(mon==4&&date<=19)||(mon==7&&date>=23)
                ||(mon==8&&date<=22)||(mon==11&&date>=22)||(mon==12&&date<=21))
        {
            cout<<"You are compatible with Aries and Sagittarius"<<endl;
            cout<<endl;
        }
    }    
    //if-else for Virgo and cusp of Libra and Leo
    else if ((mon==8&&date>=23)||(mon==9&&date<=22))
    {
        cout<<"Virgo: Horoscope "<<endl;
        cout<<endl;
        if (mon==9&&date>=20)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Libra: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==8&&date<=25)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Leo: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==4&&date>=20)||(mon==5&&date<=20)||(mon==8&&date>=23)
                ||(mon==9&&date<=22)||(mon==12&&date>=22)||(mon==1&&date<=19))
        {
            cout<<"You are compatible with Taurus and Capricorn";
            cout<<endl;
        }
    }    
    //if-else for Libra and cusp of Scorpio and Virgo
    else if ((mon==9&&date>=23)||(mon==10&&date<=22))
    {
        cout<<"Libra: Horoscope "<<endl;
        cout<<endl;
        if (mon==10&&date>=20)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Scorpio: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==9&&date<=25)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Virgo: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==5&&date>=21)||(mon==6&&date<=21)||(mon==9&&date>=23)
                ||(mon==10&&date<=22)||(mon==1&&date>=20)||(mon==2&&date<=18))
        {
            cout<<"You are compatible with Gemini and Aquarius";
            cout<<endl;
        }
    }    
    //if-else for Scorpio and cusp of Sagittarius and Libra
    else if ((mon==10&&date>=23)||(mon==11&&date<=21))
    {
        cout<<"Scorpio: Horoscope "<<endl;
        cout<<endl;
        if (mon==11&&date>=19)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Sagittarius: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==10&&date<=25)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Libra: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==6&&date>=22)||(mon==7&&date<=22)||(mon==10&&date>=23)
                ||(mon==11&&date<=21)||(mon==2&&date>=19)||(mon==3&&date<=20))
        {
            cout<<"You are compatible with Cancer and Pisces";
            cout<<endl;
        }
    }    
    //if-else for Sagittarius and cusp of Capricorn and Scorpio
    else if ((mon==11&&date>=22)||(mon==12&&date<=21))
    {
        cout<<"Sagittarius: Horoscope "<<endl;
        cout<<endl;
        if (mon==12&&date>=19)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Capricorn: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==11&&date<=25)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Scorpio: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==3&&date>=21)||(mon==4&&date<=19)||(mon==7&&date>=23)
                ||(mon==8&&date<=22)||(mon==11&&date>=22)||(mon==12&&date<=21))
        {
            cout<<"You are compatible with Aries and Leo"<<endl;
            cout<<endl;
        }
    }    
    //if-else for Capricorn and cusp of Aquarius and Sagittarius
    else if ((mon==12&&date>=22)||(mon==1&&date<=19))
    {
        cout<<"Capricorn: Horoscope "<<endl;
        cout<<endl;
        if (mon==1&&date>=17)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Aquarius: Horoscope"<<endl;
           cout<<endl;           
        }
        if (mon==12&&date<=22)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Sagittarius: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==4&&date>=20)||(mon==5&&date<=20)||(mon==8&&date>=23)
                ||(mon==9&&date<=22)||(mon==12&&date>=22)||(mon==1&&date<=19))
        {
            cout<<"You are compatible with Taurus and Virgo";
            cout<<endl;
        }
    }    
    //if-else for Aquarius and cusp of Pisces and Capricorn
    else if ((mon==1&&date>=20)||(mon==2&&date<=18))
    {
        cout<<"Aquarius: Horoscope "<<endl;
        cout<<endl;
        if (mon==2&&date>=16)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Pisces: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==1&&date<=22)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Capricorn: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==5&&date>=21)||(mon==6&&date<=21)||(mon==9&&date>=23)
                ||(mon==10&&date<=22)||(mon==1&&date>=20)||(mon==2&&date<=18))
        {
            cout<<"You are compatible with Gemini and Libra";
            cout<<endl;
        }
    }    
    //if-else for Pisces and cusp of Aries and Aquarius
    else if ((mon==2&&date>=19)||(mon==3&&date<=20))
    {
        cout<<"Pisces: Horoscope "<<endl;
        cout<<endl;
        if (mon==3&&date>=19)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Aries: Horoscope"<<endl;
           cout<<endl;
        }
        if (mon==2&&date<=21)
        {
           cout<<"Your birthday is on the cusp."<<endl;
           cout<<"Aquarius: Horoscope"<<endl;
           cout<<endl;
        }
        if ((mon==6&&date>=22)||(mon==7&&date<=22)||(mon==10&&date>=23)
                ||(mon==11&&date<=21)||(mon==2&&date>=19)||(mon==3&&date<=20))
        {
            cout<<"You are compatible with Cancer and Scorpio";
            cout<<endl;
        }
    }
    //else not a valid input
    else cout<<"Not a valid input."<<endl;
    cout<<endl;
    cout<<"This is the end of the program."<<endl;
    
//Exit Stage Right
    return 0;
}

