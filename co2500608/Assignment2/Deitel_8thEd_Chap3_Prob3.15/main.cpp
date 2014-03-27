/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 16, 2014, 5:09 PM
 */

#include <iostream>
#include <cstdlib>
using namespace std;

class MyDate
{
    private:
  int day;
  int month;
  int year;

public:
  MyDate(int, int, int);
  // get and set functions for month/day/year
  int getDay(); 
  void setDay(int);
  int getMonth();
  void setMonth(int);
   int getYear();
  void setYear(int);  
  void displayDate();   // display function
  void guessBirthday(int);
};

//initialization with constructor
MyDate::MyDate(int month, int day, int year)
{
  if(month < 1||month >12)
  {
    setMonth(1);
    cout << "Month set as 1" << endl;
  }
  else
     setMonth(month);
  setDay(day);
  setYear(year);
}
 
// get day function
int MyDate::getDay()
{
  return day;
}
 
// get month function
int MyDate::getMonth()
{
  return month;
}
 
// get year function
int MyDate::getYear()
{
  return year;
}
 
// set day function
void MyDate::setDay(int d)
{
  day = d;
}
 
// set month function
void MyDate::setMonth(int m)
{
  month = m;
}
 
// set year function
void MyDate::setYear(int y)
{
  year = y;
}
 
// display date function
void MyDate::displayDate()
{
  cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}
 
// guess birthday function
void MyDate::guessBirthday(int res)
{
  int x;
  x = res - 250;
  setDay(x / 100);
  setMonth(x % 100);
  cout << "Your birthday: Month: " << getMonth() << " Day: " << getDay() << endl;
}

int main()
{
  //create Date class object
  MyDate mDate( 3, 25, 2014 );
 
  //display initial date
  mDate.displayDate();
 
  //test program that demonstrates class Date’s capabilities
  cout << "I can guess your birthday.\n"
     << "Please complete following steps and enter final number.\n"
     << "1. Multiply the DAY of month  in which you were born by 2.\n"
     << "2. Add 5 to new number.\n"
     << "3. Multiply new number by 50.\n"
     << "4. Add the number that represents the month (1-January, 2-February etc) to new number.\n"
     << "5. Enter the result:";
  int result;
  cin >> result;
  mDate.guessBirthday(result);
 
 
  // to pause
  char a;
  cin >> a;
 
  return 0;
}



