/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 26, 2014, 8:13 PM
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) 
{

int hours , mins ,minutes ;
char day1,day2,choice;
do
{ 

//Inputting day

cout<<"Enter the day of call :"<<endl;
day1 = getcharo;
day2 = getcharo;

//Inputting time of call in hours
cout<<"Enter time of call hour (1:30 PM Enter 13 here) ";
cin>>hours;

//Inputting minutes of call
cout<<"Enter min of hour(Enter 30 for 1:30 PM)";
cin>>mins;

//Inputting call duration in minutes
cout<<" Enter call duration in minutes"<<endl;
cin>>minutes;

if(((day1 =='S'||day1 =='s')&&

(day2 =='a'| |day2 =='A'>> ll

(((day1 =='S'||day1 =='S')&&
(day2 =='u' I |day2 =='U'>>>>

{
cout<<"Call charges are: S"<<(.15*minutes);

}

else if (((day1 == ‘M’ II dayl =='m')

&&(day2=='o'||day2=='O'))||((day1 == 't'
|| dayl =='T')&&(day2=='u'||day2=='U'))||
((day1 == 'w' || dayl =='W')&&

<day2=='e' I |day2=='E')) ll (dayl == 't' I I

dayl =='T')&&(day2=='h'||day2=='H'))||
((day1 == ‘E’ || dayl =='f')&&

<day2=='r'| |day2=='R'>>>
{
  if(hours>=8 &&hours<18)
(
cout<<"Call charges are: S"<<(.4U*minutes);
}
else
{
cout<<"\n Call charges are: S"<<(.25*minutes);
}
}
else
{
cout<<"You entered wrong values";
}
cout<<"\nTo repeat calculations for different
variables then press 'y' or 'Y'"<<endl;
cin>>choice;
}while(choice =='y' || choice =='Y');

//Pause system for while
system("pause");
  
    
    
    
    
    return 0;
}

