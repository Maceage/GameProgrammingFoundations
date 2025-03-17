#include <iostream>

using namespace std;

int main()
{
	int currentNumber = 0;
	int currentIterations = 0;

	while (currentNumber != 5)
	{
		currentIterations++;

		cout << "Enter a number: ";
		cin >> currentNumber;

		if (currentNumber == 5)
		{
			cout << "Hey you weren't supposed to enter 5!" << '\n';
			break;
		}

		if (currentIterations > 10)
		{
			cout << "Wow, you're more patient than I am, you win." << '\n';
			break;
		}

		cout << "You entered " << currentNumber << "." << '\n';
	}
}