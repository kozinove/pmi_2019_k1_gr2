#include "zoo.h"
#include <iostream>

using namespace std;

void horse::voice ()
{
    cout << "'neigh' - horse\n";
}

void donkey::voice ()
{
    cout << "'hee-haw' - donkey\n";
}

void owl::voice()
{
    cout << "'hoot' - owl\n";
}

void cell::animalzoo(animals *animal)
{
    if (f)
    {
        beast = animal;
        f = false;
    }
}

void cell::voice()
{
    if (f)
           cout << "no one is here \n";
    if (!f)
        (* beast).voice();
}

zoo::zoo(){}

void zoo::wolk()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i+1 << " cell: ";
        cells[i].voice();
    }
}
