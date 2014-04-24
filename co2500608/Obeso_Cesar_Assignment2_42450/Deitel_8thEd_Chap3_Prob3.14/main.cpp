/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 16, 2014, 2:44 PM
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
 
using namespace std;
class Employee
{
private:
  string firstName;
  string lastName;
  int salary;

public:
  Employee(string initFirstName, string initLastName, int initSalary);
  void setFirstName( string );
  string getFirstName();
  void setLastName( string );
  string getLastName();
  void setSalary( int );
  int getSalary();
};

//initialization with constructor
Employee::Employee(string initFirstName, string initLastName, int initSalary)
{
  setFirstName( initFirstName);
  setLastName( initLastName);
  setSalary( initSalary);
}
 
//function for set first name
void Employee::setFirstName( string initFirstName)
{
  firstName = initFirstName;
}
//function for get first name
string Employee::getFirstName()
{
  return firstName;
}
//function for set last name
void Employee::setLastName( string initLastName)
{
  lastName = initLastName;
}
//function for get last name
string Employee::getLastName()
{
  return lastName;
}
//function for set salary
void Employee::setSalary( int initSalary)
{
  if (initSalary < 0)
  {
     cout << "The salary amount can't be negative. Salary set as 0" << endl;
     salary = 0;
   }
    else
   {
     salary = initSalary;
   }
}
//function for get salary
int Employee::getSalary()
{
  return salary;
}
 
int main()
{
   Employee employee1 ( "Jack" , "Miller", 1000);
   Employee employee2 ( "Bill" , "Clinton", 2000);
 
   cout << "The new employees:\n" << employee1.getFirstName() << " " 
     << employee1.getLastName() << " " << employee1.getSalary() << endl;
   cout << employee2.getFirstName() << " " << employee2.getLastName() 
     << " " << employee2.getSalary() << endl << endl;
 
   cout << "Yearly salary of employees:\n" 
       << employee1.getFirstName() << " " << employee1.getLastName() << " " << (employee1.getSalary())*12 << endl;
   cout << employee2.getFirstName() << " " << employee2.getLastName() << " " << (employee2.getSalary())*12 << endl;
 
   cout << "Increased yearly salary of employees:\n"
        << employee1.getFirstName() << " " << employee1.getLastName() << " " << (employee1.getSalary())*12*1.1 << endl;
   cout << employee2.getFirstName() << " " << employee2.getLastName() << " " << (employee2.getSalary())*12*1.1 << endl;
 
   system("PAUSE");  
   return 0;
}

