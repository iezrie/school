//Ezrie Ward
//February 9th, 2021

//(FLOOR2) Given the appropriate dimensions (ft) to a room and a cost of flooring per square foot, output the total cost of the flooring. 

//10 points - user allowed to select room shape (circle or rectangle)
//5  points - correct inputs
//5  points - error message displayed for incorrect shape inputs
//10 points - correct calculations / assignment statements
//10 points - correct output / output statements
//formula for circle: M_PI x (diameter/2)^2

#include <cstdlib>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>

using namespace std;
int main()

{
	int choice = 0;
	double width, length, diameter, area1, area2, radius, unitcost1, totalcost1, unitcost2, totalcost2;

    cout << " Willkommen in der Leere ";
    cout << endl;
	cout << " Enter 1 for a Rectangular Room and 2 for a Circular Room :  ";
	cin >> choice;

    //rectangular room path
	if (choice == 1)
	{
		
            cout << " Enter the length of the rectangular room :  ";
			cin >> length;
            cout << " Enter the width of the rectangular room :  ";
			cin >> width;

			area1 = length * width; //formula
            cout << " The area of the rectangular room is :  " << area1;
            cout << endl; 
            cout << " Enter the cost per square foot :  ";
            cin >> unitcost1;
            cout << endl;

            totalcost1= unitcost1 * area1; //formula
            cout << setiosflags(ios::fixed);
            cout << setprecision(2);
            cout << " The total cost for flooring in a rectangular room is :  " << " $ " << totalcost1 << " dollars " << endl;

            cout << " Danke sehr , Tschuss ! ";
            cout << endl;
	}

    //circular room path
	if (choice == 2)
	{
            cout << " Enter the diameter of the circular room :  ";
			cin >> diameter;
            
            //formulas
            radius= diameter/2.0; 
            area2= 2.0 * M_PI * radius;

            cout << " Enter the cost per square foot :  ";
            cin >> unitcost2;
            totalcost2= unitcost2 * area2; //formula
            cout << setiosflags(ios::fixed);
            cout << setprecision(2);
            cout << endl;
            cout << " The total cost for flooring in a circular room is :  " << " $ " << totalcost2 << " dollars " << endl;

            cout << " Danke sehr , Tschuss ! ";
            cout << endl;
	}

    //incorrect input what if scenario
	if (choice > 2 || choice < 1)
			cout << " Error : Incorrect Code ... Die Leere hat dich ... ";
		cout << endl;

    system("PAUSE");
	return 0;

	}

 
