#include "Player.h"
#include "Enemy.h"

#include <iostream>
#include <vector>

void Player::PlayerTurn(Player& player, std::vector<Enemy>& enemies)
{
	std::cout << "1. Attack\n2. Defend\n3. Run\n";
	std::cout << "Your choice: ";
	int choice;
	std::cin >> choice;
	std::cout << '\n';

	if (choice == 1)
	{
		std::cout << "Choose an enemy to attack:\n";
		for (size_t i = 0; i < enemies.size(); ++i)
		{
			if (enemies[i].GetHealth() > 0)
			{
				std::cout << i + 1 << ". " << enemies[i].GetName() << " (Health: " << enemies[i].GetHealth() << ")\n";
			}
		}

		int enemyChoice;
		std::cin >> enemyChoice;

		if (enemyChoice >= 1 && enemyChoice <= enemies.size() && enemies[enemyChoice - 1].GetHealth() > 0)
		{
			Player::PlayerAttack(player, enemies[enemyChoice - 1]);
		}
		else
		{
			std::cout << "Invalid choice!\n";
		}
	}
	else if (choice == 2)
	{
		std::cout << player.GetName() << " defends!\n";
	}
	else if (choice == 3)
	{
		std::cout << player.GetName() << " runs away!\n";
	}
}

void Player::PlayerAttack(Player& player, Enemy& enemy)
{
	std::cout << player.GetName() << " attacks " << enemy.GetName() << "!\n";

	int damage = player.GetAttack() - enemy.GetDefense();

	if (damage > 0)
	{
		enemy.SetHealth(enemy.GetHealth() - damage);

		std::cout << enemy.GetName() << " takes " << damage << " damage!\n\n";
	}
	else
	{
		std::cout << "The attack was ineffective!\n\n";
	}
}

std::string Player::GetName()
{
	return m_name;
}

int Player::GetHealth() const
{
	return m_health;
}

int Player::GetAttack() const
{
	return m_attack;
}

int Player::GetDefense() const
{
	return m_defense;
}

void Player::SetName(const std::string& name)
{
	m_name = name;
}

void Player::SetHealth(int health)
{
	m_health = health;
}
