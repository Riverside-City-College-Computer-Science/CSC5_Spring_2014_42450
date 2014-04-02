/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 26, 2014, 11:06 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototypes

//Execution begins here 
int main()
{
    //Declare variables
  int totalChargesMonth = 0;
  int totalCreditsMonth = 0;
  int accountNumber;
  int initialBalance;
  int availableCredit;
  int newBalance;
 
    cout << "Enter account number (or -1 to quit): ";
    cin >> accountNumber;
 
  while( accountNumber != -1)
  {
    cout << "Enter beginning balance: ";
    cin >> initialBalance;
    cout << "Enter total charges: ";
    cin >> totalChargesMonth;
    cout << "Enter total credits: ";
    cin >> totalCreditsMonth;
    cout << "Enter credit limit: ";
    cin >> availableCredit;
 
    newBalance = (initialBalance + totalChargesMonth - totalCreditsMonth);
 
    if ( newBalance > availableCredit)
    {
      cout << "\nNew balance is " << newBalance << endl;
      cout << "Account: " << accountNumber << endl;
      cout << "Credit limit: " << availableCredit << endl;
      cout << "Balance: " << newBalance << endl;
       cout << "Credit Limit Exceeded." << endl;
     }
    else
    {
      cout << "\nNew balance is " << newBalance << endl;
    }
 
    cout << "Enter account number (or -1 to quit): ";
    cin >> accountNumber;  
    }
 
    //Exit stage right
   return 0;
}
