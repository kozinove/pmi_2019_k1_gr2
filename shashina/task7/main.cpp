#include "zoo.h"
#include <iostream>

int main()
{
    horse h;
    donkey d;
    owl o;
    zoo z;

         tryAnimal(&h, &z);
         tryAnimal(&d, &z);
         tryAnimal(&o, &z);

    z.walk(z);

    return 0;
}
