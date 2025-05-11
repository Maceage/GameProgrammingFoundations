#include <iostream>

using namespace std;

int main()
{
	int score = 0;

	cout << "Enter a grade between 0 and 100: ";
	cin >> score;

    if (score > 80)
    {
		cout << "A*";
	}
	else if (score >= 70 && score <= 79)
	{
		cout << "A";
	}
	else if (score >= 60 && score <= 69)
	{
		cout << "B";
	}
	else if (score >= 50 && score <= 59)
	{
		cout << "C";
	}
	else if (score >= 40 && score <= 49)
	{
		cout << "D";
	}
	else if (score >= 1 && score <= 39)
	{
		cout << "F";
	}
	else if (score == 0)
	{
		cout << "U";
	}
	else
	{
		cout << "Invalid grade";
    }

	return 0;
}