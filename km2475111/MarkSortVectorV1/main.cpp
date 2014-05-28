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
#include <vector>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(vector<int> &,int);
void prntAry(vector<int> &,int,int);
void swap1(int &, int &);
void swap2(int &, int &);
void lstSmal(vector<int> &,int,int);
void markSrt(vector<int> &,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    vector<int> array;
    //fill array
    filAray(array,SIZE);
    //print array
    prntAry(array,SIZE,10);
    //sort
    markSrt(array,SIZE);
    //print array
    prntAry(array,SIZE,10);
    //exit stage right!!
    return 0;
}
void filAray(vector<int> &a,int n){
    //fill with random 2-digit numbers
    for(int i=0;i<n;i++){
        a.push_back(rand()%90+10);
    }
}
void prntAry(vector<int> &a,int n,int perline){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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
void lstSmal(vector<int> &a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}
void markSrt(vector<int> &a,int n){
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