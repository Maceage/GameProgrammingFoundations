#include <iostream>

using namespace std;

int main()
{
	double lengthInches;

	cout << "Enter the length in inches: ";
	cin >> lengthInches;

	double lengthFeet = lengthInches / 12;

	double lengthMetres = lengthInches * 0.0254;

	cout << "Length " << lengthInches << " is equal to " << lengthFeet << " feet and " << lengthMetres << " metres";

	return 0;
}