// Ezrie Ward
// January 27th, 2021

#include <cstdlib>
#include <iostream>

using namespace std;

int main()

{
    double celsius, fahrenheit;
    
    // Announce program
    cout << "Celsius (C) to Fahrenheit (F) Converter" << endl;

    // Get input
    cout << "Enter the temperature in Celsius: " << endl;
    cin >> celsius;

    // Measurment conversion formula
    // fahrenheit= (celsius*9.0) / 5.0 + 32;
    fahrenheit= celsius * 9.0 / 5.0 + 32;

    // Output Result
    cout << celsius << " degrees (C) is equivalent to " << fahrenheit << " degrees (F)." << endl;

    system("PAUSE");
    return 0;
    
}