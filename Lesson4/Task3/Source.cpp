#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	constexpr int numberOfCharacters = 26;

	ifstream inFile("alphabet.txt");

	char lowercaseChars[numberOfCharacters];

	if (inFile.is_open())
	{
		int currentChar = 0;

		while (!inFile.eof())
		{
			inFile >> lowercaseChars[currentChar];
			currentChar++;
		}

		inFile.close();
	}
	else
	{
		cout << "File not found!" << '\n';
	}

	char uppercaseChars[numberOfCharacters];

	for (int i = 0; i < numberOfCharacters; i++)
	{
		constexpr int asciiOffset = 32;

		uppercaseChars[i] = lowercaseChars[i] - asciiOffset;
	}

	ofstream outFile("alphabet_uppercase.txt");

	if (outFile.is_open())
	{
		for (int i = 0; i < numberOfCharacters; i++)
		{
			outFile << uppercaseChars[i] << '\n';
		}

		outFile.close();
	}
	else
	{
		cout << "File not found!" << '\n';
	}
}