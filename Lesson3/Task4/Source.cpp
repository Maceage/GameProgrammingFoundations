#include <iostream>

using namespace std;

int main()
{
	int numberOfDiamonds = 0;

	cout << "Enter an integer number: " << '\n';
	cin >> numberOfDiamonds;

	for (int i = 1; i <= numberOfDiamonds; i++)
	{
		for (int j = 1; j <= numberOfDiamonds - i; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}

		cout << '\n';
	}

	for (int i = numberOfDiamonds - 1; i >= 1; i--)
	{
		for (int j = 1; j <= numberOfDiamonds - i; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << "*";
		}

		cout << '\n';
	}
}