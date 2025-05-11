#include <iostream>

using namespace std;

int main()
{
	int numberOne, numberTwo, numberThree, numberFour, numberFive;

	cout << "Enter the first number: ";
	cin >> numberOne;

	cout << "Enter the second number: ";
	cin >> numberTwo;

	cout << "Enter the third number: ";
	cin >> numberThree;

	cout << "Enter the fourth number: ";
	cin >> numberFour;

	cout << "Enter the fifth number: ";
	cin >> numberFive;

	int total = numberOne + numberTwo + numberThree + numberFour + numberFive;

	double average = total / 5;

	cout << "Average of numbers is: " << average;

	return 0;
}