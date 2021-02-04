// Ezrie Ward
// February 3rd, 2021

//(score) Input the number of questions on an exam, the number of correct questions, and a student first name. Output the name and the grade for the exam.
//15 points - correct number and formatting for 3 inputs
//10 points - correct formula for calculating a percent grade
//15 points - correct output of the percent grade. (example: Marty's grade for the exam was 82%)

#include <cstdlib>
#include <iostream>

using namespace std;

int main()

{
    double totalquestions, totalcorrect, gradepercentage;
    char name[20];

    // Announce program
    cout << "Exam Grade Converter" << endl;

    // Get input
    cout << "Please enter your full name: " << endl;
    cin >> name;

    cout << "Enter the total amount of questions on your exam:  " << endl;
    cin >> totalquestions;

    cout << "Enter the amount you scored correctly:  " << endl;
    cin >> totalcorrect;

    // Formula for Grade Conversion
    gradepercentage=(totalcorrect/totalquestions) * 100;

    // Output Result
    cout << name << ", out of " << totalquestions << " you scored " << totalcorrect << " correctly. Your exam grade is " << gradepercentage << "%" << endl;

    system("PAUSE");
    return 0;
    
}