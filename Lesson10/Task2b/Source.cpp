#include <algorithm>
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

static int BinarySearch(const std::vector<int>& integersVector, int target)
{
	int low = 0;
	int high = integersVector.size() - 1;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (integersVector[mid] == target)
		{
			return mid;
		}

		if (integersVector[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}

	return -1;
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
	} while (number != 0);

	std::sort(integers.begin(), integers.end());

	std::string integersString = ToString(integers);
	std::cout << "You entered the following numbers:\n";
	std::cout << integersString << "\n\n";

	std::cout << "Enter a number to find in the list:\n";
	std::cin >> number;

	int numberIndex = BinarySearch(integers, number);

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
