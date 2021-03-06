//  eggs.cpp
//  Lab07
//  Created by: D'Mitri Scott, Destiny McManimie, and Ezrie Ward.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    cout << "EGG STATISTIS\n\n";
    string moreEggs = ""; //initializing string for while loop condition check to keep adding egg weights
    while (moreEggs != "N" || moreEggs != "n") {      //While loop for egg weight inputs
        
        int i=0, numEgg=1; //initialization of iteration variable and number of eggs
        double eggWeight, weightTotal=0, eggs[] {}; //Initialization of egg statistics
        double bigEgg = eggs[0]; //initializing variable that will hold heaviest egg
        
        for (i=0; i<=numEgg;) { //Loop for adding new eggs as long as user input keeps saying yes
            
            cout << "Please enter an egg weight in grams: ";
            cin >> eggWeight;
            eggs[i] = eggWeight; //adding new egg weight to array
            weightTotal+=eggs[i];  //recurring weight total after new egg weight added
            
            if (bigEgg < eggs[i]) { //condition to make bigEgg variable to hold the heaviest egg
                bigEgg = eggs[i];
            }
            
            cout << "Do you have more eggs (Y/N)? "; cin >> moreEggs; // Keep adding eggs to array if there are more
            cout << "\n";
            
            if (moreEggs == "Y" || moreEggs == "y") {  //increasing numEgg to keep For loop running if there are more eggs
                numEgg+=1;
            }
            else {  //Will end the loop and output egg stats
                double eggMean;
                if (moreEggs == "N" || moreEggs == "n") {
                    eggMean = weightTotal/numEgg;
                    cout << "Alrighty, here are your egg statistics!\n\n";
                    cout << "Total number of eggs: " << numEgg << " egg(s)" << endl;
                    cout << "Average egg weight: " << fixed << setprecision(1) << eggMean << " grams" << endl;
                    cout << "Largest egg: " << fixed << setprecision(1) << bigEgg << " grams" << "\n\n";
                    return 0;
                }
            }
        }
    }
}
