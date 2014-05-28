/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 12, 2014, 7:59 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(vector<int>&,int);
void prntAry(vector<int>&,int,int);
void swap1(int &,int &);
void swap2(int &,int &);
void lstSmal(vector<int> &,int,int);
void markSrt(vector<int> &,int);


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    vector<int> array;
    //Fill the array with 2 digit random numbers
    filAray(array,SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Sort
    markSrt(array,SIZE);
    //Print the array
    prntAry(array,SIZE,10);
    //Exit stage right
    return 0;
}
void markSrt(vector<int> &a,int n){
    for(int i=0;i<n-1;i++){
        lstSmal(a,n,i);
    }
}

void lstSmal(vector<int> &a,int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap2(a[pos],a[i]);
    }
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

void prntAry(vector<int> &a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

//Fill with random 2 digit numbers
void filAray(vector<int> &a,int n){
    for(int i=0;i<n;i++){
        a.push_back(rand()%90+10);//[10,99]
    }
}

