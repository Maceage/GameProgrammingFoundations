#include <iostream>

#define INCHES_PER_FOOT 12;
#define METRE_PER_INCH 0.0254;

using namespace std;

int main()
{
	double lengthInches;

	cout << "Enter the length in inches: ";
	cin >> lengthInches;

	double lengthFeet = lengthInches / INCHES_PER_FOOT

	double lengthMetres = lengthInches * METRE_PER_INCH

	cout << "Length " << lengthInches << " is equal to " << lengthFeet << " feet and " << lengthMetres << " metres";

	return 0;
}