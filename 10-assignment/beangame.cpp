// Ezrie Ward
// March 17th, 2021

//(beangame) Create a program to estimate the number of jelly beans in a jar. Assume the jar is a cylinder. You may also assume the jellybeans are cylinders that measure 2 cm long by 1.5 cm diameter (or 0.75 cm radius). VolumeOfCylinder = 3.14159 * height * radius2

//radius2 can be represented as pow(radius, 2) or radius * radius
//Use the pow function since this is about modules/functions. Use
//in your program. It is the library that has the pow (power) function.
//10 points - correct include libraries
//10 points - correct use of pow function

#include <cmath> // pow?
#include <iostream>

using namespace std;

int main()

{
    int height, radius, cylindervolume;
    int jellybeans, numjellybeans;

    cout << "Jellybeans in Jar Estimator" << endl;
    cout << "Enter the height of the jar (cm) :   " << endl;
    cin >> height;
    cout << "" << endl;

    cout << "Enter the radius of the jar :   " << endl;
    cin >> radius;
    cout << "" << endl;

    cylindervolume = 3.14159 * height * pow (radius, 2.0);
    jellybeans = 3.14159 * 2 * pow(0.75, 2.0);
    numjellybeans = cylindervolume / jellybeans;
    
	cout << "The volume of your jar is :  " << cylindervolume << endl;
	cout << "" << endl;
	 
	cout << "Estimated # of Beans in Specified Jar :  " << numjellybeans << endl;
	cout << "" << endl;


	cout << "" << endl;
    cout << "" << endl;

	system ("pause");
	return 0;
}

// notes
// enter height and radius
// both multiplied by pi will equal the volume of the cyclinder jar
// jellybeans are 2cm by 1.5cm diameter (.75 radius) (maybe multiply both cm a)
// volumeOfCyclinder = (3.14159 * height * radius * radius);
// jellybeans = 3.14159 * 2 * 0.75 * 0.75;
// numjellybeans = volumeOfCylinder / jellybeans;

//cylindervolume = (3.14159 * height * radius * radius); // radius^2 pow function in volume equation
//pow(height,radius) * 3.14159; (radius issue in equation)
//jellybeans = 3.14159 * 2 * 0.75 * 0.75; // radius^2 for jellybeans
// r2 = ("r^2 = %f\n", pow (r2, 2.0));
// printf ("7 ^ 3 = %f\n", pow (7.0, 3.0) );