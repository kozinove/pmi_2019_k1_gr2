#include "zoo.h"
#include <iostream>

using namespace std;

const void empty::voice ()
{
    cout << " no one is here \n";
}

const bool empty::_empty ()
{
    return true;
}

const void horse::voice ()
{
    cout << "'neigh' - horse\n";
}

const bool horse::_empty ()
{
    return true;
}

const void donkey::voice ()
{
    cout << "'hee-haw' - donkey\n";
}

const bool donkey::_empty ()
{
    return true;
}

const void owl::voice ()
{
    cout << "'hoot' - owl\n";
}

const bool owl::_empty ()
{
    return true;
}

const void lion::voice ()
{
    cout << "'roar' - lion\n";
}

const bool lion::_empty ()
{
    return true;
}

zoo::zoo (empty &e)
{
     for (int i = 0; i < 10; i++)
         animals [i] = &e;
}

void zoo::animalszoo (cell *animal, const int &p)
{
      if ((*animals[p])._empty())
         animals [p] = animal;
}

const void zoo::voicezoo (const int &p)
{
      (*animals[p]).voice();
}

void who (zoo &_zoo)
{
   for (int i = 0; i < 10; i++)
   {
       cout << i+1 << " cell: ";
       _zoo.voicezoo(i);
   }
    cout << "All the animals were seen!\n";
}
