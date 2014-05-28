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
#include <algorithm>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(vector<int> &,int);
void prntAry(vector<int> &,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    vector<int> array;
    //Fill the array with 2 digit random numbers
    filAray(array,SIZE);
    //Print the array
    prntAry(array,10);
    //Sort
    sort(array.begin(),array.end());
    //Print the array
    prntAry(array,10);
    //Exit stage right
    return 0;
}

void prntAry(vector<int> &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size();i++){
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