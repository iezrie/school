// Ezrie Ward
// April 22nd, 2021

//(mathgame.cpp) Create a program that displays a menu to select addition, subtraction, or multiplication. Using random numbers between 0 and 12 (including 0 and 12), 
// present a math problem of the type selected to the user. Display a "correct" or "incorrect" message after the user enters their answer.

//10 points - display of menu
//10 points - validate input for menu options
//10 points - correct addition
//10 points - correct subtraction
//5 points - no negative answers allowed for subtraction
//10 points - correct multiplication 

//10 bonus points - implement a division option with no decimal answers and no division by zero


#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    // define variables
    int menuChoice = 0;
    int additionprob, add1, add2;
    int subtractionprob, sub1, sub2;
    int multiplicationprob, multi1, multi2;
    int userinput;

    srand(time(0));

    // addition route
    add1 = rand()%12; 
    add2 = rand()%12;
    additionprob = add1 + add2;

    // subtraction route
    sub1 = rand()%12; 
    sub2 = rand()%12;
    
    // multiplication route
    multi1 = rand()%12; 
    multi2 = rand()%12;
    multiplicationprob = multi1 * multi2;
    
    while (menuChoice != 4)
    {
        switch (menuChoice)
        {
            case 0:
                break;

            case 1:
                cout << "Answer the following addition problem below. \n";
                cout << add1 << " + " << add2 << endl;
                cin >> userinput; 
                    if (userinput == additionprob)
                        {
                            cout << "Correct!" << endl;
                            cout << "You entered " << userinput << ", and the answer to the problem is " << additionprob << "." << endl;
                        }
                    else
                        {
                            cout << "That is incorrect" << endl;
                        } 

                    break;

            case 2: 
                    if (sub2 > sub1)
                        {
                            subtractionprob = sub2 - sub1;
                        } 
                    else if (sub1 > sub2)
                        {
                            subtractionprob = sub1 - sub2; 
                        }
                    else if (sub2 == sub1)
                        {
                            subtractionprob = 0;
                        }

                cout << "Answer the following subtraction problem below. \n";
                cout << sub1 << " - " << sub2 << endl;
                cin >> userinput;

                    if (userinput == subtractionprob)
                        {
                            cout << "Correct!" << endl;
                            cout << "You entered " << userinput << ", and the answer to the problem is " << subtractionprob << "." << endl;
                        }
                    else 
                        {
                            cout << "That is incorrect" << endl;
                        }

                    break;

            case 3:
                cout << "Answer the following multiplication problem below.\n";
                cout << multi1 << " * " << multi2 << endl;
                cin >> userinput;
                    if (userinput == multiplicationprob)
                        {
                            cout << "Correct!" << endl;
                            cout << "You entered " << userinput << ", and the answer to the problem is " << multiplicationprob << "." << endl;
                        }
                else
                        {
                            cout << "That is incorrect" << endl;
                        }

                    break;
                default:  cout << "Invalid menu selection.\n\a";
            }
        
        // menu display
        cout << endl;
        cout << "[Math Problem Generator]\n";
        cout << "Proceed to select from one of the following\n";
        cout << "1. Addition.\n";
        cout << "2. Subtraction.\n";
        cout << "3. Multiplication.\n";
        cout << "4. Exit.\n";
        cout << "[Enter your choice (1-4):]  ";
        cin >> menuChoice;
    
    }

    cout << "Farwell user.\n";
    return 0;

}
