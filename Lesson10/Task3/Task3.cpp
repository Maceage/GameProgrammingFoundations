#include <chrono>
#include <iostream>
#include <sstream>
#include <vector>

static std::vector<int> BubbleSort(std::vector<int>& integersVector)
{
	bool swapped;

	do
	{
		swapped = false;

		for (unsigned long long i = 1; i < integersVector.size(); i++)
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

std::vector<int> Slice(std::vector<int>& integersVector, int x, int y)
{
	auto start = integersVector.begin() + x;
	auto end = integersVector.begin() + y + 1;

	std::vector<int> result(y - x + 1);

	copy(start, end, result.begin());

	return result;
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

static void DoBubbleSort(std::vector<int>& integersVector)
{
	std::vector<int> sortedIntegers = BubbleSort(integersVector);

	std::string integerString = ToString(sortedIntegers);

	std::cout << "Sorted integers...\n\n";
	std::cout << integerString << "\n\n";
}

int main()
{
	int numberOfIntegers = 10000;
	
	std::vector<int> integers;

	integers.reserve(numberOfIntegers);

	for (int i = 0; i < numberOfIntegers; i++)
	{
		integers.push_back(rand());
	}

	std::string integerString = ToString(integers);

	std::cout << numberOfIntegers << " integers created:\n\n";
	std::cout << integerString << "\n\n";

	std::chrono::system_clock::time_point startTime = std::chrono::system_clock::now();

	std::cout << "Bubble sorting " << numberOfIntegers << " integers...\n";
	DoBubbleSort(integers);

	std::chrono::system_clock::time_point endTime = std::chrono::system_clock::now();

	int halfNumberOfIntegers = numberOfIntegers / 2;

	std::vector<int> halfIntegers = Slice(integers, 0, halfNumberOfIntegers);

	std::chrono::system_clock::time_point startTimeHalf = std::chrono::system_clock::now();

	std::cout << "Bubble sorting " << halfNumberOfIntegers << " integers...\n";
	DoBubbleSort(integers);

	std::chrono::system_clock::time_point endTimeHalf = std::chrono::system_clock::now();

	long long bubbleSortTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();
	long long bubbleSortHalfTime = std::chrono::duration_cast<std::chrono::milliseconds>(endTimeHalf - startTimeHalf).count();

	std::cout << "Bubble sort O(" << numberOfIntegers << "): " << bubbleSortTime << "ms\n";
	std::cout << "Bubble sort O(" << halfNumberOfIntegers << "): " << bubbleSortHalfTime << "ms\n";

	return 0;
}