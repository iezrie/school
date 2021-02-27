//Ezrie Ward
//February 22nd, 2021

//(tempchart) Create a program to display a temperature conversion chart for 0 to 100 degrees Celsius at 10 degree intervals and the corresponding Fahrenheit temperature.
//10 points - correct use of loop
//10 points - correct output 

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
    double fahrenheit, celsius, temp;
    
    celsius = 0.0;
    temp = 1.0;

    while (celsius < 101)
    {
	    fahrenheit= celsius * 9.0 / 5.0 + 32; // convert the Celsius to Fahrenheit
        temp = temp + celsius;

        
        cout << "  " << celsius << "degrees (C) is equivalent to  " << fahrenheit << "   degrees (F) " << endl; // output both variables on same line
        celsius = celsius + 10; // increase Celsius by 10
    }

    system("PAUSE");
    return 0;
}
