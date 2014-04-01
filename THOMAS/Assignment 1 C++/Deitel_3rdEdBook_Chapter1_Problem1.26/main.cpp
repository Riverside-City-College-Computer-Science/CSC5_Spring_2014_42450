/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem: Write a program that inputs three integers from the keyboard and prints the sum, 
 *          average, product, smallest and largest of these numbers. The screen dialogue 
 *          should appear as follows: Run Program
 *
 * Created on March 1, 2014, 9:05 PM
 */

#include <iostream>

using namespace std;

int main() {

   float num1, num2, num3; // Declaration 
    
    cout << "Type in three integers, and I will tell you their sum, avarage, and product.\n";
    cout << "Also, I will tell you what the smallest and largest of the three integers is.\n";
    cin >> num1 >> num2 >> num3;
    
    int sum, product, smallest, largest, avarage; // Second Declaration
    
    sum = num1 + num2 + num3; // Assignment
    product = num1*num2*num3; // Assignment
    avarage = (num1+num2+num3)/3;
    cout << "The sum of the three integers is\n" << sum<< endl;  //
    cout << "The product of the three integers is\n" << product << endl; // 
    cout << "The avarage of the three integers is\n" << avarage << endl;
    
    largest= num1;
    
        if ( num2> largest)
           largest= num2;
        if ( num3> largest)
           largest= num3;
        
                
    smallest= num1;
    
        if (num2 < smallest)
           smallest = num2;
        if ( num3 < smallest)       
           smallest= num3;
      
    cout << "The largest integer is\n" << largest << endl;
    cout << "The smallest integer is\n" << smallest << endl;
    
return 0;

    }
