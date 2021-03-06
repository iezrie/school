//cash.cpp
//Lab07
// Created by: Destiny McManimie, D'Mitri Scott, and Ezrie Ward.

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double PRICE=10.0;
    double TOTAL = 0.0;
    double GRANDTOTAL;
    cout << setprecision(2) << fixed;
    { 
        while (PRICE != 0)
        {
            cout << "Input the price of an item, then hit enter." << endl;
            cout << "If finished hit 0 " << endl;
            cin >> PRICE;
            TOTAL = TOTAL + PRICE;
        }

        //0.08 is the tax
        GRANDTOTAL = (TOTAL * 0.08) + TOTAL;
    }
cout << "Your grand total with tax is $" << GRANDTOTAL << endl;



system("PAUSE");
return 0;
}