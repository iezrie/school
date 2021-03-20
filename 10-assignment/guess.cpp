// Ezrie Ward
//March 17th, 2021

//(guess) Write a program that accepts a number as a guess between 1 an 100 as input and outputs if the guess is "too high",  "too low", or "correct". 
// When the guess is correct the program should output how many guesses it took.
//10 points - correct use of loop statement
//10 points - correct use of if statements
//10 points - correct #include statements
//10 points - correct outputs 


#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;
int main()

{

    int guesscountloop; // how many guesses through loop
    int correctguess; // switch for loop correct guess scenario
    correctguess = 1;
    int guessuserinput; // their guess
    int generatednumber; // what they're guessing, computer generated number (rand function) reference

    srand(time(0));
    generatednumber = rand() % 100  + 1;
    guesscountloop = 1;

    cout << "" << endl;
    cout << "--------------------------------------  " << endl;
    cout << "|  Let's play a guessing game,       |" << endl;

        while (correctguess == 1)

            {
                cout << "|  pick a number between 1 and 100:  |" << endl;
                cout << "--------------------------------------  " << endl;
                cout << "" << endl;
                cin >> guessuserinput;
                cout << "______________________________________  " << endl;
                
                
                if(guessuserinput > generatednumber)
                    {
                        cout << guessuserinput << "      is too high of a guess " << endl;
                        cout << "______________________________________  " << endl; 
                        cout << generatednumber << "     is the correct number " << endl;
                        cout << "______________________________________  " << endl;
                        cout << "" << endl;
                    }

                if(guessuserinput < generatednumber)
                    {
                        cout << guessuserinput << "       is too low of a guess " << endl;
                        cout << "______________________________________  " << endl;
                        cout << generatednumber << "       is the correct number " << endl;
                        cout << "______________________________________  " << endl;
                        cout << "" << endl;
                    }

                if(guessuserinput == generatednumber)
                    {
                        cout << guessuserinput << "       is the correct number! " << endl;
                        correctguess = 0;
                        cout << "______________________________________  " << endl;
                        cout << "" << endl;
                    }
            
            }

    guesscountloop = guesscountloop + 1; // looping by intervals of 1 // ?
    cout << "It took you  " << guesscountloop << "  guesses before getting the correct answer " << endl;

    system("PAUSE");
    return 0;

}


// while loop, while guess = False
// before while loop you need to use rand() with min/max of 0/100 to get the number that's being guessed
// have a variable like "number_of_guesses = 1" and increment each time through the loop
// if statements will need to be the_guess < the_random_number, then "too low" and so on
// if input == random_number, then
//   print "correct" in "number_of_guesses"
//   set guessed = True (so while loop terminates)
//


// use 4 var
// guesscount = how many guyesss
// didtheyguessright = the switch for the loop
// secretenumber - what theyre guessing
// theirguess = what we'll check each time through the loop


//input guess between 1 and 100
// if statements for <50 and/or >50 to display too high and too low and correct
//if guess is 'correct' the program will outpur how many guesses it took
//have to include loop statement

// set random number generator in  code, then add input from user, then have input be matched to random number generated from computer, see if the rand and input align? not sure























