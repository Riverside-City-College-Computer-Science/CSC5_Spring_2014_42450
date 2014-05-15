/* 
 * File:   main.cpp
 * Author: Kevin R. Mindreau
 *
 * Created on May 7, 2014, 9:43 AM
 * Purpose: build a function called delete_repeats
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void delete_repeats(char[],int&);
//Execution Begins Here!!
int main(int argc, char** argv) {
    //declare variables
    //hard-coding array for problem 3
    int size=5;
    char array[]={'a','b','c','c','d'};
    //output arrays
    cout<<"Original Array: ";
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    delete_repeats(array,size);
    cout<<"Array after delete_repeats: ";
    for(int j=0;j<size;j++){
        cout<<array[j]<<" ";
    }
    cout<<endl;
    //Exit Stage Right!!
    return 0;
}
//function definition for delete_repeats
void delete_repeats(char arr[],int& size){
    //declare variables
    int num=size;
    int start;
    //begin loop
    while(start!=num){
        char temp=arr[start];
        for(int i=start+1;i<=num;i++){
            if(temp==arr[i]){
                for(int j=i;j<num;j++){
                    arr[j]=arr[j+1];
                }
                num--;
                start--;
            }
        }
        start++;
    }
    size=num;
}