/* 
 * File:   main.cpp
 * Author: Saldana, Thomas 
 *
 * Created on April 9, 2014, 8:47 AM
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins
int main(int argc, char** argv) {
    
    //Initialize the random number generator
    srand (static_cast<unsigned int> (time (0)));
    //Declare variables
    unsigned char sum, die1,die2;
    unsigned cnt2=0, cnt3=0,cnt4=0, cnt5=0, cnt6=0, cnt7=0, cnt8=0, cnt9=0, cnt10=0, cnt11=0, cnt12=0;
    unsigned loop=36000;
    
    for (int toss =1; toss<loop; toss++){
        //Determine the sum
        die1 = rand()%6+1;
                die2 = rand ()%6+1;
                sum = die1+die2;
        switch (sum){
            case 2:cnt2++;break;
            case 3:cnt3++;break;
            case 4:cnt4++;break;
               case 5:cnt5++;break;
                                                    case 6:cnt6++;break;
                                                              case 7:cnt7++;break;
                                                                        case 8:cnt8++;break;
                                                                                  case 9:cnt9++;break;
                                                                                            case 10:cnt10++;break;
                                                                                                      case 11:cnt11++;break;
                                                                                                                case 12:cnt12++;break;
            default : cout << "There is something wrong";
                                                                                                                         
                    
        }
    }
    
    //Output the result 
    cout << " 2was thrown " << cnt2<< "times"<< endl;
    cout << " 3was thrown " << cnt3<< "times"<< endl;
    cout << " 4was thrown " << cnt4<< "times"<< endl;
    cout << " 5was thrown " << cnt5<< "times"<< endl;
    cout << " 6was thrown " << cnt6<< "times"<< endl;
    cout << " 7was thrown " << cnt7<< "times"<< endl;
    cout << " 8was thrown " << cnt8<< "times"<< endl;
    cout << " 9was thrown " << cnt9<< "times"<< endl;
    cout << " 10was thrown " << cnt10<< "times"<< endl;
    cout << " 11was thrown " << cnt11<< "times"<< endl;
    cout << " 12was thrown " << cnt12<< "times"<< endl;

 
     

    
    
    
    
    
    
    
    
    
    
    return 0;
}

