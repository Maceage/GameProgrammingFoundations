#include <iostream>
#include <string>
#include <vector>

#include "Enemy.h"
#include "Game.h"

int main()
{
    Player Player1;
    Player1.SetName("Hero");

    std::vector<Enemy> Enemies;

    Enemy Enemy1;
    Enemy1.SetName("Goblin");
    Enemies.push_back(Enemy1);

    Enemy Enemy2;
    Enemy2.SetName("orc");
    Enemies.push_back(Enemy2);

    std::cout << "Welcome to the dungeon!\n";
    Game::GameLoop(Player1, Enemies);
    std::cout << "Game Over!\n";

    return 0;
}
