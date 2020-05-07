#include "zoo.h"
#include <iostream>
#include <cstdlib>

int main()
{
    empty e;
    zoo _zoo(e);
    horse h;
    for (int i = 0; i < 5; i++)
        _zoo.animalszoo(&h, rand() % 10);
    donkey d;
    for (int i = 0; i < 4; i++)
        _zoo.animalszoo(&d, rand() % 10);
    owl o;
    for (int i = 0; i < 3; i++)
        _zoo.animalszoo(&o, rand() % 10);
    lion l;
    for (int i = 0; i < 2; i++)
        _zoo.animalszoo(&l, rand() % 10);

    who (_zoo);


    return 0;
}
