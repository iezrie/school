//Ezrie Ward
//February 9th,2021

//(ODD) Create a program that will accept a number as input and output whether the number is even or odd.
//5 points - correct input
//10 points - correct use of "if" statement
//10 points - correct logic to determine even or odd numbers
//5 points - correct output statement


#include <cstdlib>
#include <iostream>

using namespace std;
int main()

{
    int number;

    //input
    cout << "Input an integer : ";
    cin >> number;

    //statements
    if ( number % 2 == 0)
        cout << number << " is an even number . .";
    else
        cout << number << " is an odd number . .";
    cout << endl;

    system("PAUSE");
    return 0;
}
