#include <iostream>

#include "Venom.h"

#include "Spiderman.h"

Venom::Venom() : Venom(0)
{
}

Venom::Venom(int inHealth)
{
	spiderman.health = inHealth;
}

int Venom::GetHealth() const
{
	return spiderman.health;
}

void Venom::AccessSpidermanHealth()
{
	std::cout << "Accessing Spiderman health " << spiderman.health << '\n';
}

Venom::~Venom()
= default;