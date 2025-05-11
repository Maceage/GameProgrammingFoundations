#include <iostream>
#include <sstream>
#include <unordered_set>
#include <vector>

static std::vector<int> BubbleSort(std::vector<int>& integersVector)
{
	bool swapped;

	do
	{
		swapped = false;

		for (int i = 1; i < integersVector.size(); i++)
		{
			if (integersVector[i - 1] > integersVector[i])
			{
				std::swap(integersVector[i - 1], integersVector[i]);
				swapped = true;
			}
		}
	} while (swapped);

	return integersVector;
}

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
	int numberOfIntegers = 10;

	std::vector<int> integers;

	integers.reserve(numberOfIntegers);

	for (int i = 0; i < numberOfIntegers; i++)
	{
		integers.push_back(rand());
	}

	std::string integerString = ToString(integers);

	std::cout << numberOfIntegers << " integers created:\n\n";
	std::cout << integerString << "\n\n";

	std::cout << "Bubble sorting integers...\n";
	std::vector<int> sortedIntegers = BubbleSort(integers);

	integerString = ToString(sortedIntegers);

	std::cout << "Sorted integers...\n\n";
	std::cout << integerString << "\n\n";
}