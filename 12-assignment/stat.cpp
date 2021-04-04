// Ezrie Ward
// March 31st, 2021

//(stat) Create a program that will accept 10 numbers as input. Output the list of numbers and the difference of each number from the average of all the numbers.
//10 points - correct use of loop
//10 points - correct use of array
//10 points - correct output

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
    int num[10];
    int i, x;
    int sum, average;
    sum=0.0;

    for(i=0;i<10;i++)
    {
        cout << "Enter a number: " << endl;
        cin >> num[i];
        sum += num[i];
    }
    cout << "" << endl;
    average = sum / 10;
    cout << "The average of all numbers entered is:  " << average << endl;
    cout << "" << endl;
    cout << "--- Now let's find the difference of each number entered from the average of all the numbers ---" << endl;
    cout << "" << endl;

    for(i=0;i<10;i++)
    {
    x = average - num[i];
    cout <<  "Average:  [" << average << "]  -  " << "Input #:  [" << num[i] << "]  =  Difference:  [" << x << "]" << endl;
    cout << "" << endl;
    }

    system("PAUSE");
    return 0;

} 
