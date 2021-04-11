// Ezrie Ward
// April 7th, 2021

//(sortdesc.cpp) Create a program that takes 10 numbers as input and outputs the numbers sorted from largest to smallest.
//10 points - correct input of 10 numbers
//5 points - correct use of array
//5 points - correct use of loop
//20 points - correct output

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

using namespace std;


int main()
{
    int array_size = 10;
    // int nums[] = {11, 15, 18, 7, 3, 4, 9, 20, 13, 6, 0};
    int nums[10];
    int i, j, k, x;

    cout << "This program will sort your input from Largest to Smallest, proceed to" << endl;

    // for loop input to populate nums
    for(i = 0; i < array_size; i++)
    {
        cout << "[Enter a number]: ";
        cin >> nums[i];
    }

    int temp;
    for (x = 0; (x < array_size); x++)
    {
        // print all all the starting values in the array, in the order that I defined them in up above on line 42
        cout << "[Outer Loop #]:  " << x << endl;

        cout << "[BEFORE SORT]: ARRAY VALUES" << endl;
        for (k = 0; k < array_size; k++)
            {
              cout << nums[k] << " ";
            }
            cout << endl;        
 

        // compare the values to one another and change the values in the array
        for (j = 0; j < array_size - 1; j++)
        {
        // comparing the value on an index position to the value of the position to its right (+1)
        // if j = 0 and nums[j] is 11 then j + 1 = 1 and nums[j+1] is = to 15
        cout << " " << endl;
        cout << "[Compare Loop #]:  " << j << endl;
        cout << "Compare " << nums[j+1] << " to " << nums[j] << endl;
         if (nums[j+1] > nums[j])  

            {
                cout << "Declared [Greater Than]" << endl;
                temp = nums[j]; // swap array elements
                cout << "Setting Nums Index " << j << " which is " << nums[j] << " to Nums Index " << j << " plus 1 which is " << nums[j + 1] <<  endl;
                cout << " " << endl;
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }               
        
        // print the array with the new values
        cout << " " << endl;
        cout << "[AFTER SORT]: ARRAY VALUES" << endl;
        for (k = 0; k < array_size; k++)
            {
              cout << nums[k] << " ";
            }
            cout << endl;        

    }

    return 0;
}