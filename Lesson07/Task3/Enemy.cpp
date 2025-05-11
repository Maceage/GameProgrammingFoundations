#include "Enemy.h"
#include "Player.h"

#include <iostream>

void Enemy::EnemyTurn(Player& player, Enemy& enemy)
{
	std::cout << enemy.GetName() << " attacks!\n";

	Enemy::EnemyAttack(player, enemy);
}

void Enemy::EnemyAttack(Player& player, Enemy& enemy)
{
	std::cout << enemy.GetName() << " attacks " << player.GetName() << "!\n";

	int damage = enemy.GetAttack() - player.GetDefense();

	if (damage > 0)
	{
		player.SetHealth(player.GetHealth() - damage);

		std::cout << player.GetName() << " takes " << damage << " damage!\n\n";
	}
	else
	{
		std::cout << "The attack was ineffective!\n";
	}
}

std::string Enemy::GetName()
{
	return m_name;
}

int Enemy::GetHealth() const
{
	return m_health;
}

int Enemy::GetAttack() const
{
	return m_attack;
}

int Enemy::GetDefense() const
{
	return m_defense;
}

void Enemy::SetName(const std::string& name)
{
	m_name = name;
}

void Enemy::SetHealth(int health)
{
	m_health = health;
}
