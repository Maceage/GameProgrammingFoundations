#include <iostream>

using namespace std;

int IncrementByOne(int i)
{
	return i + 1;
}

int MultiplyByTwo(int i)
{
	return i * 2;
}

int IncrementByFour(int i)
{
	return i + 4;
}

int DivideByTwo(int i)
{
	return i / 2;
}

int SubtractOriginalNumber(int i, int originalNum)
{
	return i - originalNum;
}

int main()
{
	int i = 0;

	cout << "Enter a number: ";
	cin >> i;

	int originalNum = i;

	i = IncrementByOne(i);
	cout << "Increment by one: " << i << '\n';

	i = MultiplyByTwo(i);
	cout << "Multiply by two: " << i << '\n';

	i = IncrementByFour(i);
	cout << "Increment by four: " << i << '\n';

	i = DivideByTwo(i);
	cout << "Divide by two: " << i << '\n';

	i = SubtractOriginalNumber(i, originalNum);
	cout << "Subtract original number: " << i << '\n';

	return 0;
}