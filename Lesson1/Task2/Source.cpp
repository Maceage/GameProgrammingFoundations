#include <iostream>

using namespace std;

int main()
{
	double lengthInches;

	cout << "Enter the length in inches: ";
	cin >> lengthInches;

	double lengthFeet = lengthInches / 12;

	cout << "Length " << lengthInches << " is equal to " << lengthFeet << " feet";

	return 0;
}