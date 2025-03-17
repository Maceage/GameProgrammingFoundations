#include <iostream>
#define ARRAY_SIZE 20

using namespace std;

static int sumOfAllValues(int valuesArray[], int arraySize)
{
	int sum = 0;

	for (int i = 0; i < arraySize; i++)
	{
		sum += valuesArray[i];
	}

	return sum;
}

static int getLargestValue(int valuesArray[], int arraySize)
{
	int largestValue = valuesArray[0];

	for (int i = 1; i < arraySize; i++)
	{
		if (valuesArray[i] > largestValue)
		{
			largestValue = valuesArray[i];
		}
	}

	return largestValue;
}

static int getSmallestValue(int valuesArray[], int arraySize)
{
	int smallestValue = valuesArray[0];

	for (int i = 1; i < arraySize; i++)
	{
		if (valuesArray[i] < smallestValue)
		{
			smallestValue = valuesArray[i];
		}
	}

	return smallestValue;
}

static int getNumberOfOddValues(int valuesArray[], int arraySize)
{
	int numberOfOddValues = 0;

	for (int i = 0; i < arraySize; i++)
	{
		if (valuesArray[i] % 2 != 0)
		{
			numberOfOddValues++;
		}
	}

	return numberOfOddValues;
}

int main()
{
	int arraySize = ARRAY_SIZE;

	int values[ARRAY_SIZE];
	int currentIndex = 0;

	do
	{
		cout << "Enter value " << currentIndex + 1 << ": ";
		cin >> values[currentIndex];
		currentIndex++;
	}
	while (currentIndex < ARRAY_SIZE);

	int sum = sumOfAllValues(values, arraySize);
	cout << "Sum of all values: " << sum << '\n';

	float average = (float)sum / arraySize;
	cout << "Average of all values: " << average << '\n';

	int largestValue = getLargestValue(values, arraySize);
	cout << "Largest value: " << largestValue << '\n';

	int smallestValue = getSmallestValue(values, arraySize);
	cout << "Smallest value: " << smallestValue << '\n';

	int numberOfOddValues = getNumberOfOddValues(values, arraySize);
	int numberOfEvenValues = arraySize - numberOfOddValues;
	cout << "Number of odd values: " << numberOfOddValues << '\n';
	cout << "Number of even values: " << numberOfEvenValues << '\n';

	return 0;
}