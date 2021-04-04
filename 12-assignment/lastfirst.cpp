// Ezrie Ward
// March 31st, 2021

//(lastfirst) Write a program that will accept 10 numbers as input.
//When all the numbers have been input, output the list of numbers in
//reverse order.
//10 points - correct use of array
//10 points - correct use of loop
//10 points - correct output

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
    int num[10];
    int i;
    for(i=0;i<10;i++)
    {
        cout << "Enter a number : ";
        cin >> num[i];
    }
    for(i=9;i>-1;i--)
    {
        cout << num [i] << endl;
    }

    system("PAUSE");
    return 0;

}