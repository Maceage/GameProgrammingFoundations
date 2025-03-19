#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

constexpr int ESCAPE_KEYCODE = 27;

constexpr int numberOfRows = 11;
constexpr int numberOfColumns = 16;

int currentX = 0;
int currentY = 0;

bool hasKey = false;
bool hasWin = false;

char playerChar = '@';
char maze[numberOfRows][numberOfColumns];

enum KeyDirection :uint8_t
{
	Up = 72,
	Down = 80,
	Left = 75,
	Right = 77
};

void readFile()
{
	ifstream inFile("maze.txt");

	if (inFile.is_open())
	{
		string fileLine;

		int y = 0;

		while (getline(inFile, fileLine))
		{
			for (int x = 0; x < numberOfColumns; x++)
			{
				char currentChar = fileLine[x];

				maze[x][y] = currentChar;

				if (currentChar == 'S')
				{
					maze[x][y] = playerChar;

					currentX = x;
					currentY = y;
				}
			}

			y++;
		}

		inFile.close();
	}
	else
	{
		cout << "File not found!" << '\n';
	}
}

void renderMaze()
{
	system("cls");

	for (int y = 0; y < numberOfRows; y++)
	{
		for (int x = 0; x < numberOfColumns; x++)
		{
			cout << maze[x][y];
		}

		cout << '\n';
	}

	cout << '\n';

	if (!hasWin)
	{
		cout << "Player has key: " << (hasKey ? "Yes" : "No") << '\n';
	}
	else
	{
		cout << "YOU WIN!!!" << '\n';
		cout << "Press ESC to exit" << '\n';
	}
}

void moveTo(int nextX, int nextY)
{
	maze[currentX][currentY] = ' ';
	maze[nextX][nextY] = playerChar;

	currentX = nextX;
	currentY = nextY;
}

void moveDirection(const int keyCode)
{
	bool skipMove = false;

	int nextX = currentX;
	int nextY = currentY;

	switch (keyCode)
	{
		case Up:
			nextY--;
			break;
		case Down:
			nextY++;
			break;
		case Left:
			nextX--;
			break;
		case Right:
			nextX++;
			break;
		default:
			skipMove = true;
			break;
	}

	if (!skipMove)
	{
		bool isInboundsX = (nextX >= 0) && (nextX <= numberOfColumns);
		bool isInBoundsY = (nextY >= 0) && (nextY <= numberOfRows);

		if (isInboundsX && isInBoundsY)
		{
			char charAt = maze[nextX][nextY];

			switch (charAt)
			{
				case ' ':
					moveTo(nextX, nextY);
					break;
				case '-':
				case '|':
					if (hasKey)
					{
						moveTo(nextX, nextY);
					}
					break;
				case 'K':
					moveTo(nextX, nextY);
					hasKey = true;
					break;
				case 'E':
					moveTo(nextX, nextY);
					hasWin = true;
					break;
				default:
					break;
			}
		}
	}
}

int main()
{
	readFile();

	int keyCode;

	do
	{
		renderMaze();

		keyCode = _getch();

		if (!hasWin)
		{
			moveDirection(keyCode);
		}
	} while (keyCode != ESCAPE_KEYCODE);

	return 0;
}
