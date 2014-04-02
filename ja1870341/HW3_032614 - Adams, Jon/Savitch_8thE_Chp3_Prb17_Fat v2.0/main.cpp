#include <iostream>
#include <cmath>
#include <iomanip>
//System libraries
using namespace std;

//NOTE: Purposely avoiding loops and if statements. 

//Global Constants
//Function Prototypes
//Execution starts here
int main(int argc, char** argv) {
    char work;
    unsigned int weight, height, age;
    float male, female;
    cout<<"Please input the person's weight in pounds, height "<<endl;
    cout<<"in inches and age in years"<<endl;
    cout<<"NOTE: Round all numbers to the nearest whole number"<<endl;
    cin>>weight>>height>>age;
    cout<<"Now enter the corresponding letter for persons activity:"<<endl;
    cout<<"A for a sedentary person"<<endl;
    cout<<"B for a /""Somewhat Active/"" person"<<endl;
    cout<<"C for an active person (exercise 3-4 times a week)"<<endl;
    cout<<"D for highly active (exercise 6 or more days a week"<<endl;
    cin>>work;
    cout<<fixed<<setprecision(1)<<showpoint;
    //Female calculations and output
    female=655+(4.3*weight)+(4.7*height)-(4.7*age);
    //Male calculations and output
    male=66+(6.3*weight)+(12.9*height)-(6.8*age);
    if (work=='A'||'a')
        male=male+male*(.2),
                female=female+female*(.2);
    else if (work=='B'||'b')
        male=male+male*(.3),
                female=female+female*(.3);
    else if (work=='C'||'c')
        male=male+male*(.4),
                female=female+female*(.4);
    else if  (work=='D'||'d')
        male=male+male*(.5),
                female=female+female*(.5);
    else
            //Why isn't this error message displaying
        cout<<"You entered an invalid selection for activity"<<endl;
    //output 
    cout<<"If person is female they will need ";
    cout<<female;
    cout<<" calories a day to maintain their body weight."<<endl;
    cout<<"That's "<<female/230<<" candy bars."<<endl;
    cout<<"If person is male they will need ";
    cout<<male;
    cout<<" calories a day to maintain their body weight."<<endl;
    cout<<"That's "<<male/230<<" candy bars.";
    //Exit Stage Right
    return 0;
}