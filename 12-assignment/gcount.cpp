// Ezrie Ward
// March 31st, 2021

//(gcount) Create a program that will accept any number of grades for
//an exam. The grades will be input as 4 for an A, 3 for a B, 2 for a C, 1
//for a D, and 0 for an F. After all grades have been entered, allow the
//user to enter -1 to exit. Output the number of grades in each category.
//10 points - correct use of array of counters
//10 points - correct use of loop
//10 points - correct output

// grades[5] a=4, b=3, c=2, d=1, f=0

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
int main()

{
    int nNumberOfGrades [6] = {0, 0, 0, 0, 0, 0};
	int input = 1; 

	while (1)
	{
        
		cout << "Enter the Grade as a numeral " << endl;
		cout << "4 = A\n"
			<< "3 = B\n"
			<< "2 = C\n"
			<< "1 = D\n"
			<< "0 = F\n"
			<< "Enter -1 to Exit" << endl << endl;

		cin >> input;
		cout << endl;

		if (input == -1)
		{
			break;
		}
		if (input > -1 && input < 6)
		{
			nNumberOfGrades [input]++;
		}
		else
		{
			cout << "Invalid number. Try Again" << endl << endl;
		}

	}
	
	int grade = 0;
	while ( grade < 6)
	{

		if (grade == 0)
		{
			cout << "Number of grades : " << nNumberOfGrades [grade] << " Letter grade: F" << endl << endl;
		}
		else if (grade == 1)
		{
			cout << "Number of grades :" << nNumberOfGrades [grade] << " Letter grade: D" << endl << endl;
		}
		else if (grade == 2)
		{
			cout << "Number of grades :" << nNumberOfGrades [grade] << " Letter grade: C" << endl << endl;
		}
		else if (grade == 3)
		{
			cout << "Number of grades :" << nNumberOfGrades [grade] << " Letter grade: B" << endl << endl;
		}
		else if (grade == 4)
		{
			cout << "Number of grades :" << nNumberOfGrades [grade] << " Letter grade: A" << endl << endl;
		}
	
        grade++; 
	}

	system("pause");
	return 0;

}
