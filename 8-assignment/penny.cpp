//Ezrie Ward
//February 22nd, 2021

//(penny) Write a program to calculate a person's salary calculated in this manner. The person will be paid 1 penny on the first day or $0.01. The pay will be doubled for every day worked. For example, pay will be doubled to 2 pennies on the second day for a total pay of $0.03. The program should accept the number of days worked as input and output the total pay in dollars with two decimal places.
//10 points - correct use of loop
//10 points - correct output  
//10 points - correct output format

//input days
//starting value 1
//double the previous day
//sum= (runnigntotal)sum and currentday
//if the loop number is greater than 1 than else the pay perday is .01, etc


#include <cstdlib>
#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;
int main()

{
    // define variables
    int daysworked, day;
    double dailypay, priordailypay, sum;
    dailypay = 0.01;
    day = 0;

    // announce program
    cout << "Payment Calculator" << endl;
    cout << "Enter the number of days you have worked :  " << endl;
    cin >> daysworked;

    // loop
    while (day < daysworked)                   
    {
        // if statement
        if (day < 1)
            {
                sum = dailypay;
            }
        else
            {
                dailypay = priordailypay * 2;
                sum = sum + dailypay;    //(accumulater)  
            }


        cout << setiosflags(ios::fixed);
        cout << setprecision(2);
        cout << "You made a total of : $  " << sum << endl;     

        priordailypay = dailypay;
        day = day + 1;    
    }

    cout << "You made a total of : $  " << sum << " in " << daysworked << " days " << endl;
    system("PAUSE");
    return 0;
}

  