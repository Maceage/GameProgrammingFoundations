#pragma once
#include <string>
#include <vector>

class Enemy;

class Player
{
    std::string m_name;
    int m_health = 100;
    int m_attack = 20;
    int m_defense = 10;

public:
    std::string GetName();
    int GetHealth() const;
    int GetAttack() const;
    int GetDefense() const;

    void SetName(const std::string& name);
    void SetHealth(int health);

    static void PlayerTurn(Player& player, std::vector<Enemy>& enemies);
    static void PlayerAttack(Player& player, Enemy& enemy);
};
