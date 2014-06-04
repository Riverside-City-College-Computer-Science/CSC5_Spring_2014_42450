/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 4, 2014, 9:34 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>
#include <ctime>
using namespace std;

//User Library
#include "StudentGradeTableData.h"

//No Global Constants

//No Function Prototypes
void readStu(fstream &,StudentGrade &,int);
void wrtStu(fstream &,StudentGrade &,int);
void prntStu(const StudentGrade &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Setup the File
    fstream file;
    file.open("StudentGradeTable.dat",
              ios::in|ios::out|ios::binary);
    //Setup random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Display then change a record
    StudentGrade test;
    int record=rand()%100;
    readStu(file,test,record);
    cout<<"Student Record = "<<record<<endl;
    prntStu(test);
    strcpy(test.first,"Mark");
    strcpy(test.last,"Lehr");
    test.gpa=4.00;
    wrtStu(file,test,record);
    readStu(file,test,record);
    prntStu(test);
    //Exit stage right, close file
    file.close();
    return 0;
}

void wrtStu(fstream &file ,StudentGrade &stu,int rec){
    int size=sizeof(stu);
    file.seekp(rec*size,ios::beg);
    file.write(reinterpret_cast<char *>(&stu),
                   size);
}

void readStu(fstream &file,StudentGrade &stu,int rec){
    int size=sizeof(stu);
    file.seekg(rec*size,ios::beg);
    file.read(reinterpret_cast<char *>(&stu),
                   size);
}

void prntStu(const StudentGrade &a){
    cout<<a.first<<" "<<a.last
        <<" received a grade score of "<<a.gpa<<endl; 
}