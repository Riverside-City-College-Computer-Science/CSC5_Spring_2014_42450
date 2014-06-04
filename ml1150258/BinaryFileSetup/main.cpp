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

//Execution Begins Here
int main(int argc, char** argv) {
    //Setup the File
    ofstream file;
    file.open("StudentGradeTable.dat",
              ios::out|ios::binary);
    //Setup random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Fill the file with 100 records
    int records=100;
    for(int row=0;row<records;row++){
        StudentGrade student;
        //Random First Name
        char rnd=rand()%70+48;
        string fn="FirstName";
        fn+=rnd;
        //Random Last Name
        rnd=rand()%70+48;
        string ln="LastName";
        ln+=rnd;
        //Random GPA
        float gpa=(rand()%200+200)/100.0f;
        //Fill the student structure
        strcpy(student.first,fn.c_str());
        strcpy(student.last,ln.c_str());
        student.gpa=gpa;
        //Send the student information to a file
        file.write(reinterpret_cast<char *>(&student),
                   sizeof(student));
    }
    //Exit stage right, close file
    file.close();
    return 0;
}

