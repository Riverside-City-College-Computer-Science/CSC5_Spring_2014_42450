/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 26, 2014, 7:37 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
//Variable declartion
int month, date;
int startdate,startmonth,enddate,endmonth;
char continues;
do
(
//Inputting day
cout<<" Enter the day of month for your birthday\n";
cin>>date;
//Inputting month
cout<<" Entre month of your birthday\n";

cin>>month;
if(month>12 || date>31)

cout<<"Invalid input\n";
else

(

startdate = 21;
enddate = 19;
startmonth = 3;
endmonth = 4;

if(( month == startmonth && date >= startdate)
||(month == endmonth && date <= enddate))
(
cout<<"Your Sign is : aries \n";

if(date >= enddate—3)
cout<<" you are a cusp baby and with
adjacent sign: Taurus \n";
else if(date <= startdate +3)
cout<<" you are a cusp baby and with
adjacent sign: Pieces \n";

}

startdate = 20;
enddate = 20;
startmonth = 4;
endmonth = 5;
if(( month == startmonth && date>= startdate)
         ||(month ==endmonth && date <= enddate))
{
cout<<"Your Sign is : Taurus";
if(date >= enddate — 3)
cout<<"you are a cusp baby and with adjacent sign:Gemini;

else if(date <= startdate + 3)
cout<<" you are a cusp baby and with adjacent sign: Aries";
}
startdate = 21;
enddate = 21;
startmonth = 5;
endmonth = 6;

if(( month == startmonth && date >= startdate)
||(month == endmonth && date <= enddate))
{
cout<<"Your Sign is : Gemini";
if(date >= enddate — 3)
cout<<"you are a cusp baby and with adjacent sign: Cancer";

else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent sign:Taurus";
}    

startdate = 22;
enddate = 22;
startmonth = 6;
endmonth = 7;

if(( month == startmonth && date >= startdate)
||(month == endmonth && date <= enddate))
{
cout<<"Your Sign is : Cancer\n";

if(date >= enddate—3)
cout<<"you are a cusp baby and with adjacent sign: Leo";
else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent
sign: Gemini\n";
}
startdate = 23;
enddate = 22;
startmonth = 7;
endmonth = 8;

if(( month == startmonth && date >= startdate)
||(month == endmonth && date <= enddate))
{
cout<<"Your Sign is : Leo\n";

if(date >= enddate — 3)
cout<<"you are a cusp baby and with adjacent sign: Virgo"<<endl;

else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent sign: Cancer"<<endl;
}
 
startdate = 23;
enddate = 22;
startmonth = 8;
endmonth = 9;

if(( month == startmonth && date>= startdate)
||(month == endmonth && date <= enddate))
(
cout<<"Your Sign is : Virgo\n";

if(date >= enddate — 3)
cout<<"you are a cusp baby and with adjacent sign: Libra";

else if(date <= startdate + 3)

cout<<"you are a cusp baby and with adjacent sign: Leo";

}

startdate = 23;

enddate = 22;

startmonth = 9;

endmonth = 10;
if(( month == startmonth && date>= startdate)

||(month ==endmonth && date <= enddate))

{

cout<<"Your Sign is : Libra\n";

if'('date >= enddate-3)

cout<<"you are a cusp baby and with adjacent sign: Scorpio";

else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent sign: Virgo";

}
  startdate =23;
enddate = 21;
startmonth = 10;
endmonth = 11;
if(( month== startmonth && date>= startdate)
||(month == endmonth && date <= enddate))
{
cout<<"Your Sign is :Scorpio\n";
if(date >= enddate — 3)
cout<<"you are a cusp baby and with adjacent
sign: SagitariuS\n";
else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent sign: Libra";
}
startdate =22;
enddate = 21;
startmonth = 11;
endmonth = 12;
if(( month== startmonth && date>= startdate)
||(month == endmonth && date <= enddate))
{
cout<<"Your Sign is :Sagittarius\n";
if(date >= enddate—3)
cout<<"you are a cusp baby and with adjacent sign:
SagitariuS\n";
else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent sign:
Libra\n";
}
 startdate = 22;
enddate = 19;
startmonth = 12;
endmonth = 1;
if(( month== startmonth && date>= startdate)
||(month ==endmonth && date <= enddate))

{

cout<<"Your Sign is : Capricorn\n";

if(date >= enddate — 3)

cout<<"you are a cusp baby and with adjacent sign:Aquarius\n";

else if(date <= startdate +3)

cout<<"you are a cusp baby and with adjacent

sign:Sagittarius\n";

}

startdate = 20;

enddate = 18;

startmonth = 1;

endmonth = 2;
if(( month== startmonth && date>= startdate)

||(month ==endmonth && date <= enddate))

{

cout<<"Your Sign is : AquariuS\n";

if(date>= enddate — 3)

cout<<"you are a cusp baby and with adjacent
sign: Pisces\n";
else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent
sign: Capricorn\n";
}
    
startdate = 19;

enddate = 20;

startmonth = 2;

endmonth = 3;
if(( month== startmonth && date>= startdate)

||(month ==endmonth && date <= enddate))

{

cout<<"Your Sign is : Pieces";
 if(date >= enddate — 3)
cout<<"you are a cusp baby and with adjacent
sign: Aries\n";
else if(date <= startdate + 3)
cout<<"you are a cusp baby and with adjacent
sign: Aquarius\n";
}
}
cout<<" To repeat calculations for different variables
then press 'y' or 'Y'\n";
cin>>continueS;
)while(continues=='y' || continues =='Y');
//Pause system for a while
system("pause");
}//End main function
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

