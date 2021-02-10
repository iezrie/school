//Ezrie Ward
//February 9th, 2021

//(MINMAX) Accept 2 numbers as input. Display which number is larger and which is smaller.
//5 points - correct use of comments to document program (programmer name)
//10 points - correct inputs
//10 points - correct use of "if" statement
//5 points - correct output statement

#include <iostream>

using namespace std;
int main()

{
	int number1, number2;

    //announce program
    cout << " Number Evaluator " << endl;

    //get input
	cout << " Enter first number to evaluate :  ";
	cin >> number1;
    cout << " Enter second number to evaluate :  ";
	cin >> number2;

    //output
	if (number1 > number2)
		cout << number1 << " is larger than " << number2 << endl;
    else if (number1 < number2)
		cout << number1 << " is smaller than " << number2 << endl;
	else
		cout << number1 << " is equal to " << number2 << endl;

	system("PAUSE");
	return 0;
}
