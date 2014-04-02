/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 26, 2014, 1:50 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

//Global Constants

//Function prototypes

//Execution begins here
int main()
{
  //Declare variables
  int minSalary = 200;
  int commission;
  int sales;
  int totalSalary;
 
  //Enter sales amount
  cout << "Enter sales in dollars (-1 to end): ";
  cin >> sales;
 
  while( sales != -1) // loop till user enter -1
  {
     commission = sales*9/100;
     totalSalary = commission + minSalary;
 
     //display total weekly salary
     cout << "Salary is: $" << setprecision(2) << fixed << totalSalary << endl;
 
    //Enter sales amount
     cout << "/nEnter sales in dollars (-1 to end): ";
     cin >> sales;
 
    }
 
   //Exit stage right
   return 0;
}
