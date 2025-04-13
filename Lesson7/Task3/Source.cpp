// Includes
#include <iostream>
#include <string>
#include <vector>

// Structs
struct Player
{
    std::string name;
    int health = 100;
    int attack = 20;
    int defense = 10;
};

struct Enemy
{
    std::string name;
    int health = 80;
    int attack = 15;
    int defense = 8;
};

// Function Declarations
void PlayerAttack(Player& player, Enemy& enemy);
void EnemyAttack(Player& player, Enemy& enemy);
void PlayerTurn(Player& player, std::vector<Enemy>& enemies);
void EnemyTurn(Player& player, Enemy& enemy);
void GameLoop(Player& player, std::vector<Enemy>& enemies);

int main()
{
    Player Player1;
    Player1.name = "Hero";

    std::vector<Enemy> Enemies;

    Enemy Enemy1;
    Enemy1.name = "Goblin";
    Enemies.push_back(Enemy1);

    Enemy Enemy2;
    Enemy2.name = "orc";
    Enemies.push_back(Enemy2);

    std::cout << "Welcome to the dungeon!\n";
    GameLoop(Player1, Enemies);
    std::cout << "Game Over!\n";
    return 0;
}

void PlayerAttack(Player& player, Enemy& enemy)
{
    std::cout << player.name << " attacks " << enemy.name << "!\n";
    int damage = player.attack - enemy.defense;
    if (damage > 0)
    {
        enemy.health -= damage;
        std::cout << enemy.name << " takes " << damage << " damage!\n\n";
    }
    else
    {
        std::cout << "The attack was ineffective!\n\n";
    }
}

void EnemyAttack(Player& player, Enemy& enemy)
{
    std::cout << enemy.name << " attacks " << player.name << "!\n";
    int damage = enemy.attack - player.defense;
    if (damage > 0)
    {
        player.health -= damage;
        std::cout << player.name << " takes " << damage << " damage!\n\n";
    }
    else
    {
        std::cout << "The attack was ineffective!\n";
    }
}

void PlayerTurn(Player& player, std::vector<Enemy>& enemies)
{
    std::cout << "1. Attack\n2. Defend\n3. Run\n";
    std::cout << "Your choice: ";
    int choice;
    std::cin >> choice;
    std::cout << std::endl;

    if (choice == 1)
    {
        std::cout << "Choose an enemy to attack:\n";
        for (size_t i = 0; i < enemies.size(); ++i)
        {
            if (enemies[i].health > 0)
            {
                std::cout << i + 1 << ". " << enemies[i].name << " (Health: " << enemies[i].health << ")\n";
            }
        }

        int enemyChoice;
        std::cin >> enemyChoice;
        if (enemyChoice >= 1 && enemyChoice <= enemies.size() && enemies[enemyChoice - 1].health > 0)
        {
            PlayerAttack(player, enemies[enemyChoice - 1]);
        }
        else
        {
            std::cout << "Invalid choice!\n";
        }
    }
    else if (choice == 2)
    {
        std::cout << player.name << " defends!\n";
    }
    else if (choice == 3)
    {
        std::cout << player.name << " runs away!\n";
    }
}

void EnemyTurn(Player& player, Enemy& enemy)
{
    std::cout << enemy.name << " attacks!\n";
    EnemyAttack(player, enemy);
}

void GameLoop(Player& player, std::vector<Enemy>& enemies)
{
    bool gameOver = false;
    while (!gameOver)
    {
        PlayerTurn(player, enemies);

        bool allEnemiesDefeated = true;
        for (auto& enemy : enemies)
        {
            if (enemy.health > 0)
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
            if (enemy.health > 0)
            {
                EnemyTurn(player, enemy);
                if (player.health <= 0)
                {
                    std::cout << player.name << " has fallen!\n";
                    gameOver = true;
                    break;
                }
            }
        }
    }
}
