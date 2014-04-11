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

    int num1, num2, num3; // Declaration 
    
    cout << "Type in three integers, and I will tell you their sum, avarage, product.\n";
    cout << "Also, I will tell you what the smallest and largest of the integers is.\n";
    cin >> num1 >> num2 >> num3;
    
    int sum, product, smallest, largest; // Second Declaration
    
    sum = num1 + num2 + num3;
    
    cout << "The sum of the numbers is\n" << sum<< endl; 
    
    
            return 0;
}

