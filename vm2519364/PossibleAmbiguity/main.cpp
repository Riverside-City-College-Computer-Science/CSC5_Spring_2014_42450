/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 21, 2014, 9:36 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void swap(int&, int&);
void swap(int*, int*);

//Execution Starts Here
int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables (4)
    int a=rand()%10;
    int b=rand()%10;
    int c=rand()%10;
    int d=rand()%10;
    //Print the variables out
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    cout<<"C="<<c<<endl;
    cout<<"D="<<d<<endl;
    //swap the variables
    swap(a, b);//Pass by reference
    swap (&c,&d);//Pass by address via pointers
     //Print the variables out
    cout<<"After Swaps"<<endl;
    cout<<"A="<<a<<endl;
    cout<<"B="<<b<<endl;
    cout<<"C="<<c<<endl;
    cout<<"D="<<d<<endl;
    
    return 0;
}

void swap(int& x, int& y){
    cout<<"Swapping using reference variables"<<endl;
    int temp=x;
    x=y;
    y=temp;
}

void swap(int *x, int *y){
    cout<<"Swapping using pointer variables"<<endl;
    int temp=*x;
    *x=*y;
    *y=temp;
}