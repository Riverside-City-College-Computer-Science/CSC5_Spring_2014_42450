/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 31, 2013, 1:32 PM
 * You finish the truth table
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Headings for the truth table
    cout<<" X  Y  !X  !Y  X&&Y X||Y  X^Y  X^Y^X  X^Y^X !(X||Y)  !X&&!Y  !(X&&Y)  !X||!Y"<<endl;
    //output row 1
    bool x=true,y=true;
    cout<<setw(2)<<(x?'T':'F')<<setw(3)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(4)<<(!y?'T':'F')<<setw(5);
    cout<<(x&&y?'T':'F')<<setw(5)<<(x||y?'T':'F')<<setw(5)<<(x^y?'T':'F')<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F')<<setw(7)<<(!(x||y)?'T':'F')<<setw(9)<<(!x&&!y?'T':'F')<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(8)<<(!x||!y?'T':'F')<<endl;
    
    //output the second row
    x=true, y=false;
        cout<<setw(2)<<(x?'T':'F')<<setw(3)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(4)<<(!y?'T':'F')<<setw(5);
    cout<<(x&&y?'T':'F')<<setw(5)<<(x||y?'T':'F')<<setw(5)<<(x^y?'T':'F')<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F')<<setw(7)<<(!(x||y)?'T':'F')<<setw(9)<<(!x&&!y?'T':'F')<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(8)<<(!x||!y?'T':'F')<<endl;

    //output the third row
    x=false, y=true;
        cout<<setw(2)<<(x?'T':'F')<<setw(3)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(4)<<(!y?'T':'F')<<setw(5);
    cout<<(x&&y?'T':'F')<<setw(5)<<(x||y?'T':'F')<<setw(5)<<(x^y?'T':'F')<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F')<<setw(7)<<(!(x||y)?'T':'F')<<setw(9)<<(!x&&!y?'T':'F')<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(8)<<(!x||!y?'T':'F')<<endl;

    //output the fourth row
    x=false, y=false;
        cout<<setw(2)<<(x?'T':'F')<<setw(3)<<(y?'T':'F')<<setw(4)<<(!x?'T':'F')<<setw(4)<<(!y?'T':'F')<<setw(5);
    cout<<(x&&y?'T':'F')<<setw(5)<<(x||y?'T':'F')<<setw(5)<<(x^y?'T':'F')<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F')<<setw(7)<<(!(x||y)?'T':'F')<<setw(9)<<(!x&&!y?'T':'F')<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(8)<<(!x||!y?'T':'F')<<endl;


    //Exit stage right
    return 0;
}

