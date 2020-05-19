#include "zoo.h"
#include <iostream>

cell::cell()
{
	empty = true;
}

cell::~cell()
{
	/*if (!empty)
		delete[]an;*/
}

void cell::addAnimal(animal* a)
{
	if (empty)
	{
		empty = false;
		an = a;
	}
}

bool cell::isEmpty() const
{
	return empty;
}

void cell::sound() const
{
	if (!empty)
	{
		an->sound();
	}
	else
	{
		std::cout << "<Empty>\n";
	}
}

void wolf::sound() const
{
	std::cout << "<woof>\n";
}

void rabbit::sound() const
{
	std::cout << "<rab-rab>\n";
}

void tiger::sound() const
{
	std::cout << "<tigerrr>\n";
}

zoo::zoo()
{
	cells = new cell[10];
}

zoo::zoo(const zoo& z)
{
	cells = new cell[10];
	for (int i = 0; i < 10; i++)
		cells[i] = z.cells[i];
}

zoo::~zoo()
{
	delete[]cells;
}
