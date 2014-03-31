/* 
 * File:   main.cpp
 * Author: Peter Morales
 * Created on February 24, 2014, 8:09 PM
 * Savitch Chap1 Prob6
 * Create a catalog of errors.
 */
//Entered #include < iostream>
//main.cpp:8:21: fatal error:  iostream: No such file or directory
//Entered #<include <iostream>
//main.cpp:9:2: error: invalid preprocessing directive #<
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes

//Execution Beings Here

//Omitted "int" from "main"
//No Error recorded

//Misspelled "Main"
///usr/src/debug/cygwin-1.7.28-2/winsup/cygwin/lib/libcmain.c:39:(.text.startup+0x7e): relocation truncated to fit: R_X86_64_PC32 against undefined symbol `WinMain'

//Omitted one parenthesis after main
//main.cpp:23:13: error: expected initializer before ‘argc’

//Omitted both parenthesis after main
//main.cpp:27:13: error: expected initializer before ‘argc’
int main (int argc, char** argv){
    int nmb1, nmb2, sum, product;
    
    //Entered cut << "Press return after entering a integer." <<endl;
    //main.cpp:33:5: error: ‘cut’ was not declared in this scope
    cout << "Press return after entering a integer." <<endl;
    cout << "Enter first integer:" <<endl;
    cin >> nmb1;
    cout << "Enter second integer:" <<endl;
    //Entered cin >> nmb2;
    //main.cpp:38:5: error: ‘cn’ was not declared in this scope
    cin >> nmb2;
    sum = nmb1 + nmb2;
    product = nmb1 * nmb2;
    
    cout << "If you add ";
    cout << nmb1;
    cout << " and ";
    cout << nmb2;
    cout << " then their sum is ";
    cout << sum <<endl;
    
    cout << "If you multiply ";
    cout << nmb1;
    cout << " and ";
    cout << nmb2;
    cout << " then their product is ";
    cout << product <<endl;
    cout << endl;
    cout << "This is the end of the program.\n";
    //Exit Stage Right
    return 0;
}
