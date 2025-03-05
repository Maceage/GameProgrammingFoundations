#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x1, y1, x2, y2;

	cout << "Enter co-ordinate x1: ";
	cin >> x1;

	cout << "Enter co-ordinate y1: ";
	cin >> y1;

	cout << "Enter co-ordinate x2: ";
	cin >> x2;

	cout << "Enter co-ordinate y2: ";
	cin >> y2;

	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	cout << "Distance between (" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << distance;

	return 0;
}