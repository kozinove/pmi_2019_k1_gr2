#include "zoo.h"
#include <iostream>

int main()
{
    horse h;
    donkey d;
    owl o;
    zoo z;

    tryhorse(&h, &z);
    trydonkey(&d, &z);
    tryowl(&o, &z);

    z.walk(z);

    return 0;
}
