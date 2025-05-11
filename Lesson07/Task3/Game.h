#pragma once
#include <vector>

#include "Enemy.h"

class Game
{
public:
	static void GameLoop(Player& player, std::vector<Enemy>& enemies);
};

