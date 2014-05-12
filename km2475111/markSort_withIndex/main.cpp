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
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int [],int [],int);
void prntAry(int [],int,int);
void prntAry(int [],int [],int,int);
void markSrt(int [],int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    int array[SIZE];
    int index[SIZE];
    //fill array
    filAray(array,index,SIZE);
    //print array
    cout<<"The original array and indexed array"
        <<endl<<endl;
    prntAry(array,SIZE,10);
    prntAry(index,SIZE,10);
    //sort
    markSrt(array,SIZE);
    //print array
    cout<<"The array, index, array with index"<<endl
        <<"Original Array after sorting - no change"
        <<endl<<endl;
    prntAry(array,SIZE,10);
    prntAry(index,SIZE,10);
    prntAry(array,index,SIZE,10);
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