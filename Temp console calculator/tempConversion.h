#pragma once
#include <string>

class tempConversion {
private:
	long double startingValue, F, C, K;
	char startingUnit, convertingUnit;

	long double FahrenheitToCelsius();
	long double CelsiusToFahrenheit();
	long double KelvinToCelsius();
	long double CelsiusToKelvin();

public:
	tempConversion(char S, long double sV);
	std::string getFahrenheit();
	std::string getCelsius();
	std::string getKelvin();
};