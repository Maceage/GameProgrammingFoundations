#pragma once
#include <string>

class Venom;

class Spiderman
{
	friend class Venom;

public:
	Spiderman();
	Spiderman(int inHealth);

	~Spiderman();

	std::string GetName();
	int GetHealth() const;

private:
	std::string name;
	int health;
};
