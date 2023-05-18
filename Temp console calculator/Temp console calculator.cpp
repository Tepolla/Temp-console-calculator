#include <iostream>
#include "tempConversion.h"
#include <limits>
using namespace std;

long double valueVerification();
char characterVerification();

int main()
{
    long double startingValue = 0.0;
    char startingUnit;

    
    tempConversion TC(characterVerification(), valueVerification());
    cout << endl << TC.getFahrenheit() << endl << TC.getCelsius() << endl << TC.getKelvin();

    return 0;
}
long double valueVerification() {
    long double startingValue;

    cout << "Please enter a value: ";
    while (!(cin >> startingValue)) {
        cout << "Please enter a value: ";
        cin.clear();  // Clear the fail state
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the remaining input
    }

    return startingValue;
}

char characterVerification() {
    char startingUnit = 'L';
     do {
        cout << "Please enter in the units you would like to start with (\370F, \370C, \370K): ";
        cin >> startingUnit;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the remaining input
        startingUnit = toupper(startingUnit);
     } while (startingUnit != 'F' && startingUnit != 'C' && startingUnit != 'K');
    return startingUnit;
}