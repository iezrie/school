// Ezrie Ward
// April 22nd, 2021

//(menushape.cpp) Create a program that displays a menu to calculate the area of a circle, a rectangle, a square, or a triangle. 
//The program should calculate the area of the figure selected. The display should look something like this:

//Shape Area Calculator (SAC)

//1. Calculate the area of a Circle
//2. Calculate the area of a Rectangle
//3. Calculate the area of a Square
//4. Calculate the area of a Triangle
//5. Quit

//Enter your choice (1-5):

//10 points - display of menu
//10 points - validate input for menu options
//20 points - correct output for each option

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int menuChoice = 0;
    double radius;
    double area;
    double width, length, base, height;
    
    while (menuChoice != 5)
    {
        
        switch (menuChoice)
        {

        case 0:
             break;
        case 1:
               cout << "Enter the radius:";
               cin >> radius;
               area = 3.14 * radius * radius;
               cout << "The area of the circle is " << area << ".\n";
               break;
        case 2: 
               cout << "Enter the width:";
               cin >> width;
               cout << "Enter the length:";
               cin >> length;
               area = width * length;
               cout << "The area of the rectangle is " << area << ".\n";
               break;
        case 3:
               cout << "Enter the width:";
               cin >> width;
               cout << "Enter the length:";
               cin >> length;
               area = width * length;
               cout << "The area of the square is " << area << ".\n";
               break;
        case 4: 
               cout << "Enter the base:";
               cin >> base;cout << "Enter the height:";
               cin >> height;    
               area = 0.5*base*height;
               cout << "The area of the triangle is " << area << ".\n";
               break;
        default:  cout << "Invalid menu selection.\n\a";

        }
        
        // menu display
        cout << endl;
        cout << "[Shape Area Calculator (SAC)]\n";
        cout << "Proceed to select from one of the following\n";
        cout << "1. Circle.\n";
        cout << "2. Rectangle.\n";
        cout << "3. Square.\n";
        cout << "4. Triangle.\n";
        cout << "5. Exit.\n";
        cout << "[Enter your choice (1-5):]";
        cin >> menuChoice;
    
    }

    cout << "Farwell user.\n";
    return 0;

}