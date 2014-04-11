/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on April 11, 2014, 12:21 AM
 */

//System Libraries
//Take out if not needed
#include <cstdlib>//Random function srand
#include <iostream>//Standard input/output
#include <fstream>//File input/output
#include <ctime>//Time for random and program
#include <iomanip>//Formatting
#include <cmath>//Math functions
using namespace std;

//Global Constants
//If not a Global Constant get an F

//Function Prototypes

//Execution Begins Here!!!
int main(int argc, char** argv) {
    //Declare menu variables
    int choice;
    bool exitMnu=false;
    //Loop until exit
    do{
        //Output Menu
        cout<<"Choose from the menu"<<endl;
        cout<<"1.Deitel_3rdEdBook_Chap3, Prob 2.38 "<<endl;
        cout<<"2.Deitel_3rdEdBook_Chap3,  Prob 2.19 "<<endl;
        cout<<"3.Deitel_3rdEdBook_ Chap3,  Prob 2.22 "<<endl;
        cout<<"4.Deitel_3rdEdBook_ Chap3,  Prob 2.50"<<endl;
        cout<<"5.Deitel_3rdEdBook_ Chap3,  Prob 2.16 "<<endl;
        cout<<"6.Gaddis_7thEdBook_Chap5,  Prob 3 "<<endl;
        cout<<"7.Gaddis_7thEdBook_Chap5, Prob 1"<<endl;
        cout<<"8. Gaddis_7thEdBook_Chap5,  Prob 21 "<<endl;
        cout<<"9.Gaddis_7thEdBook_Chap5, Prob 23 "<<endl;
        cout<<"10.Savitch_7thEdBook_Chap3,  Prob 10 "<<endl;
        cout<<"Anything Else Exit"<<endl;
        //Input your choice
        cin>>choice;
        //Solve the problem chosen
        switch(choice){
            case 1:{    //factorial problem
               
    
                        int num, fact=1, i=0, counter;

                        cout << "Enter a number, and the computer will tell you that numbers factorial.\n";
                        cin >> num;

                        if ( num < 0){
                            cout << "Please Enter a Positive number.\n";
                            cin >> num;
                        }        

                        while (i++ < num){
                           fact *=i == 0 ? 1 : i;
                        }
                          cout << "The factorial of " << num << " is " << fact ;  




                        cout <<"\n\n\n\n";
                        break;
            }
            case 2:{  /* 
                     * File:   main.cpp
                     * Author: Saldana, Thomas
                       Problem2.19: Develop a C++ program that will determine the gross pay for each of several employees. The company 
                     *              pays "straight-time" for the first 40 hours worked by each employee and pays "time-and-a-half" for 
                     *              all hours worked in excess of 40 hours. You are given a list of the employees of the company, the number 
                     *              of hours each employee worked last week and the hourly rate of each employee. Your program should input this
                     *              information for each employee and should determine and display the employee's gross pay. 
*/
                        float hrs, rate, salary;
    
                        cout << "How many hours did you work this week?(Enter -1 to end program)\n"
                             << "Note: If you work more than 40 hrs, you will be payed time-and-a-half for any hrs after 40.\n";
                        cin >> hrs;

                        while ( hrs!=-1){

                        if ( hrs > 40 ){

                                cout << "What is your hourly rate?\n";
                                cin >> rate;
                                salary = 40.0 *rate + (hrs -40.0)* rate * 1.5;
                                cout<< "Your salary is $"<< salary << "\n\n\n";
                        }              
                        if (hrs <= 40){                   
                            cout << "What is your hourly rate?\n";
                            cin >> rate;
                            salary = rate*hrs;
                            cout<< "Your salary is $"<< salary << "\n\n\n";
                        }

                             cout << "How many hours did you work this week?(Enter -1 to end program)\n";
                            cin >> hrs;


                        }
                        //Exit Stage Right
                        cout<<"\n\n\n\n";
                break;
            }
            case 3:{
                            /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 2.22: Find the two largest values among the 10 numbers. Note: you must input each number only once. 
                             *
                             * Created on April 10, 2014, 3:41 PM
                             */
                            int lrgstnum, num2,x=0,secondlrgst=0    ;// Declaration of variables
                            //ask user to input integers
                            cout << "This program first asks you to input 10 integers. It then tells you what largest and second largest number is.\n";
                            cout << "Enter a first number:";
                            cin >> lrgstnum;




                            do {
                                cout << "Enter the next number.\n";
                                cin>> num2;
                                if (num2>lrgstnum){
                                    secondlrgst=lrgstnum;
                                    lrgstnum=num2;
                                }
                                else if (num2> secondlrgst)
                                    secondlrgst =num2;



                            } while (x++ <= 7 );



                              cout << "The largest number is "<< lrgstnum<< endl; 
                              cout << "The second largest number is "<< secondlrgst<< endl; 
                              cout <<"\n\n\n\n";


                break;
            }
        case 4:{         /* 
                         * File:   main.cpp
                         * Author: Saldana, Thomas
                         * Problem 2.50: Modify the program in Fig. 2.22 so that it calculates the grade-point average for the class. A grade of 
                         *               'A' is worth 4 points, 'B' is worth 3 points, etc. 
                         */
                            char grade ;
                            int aCount=0, bCount=0,cCount=0, dCount=0,fCount=0; //keeps count of the number of grades
                            cout << "Enter the grades your students have earned in your class.";
                                  cout << "Enter \"E\" to end input."<< endl;
                                  cin>> grade;
                            while (  grade  != 'E'){

                                if ((grade = 'A')||(grade='a'))
                                    aCount= aCount +1;
                                if ((grade = 'B')|| (grade='b'))
                                   bCount = bCount +1;
                               if ((grade = 'C')|| (grade='c'))
                                    cCount+=1;
                               if ((grade = 'D')||(grade='d'))
                                    dCount+=1;
                               if ((grade = 'F')||(grade='f'))
                                    fCount+=1;

                                  cout << "Enter next grade.\n";
                                  cin >> grade;

                                }
                                cout << "\n\nThe total for each letter grade is as follows:"<< endl
                                     << "\nA:" << aCount
                                     << "\nB:" << bCount
                                     << "\nC:" << cCount
                                     << "\nD:" << dCount
                                     << "\nF:" << fCount;
                                cout <<"\n\n\n\n";
        
                break;
            }
            case 5:{         /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas 
                             * Problem 2.16: Drivers are concerned with the mileage obtained by their automobiles. One driver has 
                             *               kept track of several tankfuls of gasoline by recording miles driven and gallons used 
                             *               for each tankful. Develop a C++ programs that will input eh miles driven and gallons used 
                             *               for each tankful. After processing all input information, the program should calculate and print 
                             *               the combined miles per gallon obtained fro all tankfuls. 
                             *
                             * Created on April 10, 2014, 11:21 AM
                             */
                            float gallons, avg;
                            float miles, totGal, totMiles;





                            cout << "How many gallons did you use this month?(Enter -1 to end program)\n";
                            cin >> gallons;

                            while (gallons != -1){
                                totGal+= gallons;

                            cout << "How many miles did you drive this month ?\n";
                            cin >> miles;
                            totMiles +=miles;

                            cout << "The miles per gallon for this month is " << miles/gallons << '.'<< endl<< endl;
                            cout << "How many gallons did you use this month?(Enter -1 to end program)\n";
                            cin >> gallons;
                            }
                            avg = totMiles/ totGal;
                            cout << endl << "The average miles per gallon of all the months is " << avg;
                            cout << "\n\n\n\n";

                break;
            }
            case 6:{
                             /* 
                             * File:   main.cpp
                             * Author: Saldana, Thomas
                             * Problem 3: OCEAN LEVELS
                             *            Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a 
                             *            program that displays a table showing the number of millimeters that the ocean will have risen each 
                             *            year for the next 25years. 
                             *           

                             *
                             * Created on April 3, 2014, 3:00 PM
                             */
                            cout << "Currently, the ocean is rising at about 1.5 millimeters per year.\n"
                                 << "The following table shows the number of millimeters that the ocean will rise each year for the next 25 years. \n\n";

                            float  yr1 = 0,  yr2 = 0,  yr3 = 0,   yr4 = 0,  yr5 = 0,  yr6 = 0,
                                   yr7 = 0,  yr8 = 0,  yr9 = 0,  yr10 = 0, yr11 = 0, yr12 = 0,
                                  yr13 = 0, yr14 = 0, yr15 = 0,  yr16 = 0, yr17 = 0, yr18 = 0,
                                  yr19 = 0, yr20 = 0, yr21 = 0,  yr22 = 0, yr23 = 0, yr24 = 0,
                                  yr25 = 0, yr;
                            float amount =1.5;



                            for (yr1=0; yr1<=1; yr1+=amount);

                            for (yr2=0; yr2<=1;yr2= yr2+amount*2);
                            for (yr3=0; yr3<=1;yr3= yr3+amount*3);
                            for (yr4=0; yr4<=1;yr4= yr4+amount*4);
                            for (yr5=0; yr5<=1;yr5= yr5+amount*5);
                            for (yr6=0; yr6<=1;yr6= yr6+amount*6);
                            for (yr7=0; yr7<=1;yr7= yr7+amount*7);
                            for (yr8=0; yr8<=1;yr8= yr8+amount*8);
                            for (yr9=0; yr9<=1;yr9= yr9+amount*9);
                            for (yr10=0; yr10<=1;yr10= yr10+amount*10);
                            for (yr11=0; yr11<=1;yr11= yr11+amount*11);
                            for (yr12=0; yr12<=1;yr12= yr12+amount*12);
                            for (yr13=0; yr13<=1;yr13= yr13+amount*13);
                            for (yr14=0; yr14<=1;yr14= yr14+amount*14);
                            for (yr15=0; yr15<=1;yr15= yr15+amount*15);
                            for (yr16=0; yr16<=1;yr16= yr16+amount*16);
                            for (yr17=0; yr17<=1;yr17= yr17+amount*17);
                            for (yr18=0; yr18<=1;yr18= yr18+amount*18);
                            for (yr19=0; yr19<=1;yr19= yr19+amount*19);
                            for (yr20=0; yr20<=1;yr20= yr20+amount*20);
                            for (yr21=0; yr21<=1;yr21= yr21+amount*21);
                            for (yr22=0; yr22<=1;yr22= yr22+amount*22);
                            for (yr23=0; yr23<=1;yr23= yr23+amount*23);
                            for (yr24=0; yr24<=1;yr24= yr24+amount*24);
                            for (yr25=0; yr25<=1;yr25= yr25+amount*25);











                          cout << "  YEAR" << setw(20) << "HEIGHT RISEN(ml)\n"
                               << "  ---------------------------\n"  
                               << "  2014"<<setw(20) <<"    "<< yr1 << '\n'
                               << "  2015"<<setw(20) <<"    "<< yr2<<'\n'
                               << "  2016"<<setw(20) <<"    "<< yr3<<'\n'
                               << "  2017"<<setw(20) <<"    "<< yr4<<'\n'
                               << "  2018"<<setw(20) <<"    "<< yr5<<'\n'
                               << "  2019"<<setw(20) <<"    "<< yr6<<'\n'
                               << "  2020"<<setw(20) <<"    "<< yr7<<'\n'
                               << "  2021"<<setw(20) <<"    "<< yr8<<'\n'
                               << "  2022"<<setw(20) <<"    "<< yr9<<'\n'
                               << "  2023"<<setw(20) <<"    "<< yr10<<'\n'
                               << "  2024"<<setw(20) <<"    "<< yr11<<'\n'
                               << "  2025"<<setw(20) <<"    "<< yr12<<'\n'
                               << "  2026"<<setw(20) <<"    "<< yr13<<'\n'
                               << "  2027"<<setw(20) <<"    "<< yr14<<'\n'
                               << "  2028"<<setw(20) <<"    "<< yr15<<'\n'
                               << "  2029"<<setw(20) <<"    "<< yr16<<'\n'
                               << "  2030"<<setw(20) <<"    "<< yr17<<'\n'
                               << "  2031"<<setw(20) <<"    "<< yr18<<'\n'
                               << "  2032"<<setw(20) <<"    "<< yr19<<'\n'
                               << "  2033"<<setw(20) <<"    "<<yr20<< '\n'
                               << "  2034"<<setw(20) <<"    "<< yr21<<'\n'
                               << "  2035"<<setw(20) <<"    "<< yr22<<'\n'
                               << "  2036"<<setw(20) <<"    "<< yr23<<'\n'
                               << "  2037"<<setw(20) <<"    "<< yr24<<'\n'
                               << "  2038"<<setw(20) <<"    "<< yr25<<'\n';

                          cout <<"\n\n\n\n";


    
    
                break;
            }
            case 7:{
               
/* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem1: SUM OF NUMBERS
 *          Write a program that asks the user for a positive integer value. The program should us a loop to 
 *          get the sum of all the integers from 1 up to the number entered. For example, if the user enters 50, 
 *          the loop will find the sum of 1,2,3,4, ...50. 
 *
 * Created on April 3, 2014, 1:44 PM
 */
                  int num, newnum,total = 0, sum =0; //Declaration of Variables
    
    cout << "Enter a positive, whole number, and the computer will add all of the numbers that come before that number.\n";
    cin >>num;
    // checks for negative numbers.
    while ( num < 0){
        cout << "The number you have entered is not a positive number. Please follow instructions, and try again. \n";
                cin >> num;
    }
   // adds the numbers from 1 up to the  number the user chooses
    for ( int i= 1 ; i <= num  ; i++  ){
        sum = sum + i ;
        
    }
       
      cout << "The sum from 1 up to the number you chose is : " << sum << endl;      
    
  

    //Exit stage right.
      cout <<"\n\n\n\n";
                break;
            }
            case 8:{
               /* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *Problem21: Write code that lets the user enter a number. The number should be multiplied by 2 
             and printed until the number exceeds 50. Use a while loop.
 * Created on April 10, 2014, 11:33 PM
 */
                  float num, i=0;
    
    cout << "Enter a number, and the computer will multiply and print that number by two until the number exceeds 50.\n";
    cin >> num;
    
    
    
    
    while (i++<=50){
        num= num*2;
    cout << num << " ";
    }
    cout <<"\n\n\n\n";
                break;
            }
            case 9:{
                /* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 * Problem 23: Write a for loop that displays the following set of numbers:
                            0, 10, 20, 30, 40, 50 . . . 1000
 * Created on April 11, 2014, 12:13 AM
 */
                 cout << "This program displays the following set of numbers: 0, 10, 20, 30, 40, 50 . . . 1000 using the for repetition structure.\n\n\n";
    
    for (int i=0; i<=1000; i+=10)
        cout << i << " ";
                 cout <<"\n\n\n\n";
                break;
            }
             case 10:{
                /* 
 * File:   main.cpp
 * Author: Saldana, Thomas
 *
 * Created on April 7, 2014, 9:36 AM
 * Chap 3 Problem 10: Fibonacci Sequence
 */
                   
    //Declare Variables
    int fi,fim1,fim2;
    int term, cndStop;
    //Initialization of variables.
    fim1=10;
    fim2=10;
    fi=fim1+fim2;
    term =3;
    //Input the term to stop the sequence
    //sequence
    cout <<"How many terms in the fibonacci";
    cout <<"sequence will you like to calculate?"<< endl;
    cin >> cndStop;
    //Print out the initial terms
    cout << "Fibonacci Sequence = " << fim2 <<", "<< fim1 << ", " << fi << ", ";
    // Loop through the sequence
    
    do {
        fim2=fim1;
        fim1=fi;
        fi=fim1+fim2;
        //output the next term 
        if (term<cndStop-1)cout << fi <<", ";
        else cout <<fi;
    }while (++term<cndStop);
    cout << "}\n";
    
    cout << "\n\n\n\n";
    
    
    
//Exit Stage Right.
                break;
            }
            default: exitMnu=true;
        }
    }while(!exitMnu);
    //Exit the program
    return 0;
}
