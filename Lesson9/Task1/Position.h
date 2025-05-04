#pragma once

class Position
{
public:
	Position();
	Position(float inX, float inY);

	~Position();

	Position operator+(const Position& other) const
	{
		return Position(X + other.X, Y + other.Y);
	}

	bool operator ==(const Position& other) const
	{
		return ((X == other.X) && (Y == other.Y));
	}

	Position& operator=(const Position& other)
	{
		X = other.X;
		Y = other.Y;

		return *this;
	}

private:
	float X;
	float Y;
};