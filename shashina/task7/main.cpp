#include "zoo.h"
#include <iostream>

int main()
{
    horse h;
    donkey d;
    owl o;
    zoo z;

    z.tryAnimal(&h, &z);
    z.tryAnimal(&d, &z);
    z.tryAnimal(&o, &z);

    z.walk();

    return 0;
}
