/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on May 21, 2014, 9:34 AM
 * Purpose: Check Swap
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global constants

//Function Prototypes
void swap(int &,int &);
void swap(int *, int *);
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //declare 4 variables
    int a=rand()%10,
        b=rand()%10,
        c=rand()%10,
        d=rand()%10;
    //print
    cout<<"Before swaps:"<<endl
        <<"A = "<<a<<endl
        <<"B = "<<b<<endl
        <<"C = "<<c<<endl
        <<"D = "<<d<<endl;
    //swap
    swap(a,b);//by ref
    swap(&c,&d);//by pointer
    //print
    cout<<"After swaps:"<<endl
        <<"A = "<<a<<endl
        <<"B = "<<b<<endl
        <<"C = "<<c<<endl
        <<"D = "<<d<<endl;
    return 0;
}
void swap(int &x,int &y){
    cout<<"swapping using reference variables"<<endl;
    int temp=x;
    x=y;
    y=temp;
}
void swap(int *x, int *y){
    cout<<"swapping using pointers"<<endl;
    int temp=*x;
    *x=*y;
    *y=temp;
}