/* 
 * File:   main.cpp
 * Author: Christopher kooyman
 * Created on March 26, 2014, 1:13 PM
 * book points
 */
//system libs
#include <iostream>

//global constants 

//system prototypes

//execution begins here!!
using namespace std;
int main(int argc, char** argv) {
    //declare variables  
    short books;
    cout<<"How many books did you purchase this month?"<<endl;
    cin>>books;
    //if else logic
    while(books<0){
        cout<<"you cannot purchase an negative amount"; 
        cout<<" of books, please enter a non negative number or a zero "<<endl;
        cin>>books;
    }
    
    if(books==0){
        cout<<"you have purchased "<<books<<" books, so you have earned 0 points"<<endl;
    }
    else if(books==1){
        cout<< "you have purchased "<<books<<" book, so you have earned 5 points"<<endl;
    }
    else if(books==2){
        cout<< "you have purchased "<<books<<" books, so you have earned 15 points"<<endl;
    }
    else if(books==3){
        cout<< "you have purchased "<<books<<" books, so you have earned 30 points"<<endl;
    }
    else{
        cout<< "you have purchased "<<books<<" books, so you have earned 60 points"<<endl;
    }
    return 0;
}

