/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 15, 2014, 7:29 PM
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

//creating account class
class Account
{
private:
  int balance; // bank account balance name

public:
  Account ( int );
   void setBalance( int );
  int getBalance();
  int debitBalance( int );
  int creditBalance( int );
};

//initialization with constructor, with supplied arguments
Account::Account ( int initialBalance )
{
  if (initialBalance >= 0)
    setBalance ( initialBalance );
    cout << "Account balance set without any problem" << endl;
  if (initialBalance < 0)
  {
     balance = 0;
     cout << "Account balance cannot be negative. Account amount set as 0" << endl;
   }
}
void Account::setBalance(int initialBalance)
{
  balance = initialBalance;
}
int Account::debitBalance( int debitAmount )
{
  if (debitAmount > balance)
     cout << "Your balance is not enough!\n";    
  else
   { 
      balance = balance - debitAmount;
  }
}
int Account::creditBalance( int creditAmount )
{
  balance += creditAmount;
}
int Account::getBalance()
{
  return balance;
}
int main()
{
  Account account1( 150 );
  Account account2( -200 );
  
  int choise;
  int accountNo;
  int debAmount;
   int credAmount;  
 
  //display initial balances
  cout << "Initial balance of account1 is " << account1.getBalance() << endl;
  cout << "Initial balance of account2 is " << account2.getBalance() << endl;
 
  menu:
  cout << "\nPlease select the transaction (enter the number):" << endl;
  cout << "1. Balance Inquiry" << endl;
  cout << "2. Debit" << endl;
  cout << "3. Credit" << endl;
 
  cin >> choise;
  //balance inquiry
  switch (choise)
  {
   case 1:
    cout << "Balance Inquiry is selected" << endl;
      cout << "please select the account (enter the number): " << endl;
      cout << "1. account1\n2. account2" << endl;
 
       cin >> accountNo;
       cout << "option selected: " << accountNo << endl;
 
       switch ( accountNo ) 
      {
         case 1 : 
             cout << "account1 balance: " << account1.getBalance() << endl;
         goto menu;
         //break;
         case 2 : 
             cout << "account2 balance: " << account2.getBalance() << endl;
         goto menu;
        //break;
         default :        
           cout << "incorrect option!" << endl;
        goto menu;
          }
   //break;
   goto menu;
 
   case 2 :
    cout << "Debit is selected" << endl;
      cout << "please select the account (enter the number): " << endl;
      cout << "1. account1\n2. account2" << endl;   
 
       cin >> accountNo;
       cout << "option selected: " << accountNo << endl;
 
      switch ( accountNo ) 
      {
         case 1 : 
             cout << "account1 balance: " << account1.getBalance() << endl;
             cout << "enter debit amount: " << endl;
             cin >> debAmount;
             cout << "entered amount is " << debAmount << endl;
             account1.debitBalance(debAmount);
             cout << "current balance is " << account1.getBalance() << endl;
         goto menu;
         //break;
         case 2 : 
             cout << "account2 balance: " << account2.getBalance() << endl;
             cout << "enter debit amount: " << endl;
             cin >> debAmount;
             cout << "entered amount is " << debAmount << endl;
             account2.debitBalance(debAmount);
             cout << "current balance is " << account2.getBalance() << endl;
         goto menu;
         //break;
         default :        
           cout << "incorrect option!!!" << endl;
        goto menu;           
          }   
   break;
   case 3 :
    cout << "Credit is selected" << endl;
      cout << "please select the account (enter the number): " << endl;
      cout << "1. account1\n2. account2" << endl;   
 
       cin >> accountNo;
       cout << "option selected: " << accountNo << endl;
 
      switch ( accountNo ) 
      {
         case 1 : 
             cout << "account1 balance: " << account1.getBalance() << endl;
             cout << "enter debit amount: " << endl;
             cin >> credAmount;
             cout << "entered amount is " << credAmount << endl;
             account1.creditBalance(credAmount);
             cout << "current balance is " << account1.getBalance() << endl;
         goto menu;
         //break;
         case 2 : 
             cout << "account2 balance: " << account2.getBalance() << endl;
             cout << "enter debit amount: " << endl;
             cin >> credAmount;
             cout << "entered amount is " << credAmount << endl;
             account2.creditBalance(credAmount);
             cout << "current balance is " << account2.getBalance() << endl;
         goto menu;
         //break;
         default :        
           cout << "incorrect option!!!" << endl;
        goto menu;           
          }   
   break;
    default:
      cout << "incorrect option!" << endl;
    }
 
  system("PAUSE");  
  return 0;
}
