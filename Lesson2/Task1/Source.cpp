#include <iostream>

using namespace std;

int main()
{
	// Variables
	int firstNumber = 0;
	int secondNumber = 0;

	// Ask the user to enter two numbers
	cout << "Enter a first whole number (1-10): ";
	cin >> firstNumber;

	cout << "\nEnter a second whole number (1-10): ";
	cin >> secondNumber;

	if (firstNumber >= 1 && firstNumber <= 10
		&& secondNumber >= 1 && secondNumber <= 10)
	{
		int result = 0;
		int operationChoice = 0;

		// Ask the user which operation they would like to perform
		cout << "Select an operation to perform on the two numbers:\n";
		cout << "1. Addition\n";
		cout << "2. Subtraction\n";
		cout << "3. Multiplication\n";
		cout << "4. Division\n\n";

		cout << "User entered: ";
		cin >> operationChoice;

		// Perform the selected operation
		switch (operationChoice)
		{
			case 1: // Addition
			{
				result = firstNumber + secondNumber;
				break;
			}
			case 2: // Subtraction
			{
				result = firstNumber - secondNumber;
				break;
			}
			case 3: // Multiplication
			{
				result = firstNumber * secondNumber;
				break;
			}
			case 4: // Division
			{
				result = firstNumber / secondNumber;
				break;
			}
			default: // Invalid operation
			{
				cout << "Invalid operation selected\n\n";
				break;
			}
		}

		// Print out the result of the division
		std::cout << "\nThe result is: " << result << "\n\n";
	}
	else
	{
		std::cout << "Invalid input. Please enter a whole number between 1 and 10.\n\n";
	}

	return 0;
}