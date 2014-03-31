/* 
 * File:   main.cpp
 * Author: BaronsVilla
 *
 * Created on March 29, 2014, 2:45 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    unsigned int short num1, num2, tot;
    cout<<"Input two numbers, pressing enter for each"<<endl;
    cin>>num1>>num2;
    tot=num1+num2;
    cout<<"Num1 divided by num2 is: "<<num1/num2<<endl;
    cout<<"With remainder: "<<num1%num2<<endl;
    cout<<"If num1 divided by 10: "<<num1/10<<endl;
    cout<<"With a remainder of: "<<num1%10<<endl;
    cout<<"The sum is: "<<tot<<endl;
    cout<<"The first digit of the new number is: "<<tot/10<<endl;

    return 0;
}

