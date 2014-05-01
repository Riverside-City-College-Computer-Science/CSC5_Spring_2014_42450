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
//Execution begins HERE
int main(int argc, char** argv) {
    //declare variables
    int endtest = 1475;
    int ctr = 0;
    int num = 0;
    int c_num;
    //loop until last number in sequence is found
    do{
        c_num = ++num;
        c_num = DivOut(c_num, 2);
        c_num = DivOut(c_num, 3);
        c_num = DivOut(c_num, 5);
        if(c_num == 1){
            ctr++;
            cout << num << endl;
        }
    }while(ctr < endtest);
    //output the number
    cout << "The " << endtest << "'th term is " << num << endl;
    return 0;
}
//Function definitions
int DivOut(int num1, int num2){
    while(num1 % num2 == 0) num1 /= num2;
    return num1;
}