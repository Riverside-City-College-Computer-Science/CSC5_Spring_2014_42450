/* 
 * File:   main.cpp
 * Author: Brennan Murphy
 *
 * Created on June 4, 2014, 9:31 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

//User Libraries
#include "StudentGradeTableData.h"

//Global Constants
//None

//Function Prototypes
void readStu(fstream &, StudentGrade &, int);
void wrtStu(fstream &, StudentGrade &, int);
void prntStu(const StudentGrade &);

//Execution begins here!
int main(int argc, char** argv) {
    fstream file;
    file.open("StudentGradeTable.dat",ios::in|ios::out|ios::binary);

    //Setup random
    srand(static_cast<unsigned int>(time(0)));
    
    //Display then change a record
    StudentGrade test;
    int record=rand()%100;
    readStu(file,test,record);
    cout << "Student Record = "<<record << endl;
    prntStu(test);
    strcpy(test.first,"Brennan");
    strcpy(test.last,"Murphy");
    test.gpa = 4.00;
    wrtStu(file,test,record);
    readStu(file,test,record);
    prntStu(test);
    
    //Exit stage right
    file.close();
    return 0;
}

void readStu(fstream &file, StudentGrade &stu, int rec) {
    int size=sizeof(stu);
    file.seekg(rec*size,ios::beg);
    file.read(reinterpret_cast<char *>(&stu),
            size);
}

void wrtStu(fstream &file, StudentGrade &stu, int rec) {
    int size=sizeof(stu);
    file.seekp(rec*size,ios::beg);
    file.write(reinterpret_cast<char *>(&stu),
            size);
}

void prntStu(const StudentGrade &a) {
    cout << a.first << " " << a.last
            << " received a score of " << a.gpa << endl;
}