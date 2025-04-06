#include <iostream>
#include <vector>

using namespace std;

constexpr int NUMBER_OF_INTS = 10;

vector<int> bubble_sort(vector<int> ints);

int main()
{
	srand(time(nullptr));

	vector<int> random_ints;

	for (int i = 0; i <= NUMBER_OF_INTS - 1; i++)
	{
		random_ints.push_back(rand() % 100 + 1);
	}

	cout << "Random integers:\n";

	for (int random_int : random_ints)
	{
		cout << random_int << ",";
	}

	random_ints = bubble_sort(random_ints);

	cout << "\nSorted integers:\n";

	for (int random_int : random_ints)
	{
		cout << random_int << ",";
	}

	return 0;
}

vector<int> bubble_sort(vector<int> ints)
{
	bool swapped = false;

	do
	{
		swapped = false;

		int size = ints.size();

		for (int i = 1; i <= size - 1; i++)
		{
			if (ints[i - 1] > ints[i])
			{
				int left = ints[i - 1];
				int right = ints[i];

				ints[i] = left;
				ints[i - 1] = right;
				
				swapped = true;
			}
		}
	} while (swapped);

	return ints;
}