/* 
 * File:   main.cpp
 * Author: Brennan
 *
 * Created on March 17, 2014, 9:33 AM
 * Purpose: Confirm the truth
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
    //Declare variables
    bool x=true, y=true;
    
    //Output headings
    cout << "X Y !X !Y X||Y X&&Y ";
    cout << "X^Y X^Y^X X^Y^Y !(X&&Y) ";
    cout << "!X||Y !(X||Y) !X&&!Y" << endl;
    //Output the first row of the truth table
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x||y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^(y^x)?'T':'F') << "     ";
    cout << (x^(y^y)?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "      ";
    cout << endl;
    //x true, y false
    y=false;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x||y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^(y^x)?'T':'F') << "     ";
    cout << (x^(y^y)?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "      ";
    cout << endl;
    //x false, y true
    x=false;
    y=true;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x||y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^(y^x)?'T':'F') << "     ";
    cout << (x^(y^y)?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "      ";
    cout << endl;
    //x,y false
    x=false;
    y=false;
    cout << (x?'T':'F') << " ";
    cout << (y?'T':'F') << "  ";
    cout << (!x?'T':'F') << "  ";
    cout << (!y?'T':'F') << "   ";
    cout << (x||y?'T':'F') << "   ";
    cout << (x&&y?'T':'F') << "    ";
    cout << (x^y?'T':'F') << "    ";
    cout << (x^(y^x)?'T':'F') << "     ";
    cout << (x^(y^y)?'T':'F') << "      ";
    cout << (!(x&&y)?'T':'F') << "      ";
    cout << (!x||y?'T':'F') << "      ";
    cout << (!(x||y)?'T':'F') << "      ";
    cout << (!x&&!y?'T':'F') << "      ";
    cout << endl;
    //Exit stage right
    return 0;
}

