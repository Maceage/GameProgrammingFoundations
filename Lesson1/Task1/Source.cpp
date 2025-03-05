#include <iostream>

using namespace std;

int main()
{
	int numberOne, numberTwo, numberThree;

	cout << "Enter the first number: ";
	cin >> numberOne;

	cout << "Enter the second number: ";
	cin >> numberTwo;

	cout << "Enter the third number: ";
	cin >> numberThree;

	int total = numberOne + numberTwo + numberThree;

	double average = total / 3;

	cout << "Average of numbers is: " << average;

	return 0;
}