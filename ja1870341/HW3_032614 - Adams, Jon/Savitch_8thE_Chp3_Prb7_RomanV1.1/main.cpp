/* 
 * File:   main.cpp
 * Author: Adams, Jonathan
 *
 * Created on March 22, 2014, 11:58 AM
 */
//System libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
//Global Constants
//Function Prototypes
//Execution
int main(int argc, char** argv) {
    unsigned int year;
    cout<<"Please input a four digit year"<<endl;
    cin>>year;
    //Declare and calculate how many 1000s
    //100s, 10s, and 1s:
    int n1000s, n100s, n10s, n1s; 
    n1000s=year/1000;
    year-=(n1000s*1000);
    n100s=year/100;
    year-=(n100s*100);
    n10s=year/10;
    year-=(n10s*10);
    n1s=year;
    //Output n1000s in Roman Numeral (RN)
    switch(n1000s){
        case 3:cout<<'M';
        case 2:cout<<'M';
        case 1:cout<<'M';
    }
    //Output n100s
    switch (n100s) {
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";
        case 2:cout<<"C";
        case 1:cout<<"C";
    }
    //Output 10s
    switch (n10s) {
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"X";
        case 2:cout<<"X";
        case 1:cout<<"X";
    }
    //Output 1s
     switch (n1s) {
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"III";break;
        case 2:cout<<"II";break;
        case 1:cout<<"I";break;
     }
    //Exit stage right
    return 0;
}

