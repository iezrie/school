// Ezrie Ward
// February 3rd, 2021

//(age2030) Get the user to input their current age and the current year. Calculate and output what their age will be in the year 2030.
//5 points - user friendly/correct input for current age
//5 points - user friendly/correct input for current year
//10 points - correct use of assignment statement
//10 points - user friendly/correct output statement

#include <cstdlib>
#include <iostream>

using namespace std;

int main()

{
    int currentage, currentyear, futureyear, futureage;
    
    // Announce program
    cout << "The Time Traveler" << endl;

    // Get input
    cout << "Enter your current age:  " << endl;
    cin >> currentage;

    cout << "Enter the current year:  " << endl;
    cin >> currentyear;

    // Formula for Age Conversion
    futureyear= 2030;
    futureage= (futureyear - currentyear) + currentage;
    

    // Output Result
    cout << "In the year 2030, you are " << futureage << " years old." << endl;

    system("PAUSE");
    return 0;
    
}