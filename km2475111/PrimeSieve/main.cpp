/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 12, 2014, 7:58 AM
 * Purpose: Mark sort
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int [],int);
void filAray(int [], int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void markSrt(int [],int);
void prime(int [],int);
void prntPrm(int [],int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=1000;
    int array[SIZE];
    int index[SIZE];
    //fill array
    filAray(array,SIZE);
    //print array
    markSrt(array,SIZE);
    prime(array,SIZE);
    //print array
    prntPrm(array,SIZE,10);
    //exit stage right!!
    return 0;
}
void filAray(int a[],int indx[],int n){
    //fill with random 2-digit numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
        indx[i]=i;
    }
}
void prntAry(int a[],int n,int perline){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perline==perline-1){
            cout<<endl;
        }
    }
    cout<<endl;
}
void prntAry(int a[],int indx[],int n,int perline){
    for(int i=0;i<n;i++){
        cout<<a[indx[i]]<<" ";
        if(i%perline==perline-1){
            cout<<endl;
        }
    }
    cout<<endl;
}
void markSrt(int a[],int n){
    //loop position
    for(int pos=0;pos<n-1;pos++){
        //swap and sort
        for(int i=pos+1;i<n;i++){
            if(a[pos]>a[i]){
                int temp=a[pos];
                a[pos]=a[i];
                a[i]=temp;
            }
        }
    }
}
void prime(int a[],int n){
    for(int pos=2;pos<sqrt(n);pos++){
        for(int i=2*pos;i<n;i+=pos){
            a[i]=0;
        }
    }
}
void prntPrm(int a[],int n,int perLine){
    int cnt=0;
    cout<<endl;
    for(int i=2;i<n;i++){
        if(a[i]!=0){
            cout<<setw(5)<<a[i];
            if(cnt++%perLine==(perLine-1))cout<<endl;
        }
    }
    cout<<endl<<endl
        <<"There are "<<cnt<<" Primes between "
        <<"2 and "<<n<<endl
        <<"The percentage of prime = "
        <<100.0f*cnt/(n-1)<<"%"<<endl;
}
void filAray(int a[],int n){
    //fill with random 2-digit numbers
    for(int i=0;i<n;i++){
        a[i]=rand()%n+1;
    }
}