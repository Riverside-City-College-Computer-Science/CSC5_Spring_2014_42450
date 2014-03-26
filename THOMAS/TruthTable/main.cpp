/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Purpose: Confirm the Truth
 *
 * Created on March 17, 2014, 9:33 AM
 */
//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
 //Declaration of Variables
    bool x=true;
    bool y=true;
    
    //Output the headings
    cout << "X Y !X !Y X||Y  X&&Y ";
           
    cout << "X^Y X^Y^X X^Y^Y !(X&&Y) ";
            
    cout << "!X||Y !(X||Y) !X&&Y " << endl;
    
    //Output the first row of the truth table
    cout << (x ? 'T' : 'F' )<< " ";
    cout << (y ? 'T' : 'F') << " ";
    
      cout << (!x ? 'T' : 'F' )<< "  ";
    cout << (!y ? 'T' : 'F') << "  ";
    
          cout << (x||y ? 'T' : 'F' )<< "  ";
    cout << (x&&y ? 'T' : 'F') << "   ";
    
    
    
     
    
    
    

    
    cout << (x? 'T': 'F')<< "  ";
    cout << (y? 'T': 'F') << "  ";
    cout << ( !x? 'T': 'F')<< "  ";
    cout << (!y ? 'T': 'F')<< "  ";
    cout << ( x&&y? 'T': 'F') << "  ";
    cout << ( x||y ? 'T' : 'F') << "  ";
    cout << endl;
            
            
            //Output the third row
            y=true;
    x=false;
    //Output the third row
    y= false;
    // Exit stage right. 
    
    
    
    
    
    
    
    return 0;
}

