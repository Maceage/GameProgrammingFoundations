#include <iostream>

int main()
{
	int numEntered = 0;

	std::cout << "Enter a whole number between 1 and 10: ";

	std::cin >> numEntered;

	std::cout << "\n";

	int finalResult = numEntered + 3;
	std::cout << "The number entered plus three equals: " << finalResult << "\n";

	return 0;
}