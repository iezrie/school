// Ezrie Ward
// Febraury 3rd, 2021

//(pay) Input the number of hours worked for a week, and the hourly pay rate. Output the total pay.
//10 points - correct input statements
//5 points - correct use of assignment statement
//5 points - correct output statement
//10 points - output formatted for currency (dollar sign and 2 decimal places example: $2.25)

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
    double hoursworked, payrate, totalpay;
    
    // Announce program
    cout << "Weekly Pay Converter" << endl;

    // Get input
    cout << "Enter the number of hours you worked in one week:  " << endl;
    cin >> hoursworked;

    cout << "Enter the hourly pay rate:  " << endl;
    cin >> payrate;

    // Formula for Age Conversion
    totalpay= (payrate * hoursworked);
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    
    // Output Result
    cout << "In one week, you made a total of " << "$" << totalpay << " dollars." << endl;

    system("PAUSE");
    return 0;
    
}