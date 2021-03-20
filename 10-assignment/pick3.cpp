// Ezrie Ward
// March 17th, 2021

//(pick3) Create a pick 3 lottery helper program to select a set of lottery numbers for the user. 
//The program should randomly pick three single-digit numbers from "0" to "9" and display them on the screen. 
//Duplicate numbers are allowed. It should also calculate and display the "sum it up" value by adding the three numbers together.
//Use number1= rand() % (max - min + 1) + min; with 0 as the min and 9 as the max for this problem. 
//The following example code picks and displays a number from 1 to 100.

//10 points - correct use of rand function
//10 points - correct output


#include <iostream>.
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
    int number1;
    int number2;
    int number3;
    int final;
    srand(time(0));
    number1 = rand() % 10;
    number2 = rand() % 10;
    number3 = rand() % 10;
    final = number1 + number2 + number3;

    cout << number1 << endl;
    cout << number2 << endl;
    cout << number3 << endl;
    cout << "Total: " << final << endl;

    return 0;
}