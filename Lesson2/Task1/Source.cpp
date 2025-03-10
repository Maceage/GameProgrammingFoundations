#include <iostream>

int main()
{
	// Variables
	int firstNumber = 0;
	int secondNumber = 0;
	int operationChoice = 0;
	int result = 0;

	// Ask the user to enter two numbers
	std::cout << "Enter a first whole number (1-10): ";
	std::cin >> firstNumber;

	std::cout << "\nEnter a second whole number (1-10): ";
	std::cin >> firstNumber;

	if (firstNumber >= 1 && firstNumber < 10
		&& secondNumber >= 1 && secondNumber < 10)
	{
		// Ask the user which operation they would like to perform
		std::cout << "Select an operation to perform on the two numbers:\n";
		std::cout << "1. Addition\n";
		std::cout << "2. Subtraction";
		std::cout << "3. Multiplcation\n";
		std::cout << "4. Division\n\n";

		std::cout << "User entered: ";
		cin >> operationChoice;

		// Perform the selected operation
		switch (operationChoice)
		{
		case 1: // Addition
		{
			result = firstNumber + secondNumber;
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
		}

		// Print out the result of the division
		std::cout << "\nThe result is: " << Result << "\n\n";
	}

	return 0;
}