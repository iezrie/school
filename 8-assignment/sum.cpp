//Ezrie Ward
//February 22nd, 2021

//(sum) Create a program that will output the sum of all of the numbers from 1 to 100.
//10 points - correct use of loop
//10 points - correct output 

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
    int c = 1;

    double sum = 0.0;               
    double prior_sum = 0.0;

    while (c < 101)                   
    {
        prior_sum = sum;
        sum = sum + c;   //(accumulater)  
        cout << "[ LOOP " << c << "] " << prior_sum << " + " << c << " = " << sum << endl;
        
        c = c + 1;
    }

    cout << "The total sum of the numbers is " << sum << endl;
    system("PAUSE");
    return 0;
}