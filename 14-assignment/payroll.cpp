// Ezrie Ward
// April 17th, 2021


// (payroll) Write a program that will read the payroll file. It should output the name and paycheck amount. Also output the total pay of all employees. 
// The payroll.dat file contains the name followed by hourly wage followed by hours worked. 

// 10 points - correct reading of file
// 10 points - use of loop
// 10 points - format output as currency when needed
// 10 points - correct output

// output: total pay of all employees, name and paycheck amount
// in file they have hourly wage and hoursworked

//"Bones_Bob" 10.50 40
//"Smith_Sally" 11.25 40
//"Toll_Tom" 8.10 35
//"Anderson_Ann" 7.25 20
//"Carlson_Carl" 9.75 22

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main()

{

    ifstream infile; // input stream
    ofstream outfile;
    string name = ""; 

    infile.open("payroll.dat",ios::in);
    outfile.open("payroll2.dat",ios::app);

    int hoursWorked = 0;
    double hourlyWage = 0.0;
    //int count = 0;
    double paycheck, totalpayroll = 0.0;

        // error input scenario
        if (!infile.is_open())
        {
            cout << "Error opening input file" << endl;
            system("PAUSE");
            exit(1);
        }

        // error output scenario 
        if (!outfile.is_open())
        {
            cout << "Error opening output file" << endl;
            system("PAUSE");
            exit(1);
        }
        
        // everytime i use a infile directive, it reads the "next" line in the file
        // while in file, do this
        while(!(infile.eof()))
        {
            infile >> name;  // infile = reads a line of text to a variable and then advances to the next line
            infile >> hourlyWage;
            infile >> hoursWorked;
            paycheck = (hoursWorked * hourlyWage);
            totalpayroll = totalpayroll + paycheck; //count 
            cout << setiosflags(ios::fixed);
            cout << setprecision(2);
        
            outfile << name;         
            outfile << hourlyWage;
            outfile << hoursWorked;
            
            cout << " " << endl;
            cout << name << endl; 
            cout << "[Employee Payment: " << paycheck << "]" << endl;

        }
    
        cout << " " << endl;
        cout << "The total payroll amount of all employees is : $ " << totalpayroll << endl; 
        cout << " " << endl;


    infile.close();
    outfile.close();
    system("PAUSE");


    return 0;

}
