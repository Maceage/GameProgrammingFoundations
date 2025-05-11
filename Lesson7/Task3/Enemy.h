#pragma once
#include <string>

#include "Player.h"

class Enemy
{
    std::string m_name;
    int m_health = 80;
    int m_attack = 15;
    int m_defense = 8;

public:
    std::string GetName();
    int GetHealth() const;
    int GetAttack() const;
    int GetDefense() const;

    void SetName(const std::string& name);
    void SetHealth(int health);

    static void EnemyTurn(Player& player, Enemy& enemy);
    static void EnemyAttack(Player&player, Enemy& enemy);
};
