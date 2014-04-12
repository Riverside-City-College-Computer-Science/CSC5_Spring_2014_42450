/* 
 * File:   main.cpp
 * Author: julio
 *
 * Created on March 26, 2014, 9:31 PM
 */

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) 
{

    int a, b, c;
    double d;
    char Continue;
    do
    {
        cout<<" Quadratic equation is form: ax^2 + bx+c = 0"<<endl;
        cout<<"x is variable whose value is to be calculated"<<endl;
        //input a
        cout<<" Enter value of a";
        cin>>a;
        //input b
        cout<<" Enter value of b";
        cin>>b;
        //input c
        cout<<" Enter value of c";
        cin>>c;
        //Calculate d
        d = (b*b - 4*a*c);
        if (d== 0)
        {
          //calculate equation and display
            cout<<"Root of the equation is: "<<-b/a<<endl;
        }
        else if (d> 0)
        {               
            cout<<"Root of equation are:  "
                    <<(((-1 *b) +sqrt(d))/(2*a));
            cout<<" and "<<(((-1 *b) -sqrt(d))/(2*a));
        }
        else
        {    
            //output roots
            cout<<"Complex Roots"<<endl;
            cout<<"Roots of equation"<<
                    (-1*b)/(2*a)<<" + i"<<sqrt(-1*d)<<endl;
            cout<<(-1*b)/(2*a)<<" - i"<<sqrt(-1*d)<<endl;
        }
        
        //input choice
        cout<<"if you want to repeat calculations press 'y' or 'Y'"<<endl;
        cin>>Continue;
        
        }
    while (Continue =='y' || Continue == 'Y');
    
    //Pause System
    system ("pause");
    
    
    
    
    
    return 0;
}

