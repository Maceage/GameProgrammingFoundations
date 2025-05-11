#include "Game.h"

#include <iostream>

void Game::GameLoop(Player& player, std::vector<Enemy>& enemies)
{
    bool gameOver = false;

    while (!gameOver)
    {
	    Player::PlayerTurn(player, enemies);

        bool allEnemiesDefeated = true;

        for (auto& enemy : enemies)
        {
            if (enemy.GetHealth() > 0)
            {
                allEnemiesDefeated = false;
                break;
            }
        }

        if (allEnemiesDefeated)
        {
            std::cout << "All enemies are defeated! You win!\n";
            gameOver = true;
            break;
        }

        for (auto& enemy : enemies)
        {
            if (enemy.GetHealth() > 0)
            {
                Enemy::EnemyTurn(player, enemy);

                if (player.GetHealth() <= 0)
                {
                    std::cout << player.GetName() << " has fallen!\n";
                    gameOver = true;
                    break;
                }
            }
        }
    }
}
