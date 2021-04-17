// Ezrie Ward
// April 17th, 2021


// (Students) Create a program that will read students and grades from a file. The file contains first name, last name, and five grades. 
// For each input record, display the last name followed by a comma followed by the first name followed by the student's average grade. 
// After all records are processed display the highest overall grade average. 

// 10 points - correct reading of file
// 10 points - use of loop
// 10 points - format output percent grade when needed
// 10 points - correct output

// output : last name, first name | average :


#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main()

{
    ifstream infile; // input stream

    string firstname = ""; // define characters
    string lastname = "";  // define characters

    infile.open("students.txt",ios::in);
    
    double gradeaverage;
    int count = 0;
    double grade1, grade2, grade3, grade4, grade5; // could set to 5 infiles to filter through orrrr
    double gradesum;
    double highestaverage;
    gradeaverage = 0;

    // error input scenario
        if (!infile.is_open())
        {
            cout << "Error opening input file" << endl;
            system("PAUSE");
            exit(1);
        }
  
        while(!(infile.eof()))
        {
            infile >> lastname >> firstname >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
            gradesum = grade1 + grade2 + grade3 + grade4 + grade5;
            gradeaverage = gradesum / 5.0;  // equation   
        
            if (highestaverage < gradeaverage)   
                {
                    highestaverage = gradeaverage;
                }

            cout << setiosflags(ios::fixed);
            cout << setprecision(2);
            
            cout << " "  << endl;
            cout << "[" << lastname << ", " << firstname << "] | " << "Grade Average : % " << gradeaverage << endl;
        }
    cout << " "  << endl;
    cout << "[Highest Grade Average : % " << highestaverage << "]" << endl;

    cout << " "  << endl;

    infile.close();
    return 0;

}
