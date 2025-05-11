#include <iostream>

using namespace std;

int main()
{
	int direction = 0;
	int action = 0;

	cout << "You reach a fork in the road, do you go:\n";
	cout << "1. North - To the forest\n";
	cout << "2. East - To the mines\n";
	cout << "3. South - To the desert\n";
	cout << "4. West - To the city\n\n";

	cin >> direction;

	cout << "\nYou entered: " << direction << "\n";

	switch (direction)
	{
		case 1: // North
		{
			cout << "As you stroll through the forest you are attacked by bandits! What do you do?\n";

			cout << "1. Fight\n";
			cout << "2. Throw a smoke bomb\n";
			cout << "3. Try to negotiate\n";
			cout << "4. Flee\n\n";

			cin >> action;
			break;
		}
		case 2: // East
		{
			cout << "You head east into the mines\n";
			cout << "As you head into the mines you are attacked by bandits! What do you do?\n";

			cout << "1. Fight\n";
			cout << "2. Throw a smoke bomb\n";
			cout << "3. Try to negotiate\n";
			cout << "4. Flee\n\n";

			cin >> action;
			break;
		}
		case 3: // South
		{
			cout << "As you stumble through the hot desert you are attacked by bandits! What do you do?\n";

			cout << "1. Fight\n";
			cout << "2. Throw a smoke bomb\n";
			cout << "3. Try to negotiate\n";
			cout << "4. Flee\n\n";

			cin >> action;
			break;
		}
		case 4: // West
		{
			cout << "You head west into the city\n";
			cout << "As you stroll through the forest you are attacked by bandits! What do you do?\n";

			cout << "1. Fight\n";
			cout << "2. Throw a smoke bomb\n";
			cout << "3. Try to negotiate\n";
			cout << "4. Flee\n\n";

			cin >> action;
			break;
		}
		default: // Invalid direction
		{
			cout << "Invalid direction selected\n\n";
			break;
		}
	}

	cout << "\nYou entered: " << action << "\n\n";

	if (action < 0 || action > 4)
	{
		cout << "Invalid action selected\n\n";
	}
	else if (action == 1)
	{
		cout << "You fight the bandits and emerge victorious!\n";
	}
	else if (action == 2)
	{
		cout << "You throw a smoke bomb and escape!\n";
	}
	else if (action == 3)
	{
		cout << "You try to negotiate with the bandits, but they attack you anyway!\n";
	}
	else if (action == 4)
	{
		cout << "You flee from the bandits and escape!\n";
	}

	return 0;
}