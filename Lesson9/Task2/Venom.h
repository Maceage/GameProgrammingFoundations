#pragma once
#include <string>
#include "Spiderman.h"

class Venom
{
public:
	Venom();
	Venom(int inHealth);

	~Venom();

	std::string GetName();
	int GetHealth() const;

	void AccessSpidermanHealth();

private:
	Spiderman spiderman;
};
