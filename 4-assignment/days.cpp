// Ezrie Ward
// January 27th, 2021

#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double days, hours;

    // Announce program
    cout << "Covert days into hours" << endl;

    // Get input
    cout << "Enter the number of days: " << endl;
    cin >> days;
    
    // Multiply Days by Hours in a Day
    hours = days * 24;

    // Output Result
    cout << days << " days is equivalent to " << hours << " hours." << endl;

    system("PAUSE");
    return 0;
}