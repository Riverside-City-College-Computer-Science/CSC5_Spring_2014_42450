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
    for(int pos = 0; pos < n - 1; pos++)
    {
       for(int i = pos + 1; i < n; i++)
       {
           if(a[pos] > a[i])
           {
               int temp = a[pos];
               a[pos] = a[i];
               a[i] = temp;
           }
       }
    }
}

void prntAry(int a[], int n, int perLine)
{
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        if(i%perLine == (perLine - 1)) cout << endl;
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