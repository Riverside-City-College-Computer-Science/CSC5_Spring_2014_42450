/* 
 * File:   main.cpp
 * Author: Cesar Obeso
 * Created on March 31, 2013, 1:32 PM
 * You finish the truth table
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //Headings for the truth table
    cout<<" X  Y  !X  !Y  X&&Y X||Y  X^Y  X^Y^X  X^Y^X !(X||Y)  !X&&!Y  !(X&&Y)  !X||!Y"<<endl;
    //output row 1
    bool x=true,y=true;
    cout<<" "<<(x?'T':'F')<<"  "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"   "<<(!y?'T':'F')<<"  ";
    cout<<"  "<<(x&&y?'T':'F')<<"  "<<" "<<(x||y?'T':'F')<<"     "<<(x^y?'T':'F');
    cout<<"     "<<(x^y^x?'T':'F')<<"      "<<(x^y^x?'T':'F')<<"      ";
    cout<<(!(x||y)?'T':'F')<<"        "<<(!x&&!y?'T':'F')<<"        "<<(!(x&&y)?'T':'F');
    cout<<"       "<<(!x||!y?'T':'F')<<endl;
    
    //continue for the first row
    //output the second row
    y=false;
    cout<<" "<<(x?'T':'F')<<"  "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"   "<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"   "<<(x||y?'T':'F')<<"     "<<(x^y?'T':'F')<<"     "<<(x^y^x?'T':'F');
    cout<<"      "<<(x^y^x?'T':'F')<<"      "<<(!(x||y)?'T':'F')<<"        "<<(!x&&!y?'T':'F');
    cout<<"        "<<(!(x&&y)?'T':'F')<<"       "<<(!x||!y?'T':'F')<<endl;
    //output the third row
    x=false;
        cout<<" "<<(x?'T':'F')<<"  "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"   "<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"   "<<(x||y?'T':'F')<<"     "<<(x^y?'T':'F')<<"     "<<(x^y^x?'T':'F');
    cout<<"      "<<(x^y^x?'T':'F')<<"      "<<(!(x||y)?'T':'F')<<"        "<<(!x&&!y?'T':'F');
    cout<<"        "<<(!(x&&y)?'T':'F')<<"       "<<(!x||!y?'T':'F')<<endl;
    //output the fourth row
    x=false, y=false;
        cout<<" "<<(x?'T':'F')<<"  "<<(y?'T':'F')<<"   "<<(!x?'T':'F')<<"   "<<(!y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"   "<<(x||y?'T':'F')<<"     "<<(x^y?'T':'F')<<"     "<<(x^y^x?'T':'F');
    cout<<"      "<<(x^y^x?'T':'F')<<"      "<<(!(x||y)?'T':'F')<<"        "<<(!x&&!y?'T':'F');
    cout<<"        "<<(!(x&&y)?'T':'F')<<"       "<<(!x||!y?'T':'F')<<endl;

    //Exit stage right
    return 0;
}

