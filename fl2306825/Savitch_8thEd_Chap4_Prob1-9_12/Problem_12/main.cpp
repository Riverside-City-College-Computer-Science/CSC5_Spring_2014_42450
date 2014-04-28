/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on April 11, 2014, 3:58 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function prototype
float max(float num1, float num2, float num3);
float max(float num1, float num2);

//Execution Starts here!!
int main(int argc, char** argv) {
    
    //Declare variables
    float a, b, num1, num2, num3;
    
    cout << "Hello, please enter three numbers\n";
    cin >> num1 >> num2 >> num3;
    
    a = max(num1, num2, num3);
    
    cout << "The largest number is " << a << endl;
    cout << "\nNow enter two numbers only\n";
    cin >> num1 >> num2;
    
    b = max(num1, num2);
    
    cout << "The largest number is " << b << endl;
    
    return 0;
}

float max(float num1, float num2, float num3)
{
    float n=num1;
    if (num2>n)
    {
        n=num2;
    }
    if (num3>n)
    {
        n=num3;
    }
    return (n);
}
float max(float num1, float num2)
{
    float n = num1;
    if(num2 > n)
    {
        n = num2;
    }
}
