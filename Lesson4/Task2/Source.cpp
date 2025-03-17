#include <iostream>

using namespace std;

static int sumOfAllValues(int valuesArray[])
{
	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum += valuesArray[i];
	}

	return sum;
}

static int getLargestValue(int valuesArray[])
{
	int largestValue = valuesArray[0];

	for (int i = 1; i < 10; i++)
	{
		if (valuesArray[i] > largestValue)
		{
			largestValue = valuesArray[i];
		}
	}

	return largestValue;
}

static int getSmallestValue(int valuesArray[])
{
	int smallestValue = valuesArray[0];

	for (int i = 1; i < 10; i++)
	{
		if (valuesArray[i] < smallestValue)
		{
			smallestValue = valuesArray[i];
		}
	}

	return smallestValue;
}

static int getNumberOfOddValues(int valuesArray[])
{
	int numberOfOddValues = 0;

	for (int i = 0; i < 10; i++)
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
	int values[10];
	int currentIndex = 0;

	do
	{
		cout << "Enter value " << currentIndex + 1 << ": ";
		cin >> values[currentIndex];
		currentIndex++;
	}
	while (currentIndex < 10);

	int sum = sumOfAllValues(values);
	cout << "Sum of all values: " << sum << '\n';

	float average = (float)sum / 10;
	cout << "Average of all values: " << average << '\n';

	int largestValue = getLargestValue(values);
	cout << "Largest value: " << largestValue << '\n';

	int smallestValue = getSmallestValue(values);
	cout << "Smallest value: " << smallestValue << '\n';

	int numberOfOddValues = getNumberOfOddValues(values);
	int numberOfEvenValues = 10 - numberOfOddValues;
	cout << "Number of odd values: " << numberOfOddValues << '\n';
	cout << "Number of even values: " << numberOfEvenValues << '\n';

	return 0;
}