//  add.cpp
//  Lab07
//  Created by Ezrie Ward, D'Mitri Scott, and Destiny McManimie.

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
    // define variables
    int loopcount = 1;
    int count = 1;
    int sum = 0;               
    int prior_sum = 0;

    // loop 
    while (loopcount < 51)                   
    {
        prior_sum = sum;
        sum = sum + count; 
        
        cout << "Loop " << loopcount << " | " << "[Sum: " << prior_sum << "]" << " + " << "[Odd #: " << count << "]" << " = " << "[Total Sum of: " << sum << "]" << endl;  
        cout << " " << endl;

        loopcount = loopcount + 1;
        count = count + 2;
    }

    // output
    cout << " " << endl;
    cout << "The total sum of all odd numbers between 1 and 99 is " << sum << endl;
    cout << " " << endl;
    system("PAUSE");
    return 0;
}
 
