/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 4, 2014, 10:33 AM
 * program ask the user to input three numbers and prints
 * the sum, average, product, smallest and largest
 * of these numbers.
 */

//System libraries
#include <iostream>

using namespace std;
//Global constants

//Function prototypes

//Execution starts here
int main(int argc, char** argv) {
    //Declare variables
    
    int number1, number2, number3;
    int sum, average, product, smallest, largest;
 
  cout << "Input three different numbers: "<<endl;
  cin  >> number1 >> number2 >> number3;
 
   sum = number1 + number2 + number3;
  average = (number1 + number2 + number3)/3;
  product = number1 * number2 * number3;
 
   cout << "Sum is " << sum << endl;
   cout << "Average is " << average << endl;
   cout << "Product is " << product << endl;
 
   if ((number1<number2)&&(number1<number3))
     cout << "Smallest is " << number1 << endl;
   if ((number2<number1)&&(number2<number3))
     cout << "Smallest is " << number2 << endl;
   if ((number3<number1)&&(number3<number2))
     cout << "Smallest is " << number3 << endl;
   if ((number1>number2)&&(number1>number3))
     cout << "Largest is " << number1 << endl;
   if ((number1<number2)&&(number3<number2))
     cout << "Largest is " << number2 << endl;
   if ((number3>number2)&&(number3>number1))
     cout << "Largest is " << number3 << endl;
   
   //Exit
    return 0;
}

