/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on May 12, 2014, 7:59 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(int[], int);
void prntAry(int[], int, int);
void swap1(int&, int&);
void swap2(int&, int&);
void lstSmal(int [], int, int);
void markSrt(int[], int);

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare Variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    int array[SIZE];
    //Fill the array with 2 digit random numbers
    filAray(array, SIZE);
    //Print the array
    prntAry(array, SIZE, 10);  
    cout<<"\n";
        //Find the smallest one in the list and swap
        //lstSmal(array, SIZE, 0);
        //lstSmal(array, SIZE, 1);
        //lstSmal(array, SIZE, 2);
        //lstSmal(array, SIZE, 3);
    //Using Mark Sort
    markSrt(array, SIZE);
    //Print the array
    prntAry(array, SIZE, 10);   
    //Find the smallest one in the list and swap
    //Exit Stage Right
    return 0;
}
//Fill with random 2 digit numbers
void filAray(int a[], int n){
    for (int i=0; i<n; i++){
        a[i]=rand()%90+10;//[10,99]
    }
}
//Print array
void prntAry(int a[], int n, int perLine){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void swap1(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}

void swap2(int& a, int& b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void lstSmal(int a[], int n, int pos){
    for (int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}
void markSrt(int a[], int n){
    for(int i=0;i<n-1;i++){
        lstSmal(a, n, i);
    }
}