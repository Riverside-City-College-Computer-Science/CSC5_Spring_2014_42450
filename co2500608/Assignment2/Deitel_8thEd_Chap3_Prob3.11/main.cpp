/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 *
 * Created on March 15, 2014, 5:53 PM
 */

//System Libraries
#include <string> // class GradeBook standard string class
#include "GradeBook.h" // include definition of class GradeBook

using namespace std;

// GradeBook class definition
class GradeBook
{
public:
   GradeBook( string, string ); // constructor
   void setCourseName( string ); // set the course name
   string getCourseName(); // get the course name
   void displayMessage(); // displays a welcome message
   void setCourseInstructorName( string ); // set the instructor name
   string getCourseInstructorName(); // get the instructor name
private:
   string courseName; // name for this GradeBook
   string courseInstructorName; // instructor name for this GradeBook
}; // end class GradeBook

#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;

// initialize courseName
GradeBook::GradeBook( string name, string insName )
{
   setCourseName( name ); // initialize courseName
   setCourseInstructorName( insName ); // initialize instructor name
} // end GradeBook constructor
 
// set the course name
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
   cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
   cout << "This course is presented by " << getCourseInstructorName() << "." << endl;
} // end function displayMessage

#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;
 
// function main begins program execution
int main() {

   // create two GradeBook objects
   GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
   GradeBook gradeBook2( "CS102 Data Structures in C++" );
 
   // display initial value of courseName for each GradeBook
   cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()<<"\n"<<endl;
   <<"gradeBook2 created for course: " << gradeBook2.getCourseName()<< endl;
 
   gradeBook1.displayMessage();
   gradeBook2.displayMessage();
 
   return 0; // indicate successful termination
} // end main
