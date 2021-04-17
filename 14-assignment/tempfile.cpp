// Ezrie Ward
// April 17th, 2021


//(tempfile) Create a program to create a file containing a temperature  conversion chart for 0 to 100 degrees Celcius at 10 degree intervals 
// and the corresponding Fahrenheit temperature.

//10 points - correct creation of output file
// 10 points - correct output to file

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main()

{
    ofstream outfile; // output stream
    double fahrenheit, celsius, temp;
    celsius = 0.0;

    outfile.open("tempchart2.txt",ios::out); // output  ::app to append 
    
    if (!outfile.is_open())
    {
        cout << "Error opening output file" << endl;
        system("PAUSE");
        exit(1);
    }
    
    outfile << "Celsius Fahrenheit" << endl;
    
    for (int x = 0 ; x <= 100 ; x = x + 10)
    {
        fahrenheit= celsius * 9.0 / 5.0 + 32;
        outfile << celsius <<  " (C) " << " | " << fahrenheit <<  " (F) " << endl;
        celsius = celsius + 10; // increase Celsius by 10   
    }

    outfile.close();
    return 0;
  
}
