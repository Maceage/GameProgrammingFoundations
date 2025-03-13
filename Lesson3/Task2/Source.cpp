#include <iostream>

using namespace std;

int GenerateRandomNumber()
{
	return rand() % 100 + 1;
}

bool IsEven(int number)
{
	return number % 2 == 0;
}

int main()
{
	int randomNumber = GenerateRandomNumber();

	cout << "Random number: " << randomNumber << '\n';

	bool isEven = IsEven(randomNumber);

	cout << (isEven ? "EVEN" : "ODD") << '\n';

	return 0;
}