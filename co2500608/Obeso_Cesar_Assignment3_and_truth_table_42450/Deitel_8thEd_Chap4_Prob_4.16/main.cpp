/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 26, 2014, 2:16 PM
 */

//System libraries
#include <iostream>
#include <iomanip>
 
using namespace std;
 
//Global Constants

//Function prototypes

//Execution begins here
int main() {
//Declare variables
    
  int totalSalary = 0;
  int salary;
  int extSalary;
  int hours;
  int rate;
 
  cout << "Enter hours worked (-1 to end): ";
   cin >> hours;
 
  while( hours != -1)
  {
    cout << "Enter hourly rate of the employee ($00.00): ";
   cin >> rate;
 
      if( hours <=40 )
      {
        salary = hours * rate;
        cout << "Salary is $" << setprecision( 2 ) << fixed << salary << endl;
    }
    else
     {
        totalSalary = (40*rate) + ((hours-40)*rate*1.5);
        cout << "Salary is $" << setprecision( 2 ) << fixed << totalSalary << endl;
     }
   cout << "\nEnter hours worked (-1 to end): ";
   cin >> hours;
 
    }
    //Exit  stage right
   return 0;
}

