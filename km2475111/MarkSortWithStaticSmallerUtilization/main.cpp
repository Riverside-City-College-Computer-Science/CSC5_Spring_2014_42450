/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 28, 2014, 8:00 AM
 * Purpose: Mark sort with added dynamic memory
 */

//System Libraries
#include <iostream>
#include <cstdlib>
//#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
int *filAray(int);
void prntAry(int *,int,int);
void swap1(int &, int &);
void swap2(int &, int &);
void lstSmal(int *,int,int);
void markSrt(int *,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    //declare a pointer for future dynamic array
    int *array;
    //fill array
    array=filAray(SIZE);
    //print array
    prntAry(array,SIZE,10);
    //sort
    markSrt(array,SIZE);
    //print array
    prntAry(array,SIZE,10);
    //destroy the array
    delete []array;
    //exit stage right!!
    return 0;
}
int *filAray(int n){
    //fill with random 2-digit numbers
    int *a=new int[n];//dynamic allocation
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;
    }
    return a;
}
void prntAry(int *a,int n,int perline){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if(i%perline==perline-1){
            cout<<endl;
        }
    }
    cout<<endl;
}
void swap1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swap2(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
void lstSmal(int *a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(*(a+pos)>a[i])swap1(*(a+pos),a[i]);
    }
}
void markSrt(int *a,int n){
    //loop position
    for(int pos=0;pos<n-1;pos++){
        //swap and sort
        for(int i=pos+1;i<n;i++){
            if(*(a+pos)>*(a+i)){
                int temp=*(a+pos);
                *(a+pos)=*(a+i);
                *(a+i)=temp;
            }
        }
    }
}