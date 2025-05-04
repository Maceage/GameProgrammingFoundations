#include "Spiderman.h"

Spiderman::Spiderman() : Spiderman(0)
{
}

Spiderman::Spiderman(int inHealth)
{
	name = "Peter Parker";
	health = inHealth;
}

std::string Spiderman::GetName()
{
	return name;
}

int Spiderman::GetHealth() const
{
	return health;
}

Spiderman::~Spiderman()
= default;