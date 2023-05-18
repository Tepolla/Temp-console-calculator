// Temp console calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "tempConversion.h"
using namespace std;

int main()
{
    long double startingValue = 0.0;
    char startingUnit;

    cout << "Please enter in a value: ";
    cin >> startingValue;
    cout << "Please enter in the units you would like to start with (\370F, \370C, \370K): ";
    cin >> startingUnit;
    tempConversion TC(startingUnit, startingValue);
    cout << endl << TC.getFahrenheit() << endl << TC.getCelsius() << endl << TC.getKelvin();

    return 0;
}