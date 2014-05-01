/* 
 * File:   main.cpp
 * Author: Ezra Guinmapang
 *
 * Created on April 30, 2014, 8:02 AM
 */

//Libraries
#include <iostream>
using namespace std;

//Global variables and constants

//Function prototypes
int DivOut(int, int);
void DivOut2(int &, int);
//Execution begins HERE
int main(int argc, char** argv) {
    //Declare variables
    int num = 210;
    //remove all the 2's
    while(num % 2 == 0) num /= 2;
    DivOut2(num, 3);
    num = DivOut(num, 5);
    cout << num << endl;
    return 0;
}
//Function definitions
int DivOut(int num1, int num2){
    while(num1 % num2 == 0) num1 /= num2;
    return num1;
}
void DivOut2(int &num1, int num2){
    while(num1 % num2 == 0) num1 /= num2;
}