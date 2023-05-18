#include <iostream>
#include "tempConversion.h"
#include <limits>
using namespace std;

long double valueVerification();
char characterVerification();

int main()
{
    tempConversion TC(characterVerification(), valueVerification());
    cout << endl << TC.getFahrenheit() << " \370F" << endl << TC.getCelsius() << " \370C" << endl << TC.getKelvin() << " \370K";
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
    char startingUnit;
     do {
        cout << "Please enter in the units you would like to start with (\370F, \370C, \370K): ";
        cin >> startingUnit;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore the remaining input
        startingUnit = toupper(startingUnit);
     } while (startingUnit != 'F' && startingUnit != 'C' && startingUnit != 'K');
    return startingUnit;
}