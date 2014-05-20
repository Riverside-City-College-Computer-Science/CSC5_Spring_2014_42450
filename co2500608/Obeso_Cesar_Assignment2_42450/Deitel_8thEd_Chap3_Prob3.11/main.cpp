/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 15, 2014, 5:53 PM
 */

//System Libraries
#include <iostream>
#include <string> // class GradeBook uses C++ standard string class
using namespace std;
 
// GradeBook class definition
class GradeBook
{
private:
   string courseName; // course name for this GradeBook
   string courseInstructorName; // a) course instructor name for this GradeBook

public:
   GradeBook( string, string ); // constructor that initializes courseName and courseInstructorName
   void setCourseName( string ); // function that sets the course name
   string getCourseName(); // function that gets the course name
   void displayMessage(); // function that displays a welcome message
   void setCourseInstructorName( string ); // b) function that sets the course instructor name
   string getCourseInstructorName(); // b) function that get the course instructor name
}; // end class GradeBook
// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name, string insName )
{
   setCourseName( name ); // call set function to initialize courseName
   setCourseInstructorName( insName ); // c)
 
} // end GradeBook constructor
 
// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name in the object
} // end function setCourseName
 
// function to set the course instructor name
void GradeBook::setCourseInstructorName( string insName )
{
   courseInstructorName = insName; // store the course name in the object
} // end function setCourseName
 
// function to get the course name
string GradeBook::getCourseName()
{
   return courseName; // return object's courseName
} // end function getCourseName
 
// function to get the course instructor name
string GradeBook::getCourseInstructorName()
{
   return courseInstructorName; //
} // end function
 
// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
   // call getCourseName to get the courseName
   cout << "Welcome to the grade book for\n" << getCourseName()<< "!" << endl;
   cout << "This course is presented by " << getCourseInstructorName() << "." << endl;
} // end function displayMessage

// function main begins program execution
int main()
{
   // create two GradeBook objects
   GradeBook gradeBook1( "CSC5 Introduction to C++ Programming","Dr. Mark Leher" );
   GradeBook gradeBook2( "CSC5 Data Structures in C++","Dr. Mark Leher" );
 
   // display initial value of courseName for each GradeBook
   cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
      << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
      << endl;
 
   gradeBook1.displayMessage();
   gradeBook2.displayMessage();
 
   return 0; // indicate successful termination
} // end main
