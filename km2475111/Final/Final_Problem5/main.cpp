/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 6, 2014, 9:33 PM
 * Purpose: CSC5 Final
 */

/*
Problem #5  (All Kinds of Sorting)
Sort a 10x15 array of characters.  Largest located
at index [0][0-14] and smallest at index [9][0-14].  
Create a procedure that passes the array to a print routine, 
then a procedure that sorts the array and returns the sorted array 
to the original procedure, and finish by using the same print routine.  
Fill the array with


Lcekoeddhoffbmb
Lkcmggjcdhhglif
Cgldjhcekjigcdd
Cgldjhcekjigcdn
Bffmdbkcenlafjk
Fggdijijegfblln
Jjlncnimjldfedj
Amliglfohajcdmz
Balgfcaelhfkgeb
Kmlhmhcddfoeild


Note:  This is a character array but the sorting is 
done as if there are 10 strings with each string having 15 characters.  
The output would be


Lkcmggjcdhhglif
Lcekoeddhoffbmb
Kmlhmhcddfoeild
Jjlncnimjldfedj
Fggdijijegfblln
Cgldjhcekjigcdn
Cgldjhcekjigcdd
Bffmdbkcenlafjk
Balgfcaelhfkgeb
Amliglfohajcdmz

Full credit will be given if a file is used to read in the array.
Name the file input.dat

*/

//System Libraries
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <fstream>
#include <iomanip>
using namespace std;

//Global constants
const int COLS=15;//for 10x15 array
//Function Prototypes
void filAray(char [][COLS],int,int,fstream &);
void prntAry(char [][COLS],int,int);
void prntAry(vector<string>,int);
void sort(char [][COLS],int,int,vector<string> &);
//Execution Begins Here!
int main(int argc, char** argv) {
    //open file input.dat
    fstream file;
    file.open("input.dat");
    //array
    //const int SIZE=10,COLS=15;
    const int SIZE=10;
    char array[SIZE][COLS];
    vector<string> sortAry;
    //fill array
    filAray(array,SIZE,COLS,file);
    //print before sort
    cout<<"Before sort:"<<endl;
    prntAry(array,SIZE,COLS);
    //sort
    sort(array,SIZE,COLS,sortAry);
    //print array after sort
    cout<<"After Sort:"<<endl;
    prntAry(sortAry,SIZE);
    //exit stage right!!
    file.close();
    return 0;
}
void filAray(char a[][COLS],int r,int c,fstream &file){
    //fill array
    for(int rowPos=0;rowPos<r;rowPos++){
        for(int colPos=0;colPos<c;colPos++){
            a[rowPos][colPos]=file.get();//grabs char from file
        }
    }
}
void prntAry(char a[][COLS],int r,int c){
    //print all the data in the array
    //initialize 2D array
    for(int rowPos=0;rowPos<r;rowPos++){
        for(int colPos=0;colPos<c;colPos++){
            cout<<a[rowPos][colPos];
        }
        cout<<endl;
    }
}
void prntAry(vector<string> a,int r){
    for(int i=0;i<r;i++){
        cout<<a[i]<<endl;
    }
}
void sort(char a[][COLS],int r,int c,vector<string> &sorted){
    //convert array to strings for sort
    string arr[r];
    int rowPos=0;
    bool SENTINEL=true;
    //concatenate char into str for sort
    while(SENTINEL){
        for(int colPos=0;colPos<c;colPos++){
            arr[rowPos].push_back(a[rowPos][colPos]);
        }
        rowPos++;
        if(rowPos>=10){
            SENTINEL=false;
        }
    }
    //compare strings and sort
    for(int j=0;j<sizeof(arr);j++){ 
        for(int i=0;i<r;i++){
            if(arr[i]<arr[i+1]){
                string temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
            }
        }
    }
    //return sorted str(?)
    for(int i=0;i<r;i++){
        sorted.push_back(arr[i]);
    }
    cout<<endl;
}