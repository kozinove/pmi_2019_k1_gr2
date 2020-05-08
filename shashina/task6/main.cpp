#include "zoo.h"
#include <cstdlib>


int main()
{
    owl o;
    horse h;
    donkey d;
    zoo z;

    for(int i=0; i<6;i++)
    {
        z.cells[i+rand() % 10].animalzoo(&o);
    }
    \
    for(int i=0; i<5;i++)
     {
         z.cells[rand() % 10].animalzoo(&h);
     }

    for(int i=0; i<7;i++)
     {
         z.cells[rand() % 10].animalzoo(&d);
     }

    z.wolk();

    return 0;
}
