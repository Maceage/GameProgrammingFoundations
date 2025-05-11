#include <iostream>

#include "Spiderman.h"
#include "Venom.h"

int main()
{
    Spiderman spiderman(100);

    std::cout << "Spiderman has " << spiderman.GetHealth() << " health\n";

    Venom venom(1000);

    venom.AccessSpidermanHealth();

    std::cout << "Venom has " << venom.GetHealth() << " health\n";
}
