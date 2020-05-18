#include "zoo.h"
#include <iostream>

using namespace std;

animal::animal() : predator(false) {}
animal::animal(bool pray) : predator(pray) {}
animal::animal(const animal &an)
{
    predator = an.predator;
}

horse::horse() : animal(false) {}
horse::horse(const horse &h)
{
    predator = h.predator;
}
void horse::voice()
{
    cout << "'neigh' - horse\n";
}
bool horse::getpray()
{
    return predator;
}

donkey::donkey() : animal(false) {}
donkey::donkey(const donkey &d)
{
    predator = d.predator;
}
void donkey::voice()
{
    cout << "'hew-haw' - donkey\n";
}
bool donkey::getpray()
{
    return predator;
}

owl::owl() : animal (true) {}
owl::owl(const owl &o)
{
    predator = o.predator;
}
void owl::voice()
{
    cout << "'hoot' - owl\n";
}
bool owl::getpray()
{
    return predator;
}

cell::cell() {}
cell::cell(const cell &c)
{
    f = c.f;
    qty = c.qty;
    for (int i = 0; i < c.qty; i++)
        beast[i] = c.beast[i];
}
void cell::animalzoo(animal *an)
{
    if (f)
    {
        f = false;
        beast[qty] = an;
        qty++;
    }
    else
    {
        if ((*beast[qty-1]).getpray() && (*an).getpray())
            {
                beast[qty] = an;
                qty++;
            }
        else
            throw excess("- here is predator or herbivore");
    }
}
int cell::getqry()
{
    return qty;
}
void cell::voice()
{
    if (!f)
    {
        for (int i = 0; i < getqry(); i++)
            (*beast[i]).voice();
    }
    else
        cout << "no one is here \n";
}

zoo::zoo()
{
    cells = new cell[10];
}
zoo::zoo (const zoo &z)
{
    cells = new cell[10];
    for (int i = 0; i < 10; i++)
        cells[i] = z.cells[i];
}
zoo::~zoo()
{
    delete[] cells;
}

void zoo::walk(const zoo &z)
{
    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " cell:\n";
        z.cells[i].voice();
    }
}

excess::excess(string n) : name(n) {}
void excess::setname(string n)
{
    name = n;
}
string excess::getname()
{
    return name;
}

void tryAnimal(animal *an, zoo *z)
{
    try
    {
        for (int i = 0; i < 6; i++)
            (*z).cells[rand() % 10].animalzoo(an);
    }
    catch (excess &err)
    {
        cout << "conflict " << err.getname() << "\n";
    }
}
