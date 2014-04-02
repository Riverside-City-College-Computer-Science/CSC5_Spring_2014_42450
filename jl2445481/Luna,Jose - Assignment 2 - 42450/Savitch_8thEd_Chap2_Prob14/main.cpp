/*
 * File:   main.cpp
 * Author: Jose Luna
 *
 * Created on March 5, 2014, 10:12 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//Global Constants

//Function Prototypes

int main(int argc, char** argv) {
    string lasnam,yournam,food,num,adj,color,animal;
    cout << "Enter your Instructors last name, your name, a food, a number"
            <<"an adjective, a color, and an animal"<<endl;
    cin >> lasnam>>yournam>>food>>num>>adj>>color>>animal;
    cout<< "Dear Instructor "<<lasnam<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time."
    <<"First, I ate a rotten "<<food<<" ,which made me turn "
    <<color<<" extremely ill. I came down with a fever of "<<num<<" .Next, my"
    <<adj<<" pet "<<animal<< " must have smelled the remains of the "<<food
    <<"on my homework, because he ate it. I am currently rewriting my"
    <<" homework and hope you will accept it late."
    <<"Sincerely, "<<yournam;
    return 0;
            
}