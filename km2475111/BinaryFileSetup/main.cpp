/* 
 * File:   main.cpp
 * Author: Kevin Mindreau
 *
 * Created on June 4, 2014, 9:34 AM
 * Purpose: Output binary file
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
using namespace std;

//User Library
#include "StudentGradeTableData.h"
//No Global Constants

//No Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Setup the File
    ofstream file;
    file.open("StudentGradeTableData.dat",
             ios::out|ios::binary);
    //Setup random number generator
    srand(static_cast<unsigned int>(time(0)));
    //fill file with 100 records
    int records=100;
    for(int row=0;row<records;row++){
        StudentGrade student;
        //random first name
        char rnd=rand()%70+48;
        string fn="FirstName";
        fn+=rnd;
        //random last name
        rnd=rand()%70+48;
        string ln="LastName";
        ln+=rnd;
        //random gpa
        float gpa=(rand()%200+200)/100.00f;//200-399 range
        //fill structure
        strcpy(student.first,fn.c_str());
        strcpy(student.last,ln.c_str());
        student.gpa=gpa;
        //send student information to a file
        file.write(reinterpret_cast<char *>(&student),
                   sizeof(student));
    }
    
    
    //Exit Stage Right!!
    return 0;
}

