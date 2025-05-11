#include <iostream>

#include "Position.h"

int main()
{
    Position position1(123.123f, 456.456f);
    Position position2(456.456f, 123.123f);

    if (position1 == position2)
    {
        std::cout << "Positions are equal :)";
    }
    else
    {
        std::cout << "Positions are not equal :(";
    }

    Position position3(123.123f, 456.456f);
    Position position4(456.456f, 123.123f);

    Position addedPosition = position3 + position4;

    Position position5(789.879f, 789.789f);
    position5 = position4;
}
