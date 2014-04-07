/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on March 18, 2013, 1:32 PM
 * You finish the truth table
 * Assignment completed by Jonathan Adams - 42450
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Headings for the truth table
    
    cout<<setw(9)<<"X:"<<setw(9)<<"Y:"<<setw(9)<<"!X:"<<setw(9)<<"!Y:";
    cout<<setw(9)<<"X&&Y:"<<setw(9)<<"X||Y:"<<setw(9)<<"X^Y:"<<setw(9)<<"X^Y^X:";
    cout<<setw(9)<<"X^Y^Y:"<<setw(9)<<"!(X||Y):"<<setw(9)<<"!X&&!Y:";
    cout<<setw(9)<<"!(X&&Y):"<<setw(9)<<"!X||!Y:"<<endl;
    //output row 1
    bool x=true,y=true;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //continue for the first row
    //output the second row
    y=false;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //output the third row
    x=false,y=true;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //output the fourth row
    y=false;
    cout<<setw(9)<<(x?'T':'F');
    cout<<setw(9)<<(y?'T':'F');
    cout<<setw(9)<<(!x?'T':'F');
    cout<<setw(9)<<(!y?'T':'F');
    cout<<setw(9)<<(x&&y?'T':'F');
    cout<<setw(9)<<(x||y?'T':'F');
    cout<<setw(9)<<(x^y?'T':'F');
    cout<<setw(9)<<((x^y)^x?'T':'F');
    cout<<setw(9)<<((x^y)^y?'T':'F');
    cout<<setw(9)<<(!(x||y)?'T':'F'); 
    cout<<setw(9)<<((!x&&!y)?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<((!x||!y)?'T':'F')<<endl;
    //Verified earthquake on March AFB @ 2113 20140328
    //Exit Stage Right
    return 0;
}

