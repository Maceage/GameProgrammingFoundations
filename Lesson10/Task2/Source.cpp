#include <iostream>
#include <sstream>
#include <vector>

static std::string ToString(const std::vector<int>& integersVector)
{
	std::stringstream integerStream;

	for (int integer : integersVector)
	{
		integerStream << integer << ",";
	}

	std::string integerString;
	integerStream >> integerString;

	return integerString;
}

int main()
{
	std::vector<int> integers;

	std::cout << "Enter a number or enter 0 to continue.\n\n";

	int number;

	do
	{
		std::cout << "Enter a number:\n";
		std::cin >> number;

		if (number != 0)
		{
			integers.push_back(number);
		}
	}
	while (number != 0);

	std::string integersString = ToString(integers);
	std::cout << "You entered the following numbers:\n";
	std::cout << integersString << "\n\n";

	std::cout << "Enter a number to find in the list:\n";
	std::cin >> number;

	int numberIndex = -1;

	for (int i = 0; i < integers.size(); i++)
	{
		if (integers[i] == number)
		{
			numberIndex = i;
			break;;
		}
	}

	if (numberIndex > -1)
	{
		std::cout << "Number " << number << " found at index " << numberIndex;
	}
	else
	{
		std::cout << "Number " << number << " not found in the list";
	}

	return 0;
}
