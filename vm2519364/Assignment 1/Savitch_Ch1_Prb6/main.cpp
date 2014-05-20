/* 
 * File:   main.cpp
 * Author: Victor Medel
 * Created on February 26, 2014, 4:48 AM
 * Purpose: Create and document errors
 */

//System Libraries
#include <iostream>

//a. Error when there is an extra space between the < and the iostream file name.
    //main.cpp:9:21: fatal error:  iostream: No such file or directory

//b. Error when when the < symbol is omitted from the include directive.
    //main.cpp:9:10: error: #include expects "FILENAME" or 
    //<FILENAME> #include iostream>

    //main.cpp:25:5: error: ‘cout’ was not declared in this scope 
    
    //main.cpp:25:26: error: ‘endl’ was not declared in this scope cout
    
using namespace std;

//Global Constants

//Function Prototypes

 //Execution Begins Here!
  int main (int argc, char** argv) {

//c. Error when int is misspelled
     //main.cpp:31:2: error: ‘in’ does not name a type in main 
     //No Error when int is omitted 
     
//d. Error when the word main is misspelled
    //collect2: error: ld returned 1 exit status
      
//e. Error when omitting one and both of the ( ) symbols
     //main.cpp:31:12: error: expected initializer before ‘int’
          
//Output Hello World
    cout<<"Hello World"<<endl;
    
//f. Error when cout is misspelled
    //main.cpp:46:5: error: ‘cot’ was not declared in this scope
    
//f. Error when omitting one < from <<
    //main.cpp:46:25: error: invalid operands of types ‘const char [12]’ 
    //and ‘<unresolved overloaded function type>’ to binary ‘operator<<’
    
//Exit Stage Right
    return 0;
}
  
//f. Error when omitting }
  //main.cpp:56:13: error: expected ‘}’ at end of input  
