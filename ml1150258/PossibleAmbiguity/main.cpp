/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 21, 2014, 9:34 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//No Global Constants

//Function Prototypes
void swap(int &,int &);
void swap(int *,int *);

int main(int argc, char **argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 4 variables
    int a=rand()%10;
    int b=rand()%10;
    int c=rand()%10;
    int d=rand()%10;
    //Print the variables out
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    cout<<"C="<<c<<endl;
    cout<<"D="<<d<<endl;
    //Swap the values
    swap(a,b);//Pass by reference
    swap(&c,&d);//Pass by address via pointers
    //Print after swap
    cout<<"After Swaps"<<endl;
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    cout<<"C="<<c<<endl;
    cout<<"D="<<d<<endl;
    //Exit stage right
    return 0;
}

void swap(int &x,int &y){
    cout<<"Swapping using reference variables"<<endl;
    int temp=x;
    x=y;
    y=temp;
}

void swap(int *x,int *y){
    cout<<"Swapping using pointer variables"<<endl;
    int temp=*x;
    *x=*y;
    *y=temp;
}

