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
//None

//Execution begins here!
int main(int argc, char** argv) {
    ofstream file;
    file.open("StudentGradeTable.dat",ios::out|ios::binary);

    //Setup random
    srand(static_cast<unsigned int>(time(0)));
    
    //Fill file with data
    int records=100;
    for(int row=0;row<records;row++) {
        StudentGrade student;
        char rnd = rand()%70+48;
        string fn="FirstName";
        fn+=rnd;
        //Random last name
        rnd=rand()%70+48;
        string ln="LastName";
        ln+=rnd;
        //Random GPA
        float gpa=(rand()%200+200)/100.0f;
        //Fill Student structure
        strcpy(student.first,fn.c_str());
        strcpy(student.last,ln.c_str());
        student.gpa=gpa;
        //Send the student information to a file
        file.write(reinterpret_cast<char *>(&student),sizeof(student));
    }
    
    //Exit stage right
    file.close();
    return 0;
}

