// Ezrie Ward
// January 27th, 2021

// (gallon.cpp) The program will accept an input value in US liquid gallons
// and output the equivalent values for US measurements in quarts, pints, and fluid ounces. 
 
// 1 gal = 128 oz.

// 5 points - text file submission uploaded with .cpp file extension
// 5 points - user friendly input prompt using cout and cin statements
// 5 points - correct output using cout for quarts
// quarts = gallons * 4

// 5 points - correct output using cout for pints
// pints = gallon * 8 

// 5 points - correct output using cout for fluid ounces
// ounces = gallons * 128

// 5 points - user friendly output using literal strings


#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    double gallons, quarts, pints, ounces;
    
    // Announce program
    cout << "Equivalent conversion values for US measurments" << endl;

    // Get input
    cout << "Enter the number of gallons: " << endl;
    cin >> gallons;

    // Measurment conversion formulas
    quarts= gallons * 4;
    pints= gallons * 8;
    ounces= gallons * 128;

    // Output Result
    cout << gallons << " liquid gallons are equivalent to " << quarts << " quarts." << endl;
    cout << gallons << " liquid gallons are equivalent to " << pints << " pints." << endl;
    cout << gallons << " liquid gallons are equivalent to " << ounces << " ounces." << endl;

    system("PAUSE");
    return 0;
    
}