/* 
 * File:   main.cpp
 * Author: Administrator
 *
 * Created on March 14, 2014, 11:13 AM
 */

#include <iostream>

using namespace std;

//GradeBook class definition
class GradeBook
{
public:
    //function that displays a welcome message to the GradeBook user
    void displayMessage()
    {
        cout <<"welcome to the Grade Book"<<endl;
    }//end function displayMessage
}; //end class GradeBook

//Execution Begins Here
int main(int argc, char** argv) 
{
    
    GradeBook myGradeBook; //create a GradeBook object
    myGradeBook.displayMessage(); 

    //Exit stage right
    return 0;
}

