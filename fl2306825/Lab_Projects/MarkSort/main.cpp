/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on May 12, 2014, 7:59 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Global Constant

//Function prototype
void filAray(int [], int);
void prntAry(int [], int, int);
void swap1(int &, int &);
void swap2(int &, int &);
void lstSml(int [], int, int);
void mrkSrt(int [], int);

//Execution Ends here!!
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE = 100;
    int array[SIZE];
    
    filAray(array, SIZE);
    
    prntAry(array,SIZE,10);
    
    mrkSrt(array, SIZE);
    
    prntAry(array,SIZE,10);

    return 0;
}

void mrkSrt(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        lstSml(a,n,i);
    }
}

void lstSml(int a[], int n, int pos)
{
    for(int i = pos + 1; i < n; i++)
    {
        if(a[pos] > a[i]) swap1(a[pos],a[i]);
        if(a[pos] > a[i]) swap2(a[pos],a[i]);
    }
}

void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}

void prntAry(int a[], int n, int perLine)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        if(i%perLine ==(perLine - 1)) cout << endl;
    }
    cout << endl;
}

//Fill with random 2 digit numbers
void filAray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%90 + 10;
    }
}