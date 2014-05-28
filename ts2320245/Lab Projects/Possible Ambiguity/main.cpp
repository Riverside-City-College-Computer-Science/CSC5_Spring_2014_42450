/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 21, 2014, 9:35 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;
//Function Prototypes
void swap(int &, int &);
void swap(int *, int *);
int main() {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
//Declare 4 variable
    int a=rand()%10;
    int b=rand()%10;
    int c=rand()%10;
    int d=rand()%10;
    //Print the variables
    cout << "A="<< a<< endl;
    cout << "B="<< b<< endl;
    cout << "C="<< c<< endl;
    cout << "D="<< d<< endl;
    swap(a,b);
    swap(&c, &d);
    //Print after swap;
    cout << "After Swaps" << endl;
     cout << "A="<< a  << endl;
    cout << "B=" << b  << endl;
    cout << "C=" << c  << endl;
    cout << "D=" << d  << endl;
    
        

    return 0;
}

void swap(int &x, int&y){
    cout << "Swaping using reference variables"<< endl;
    int temp = x;
    x=y;
    y=temp;
}

void swap(int *x, int *y){
    cout << "Swaping using pointer variables."<< endl;
    int temp = *x;
    *x=*y;
    *y = temp;
    
}