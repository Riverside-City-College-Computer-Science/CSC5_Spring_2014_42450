/* 
 * File:   main.cpp
 * Author: Frank Luna
 *
 * Created on February 25, 2014, 8:04 PM
 */

/*
 * 
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototype

//Execution Begins Here!

int main (int argc, char** argv) {
 
    //Outputs of the errors
    cout << "A. Put an extra space between the < and the iostream file name.\n";
    //Effect: 
    //main.cpp:13:21: fatal error:  iostream: No such file or directory
    
    cout << "B. Omit one of the < or > symbols in the include directive.\n";
    //Effect:
    //main.cpp:13:10: error: #include expects "FILENAME" or <FILENAME>
    
    cout << "C. Omit the int main().\n";
    //Effect:
    //main.cpp:22:2: error: expected unqualified-id before ‘{’ token
    
    cout << "D. Omit or misspell the word main\n";
    //Effect
    ///usr/src/debug/cygwin-1.7.28-2/winsup/cygwin/lib/libcmain.c:39:(.text.startup+0x7e): relocation truncated to fit: R_X86_64_PC32 against undefined symbol `WinMain'
    
    cout << "E. Omit one of the (); then omit both the ().\n";
    //Effect:
    //main.cpp:22:10: error: expected initializer before ‘int’
    //main.cpp:22:13: error: expected initializer before ‘argc’
    
    cout << "F. Continue in this fashion, deliberately misspelling identifiers\n  (cout, cin, and so on). Omit one or both of the << in the cout\n  statement; leave off the ending curly }.\n";  
    //Effect:
    //main.cpp:41:5: error: ‘cut’ was not declared in this scope
    //main.cpp:41:5: error: ‘cn’ was not declared in this scope
    //Cutting out the '/' from cout ran the program, but did not execute correctly
    //main.cpp:53:13: error: expected ‘}’ at end of input
    
    return 0;
}
