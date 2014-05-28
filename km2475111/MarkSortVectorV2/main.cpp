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
#include <algorithm>
using namespace std;

//Global Constants

//Function Prototypes
void filAray(vector<int> &,int);
void prntAry(vector<int> &,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    srand(static_cast<unsigned int>(time(0)));
    const int SIZE=100;
    vector<int> array;
    //fill array
    filAray(array,SIZE);
    //print array
    prntAry(array,10);
    //sort
    sort(array.begin(),array.end());
    //print array
    prntAry(array,10);
    //exit stage right!!
    return 0;
}
void filAray(vector<int> &a,int n){
    //fill with random 2-digit numbers
    for(int i=0;i<n;i++){
        a.push_back(rand()%90+10);
    }
}
void prntAry(vector<int> &a,int perline){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        if(i%perline==perline-1){
            cout<<endl;
        }
    }
    cout<<endl;
}