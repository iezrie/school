// Ezrie Ward
// March 26th, 2021
// Software Sales Program

#include <iostream>
#include <iomanip>

using namespace std;

int main()


{
const double UNIT_PRICE = 99.0; // Constant for the unit price.

double unitsSold; // Number of units sold
unitsSold = 0;

double discountPct; // Discount percentage
double discountCost; // Unit cost after discount
double totalCost; // Total cost
double original_total_cost, discounted_total_cost; 
double totalsavings;

while (unitsSold < 1)  
    {
        cout << "Enter the number of units sold: ";
        cin >> unitsSold;
        if (unitsSold < 1)
            {
                cout << "Error: Input not valid. " << endl;
                cout << "Please enter only positive variables. Try again. " << endl;

            }
    }


if (unitsSold < 10) // Determine the discount percentages
discountPct = 1.00;
else if (unitsSold >= 10 && unitsSold <= 19)
discountPct = 0.80;
else if (unitsSold >= 20 && unitsSold <= 49)
discountPct = 0.70;
else if (unitsSold >= 50 && unitsSold <= 99)
discountPct = 0.60;
else if (unitsSold >= 100 && unitsSold <= 149) //EDITED PERCENTAGE 
discountPct = 0.55;                            //EDITED 
else if (unitsSold >= 150)                     //EDITED PERCENTAGE
discountPct = 0.50;                            //EDITED


// discounted individual price (cost once percent applied)
discountCost = UNIT_PRICE * discountPct; 

// discounted cost applied as whole (taking discounted unit price and multiplying it by the amount they bought)
totalCost = unitsSold * discountCost; 

original_total_cost = UNIT_PRICE * unitsSold;
totalsavings = original_total_cost - totalCost;

cout << fixed << showpoint << setprecision(2);

// Display the total cost
cout << "The total cost of the purchase is: " << totalCost << endl;
cout << "You saved $ " << totalsavings << " dollars today. " << endl; 

// debug
//cout << "discount cost: " << discountCost << endl;
//cout << "discount percentage: " << discountPct << endl;
//cout << "units sold: " << unitsSold << endl;


return 0;

} 