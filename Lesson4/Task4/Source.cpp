#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	constexpr int numberOfRows = 11;
	constexpr int numberOfColumns = 16;
	
	ifstream inFile("maze.txt");

	char maze[numberOfRows][numberOfColumns];

	if (inFile.is_open())
	{
		string fileLine;

		int rowNumber = 0;

		while (getline(inFile, fileLine))
		{
			for (int i = 0; i < numberOfColumns; i++)
			{
				maze[rowNumber][i] = fileLine[i];
			}

			rowNumber++;
		}

		inFile.close();
	}
	else
	{
		cout << "File not found!" << '\n';
	}

	for (int i = 0; i < numberOfRows; i++)
	{
		for (int j = 0; j < numberOfColumns; j++)
		{
			cout << maze[i][j];
		}

		cout << '\n';
	}

	return 0;
}