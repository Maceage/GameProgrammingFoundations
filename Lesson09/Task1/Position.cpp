#include "Position.h"

Position::Position()
{
	X = 0;
	Y = 0;
}

Position::Position(float inX, float inY)
{
	X = inX;
	Y = inY;
}

Position::~Position()
= default;
