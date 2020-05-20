#include "zoo.h"
#include <iostream>

int main()
{
    horse h;
    donkey d;
    owl o;
    zoo z;

    z.tryAnimal(&h);
    z.tryAnimal(&d);
    z.tryAnimal(&o);

    z.walk();

    return 0;
}
