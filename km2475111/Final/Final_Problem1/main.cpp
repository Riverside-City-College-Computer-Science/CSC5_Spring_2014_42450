/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 6, 2014, 6:17 PM
 * Purpose: CSC5 Final
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

//Global Constants

//Function Prototypes
unsigned short reverse(unsigned short);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    const int MAXVALU=65535;
    unsigned short num,revNum;
    //Ask for number
    cout<<"Enter a number: ";
    cin>>num;
    //check if number is bigger than short
    if(num>MAXVALU){
        cout<<"No Conversion Possible."<<endl;
    }else{
        //reverse number
        revNum=reverse(num);
        cout<<num<<" reversed is "<<revNum<<endl;
    }
    //Exit Stage Right!!
    return 0;
}
unsigned short reverse(unsigned short num){ 
    unsigned int rev=0;//use int to check range 
    for(;num;){ 
    rev*=10; 
    rev+=(num%10); 
    num/=10; 
    } 
    if(rev<=((unsigned short)-1)){//check range 
        return rev; 
    }else{
        return 0;
    }
}