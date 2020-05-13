#include "zoo.h"
#include <iostream>

bool animal::isPredator() const
{
	return predator;
}

animal::animal(bool type) : predator(type) {};

cell::cell(int _size): size(_size)
{
	an = new animal*[size];
	count = 0;
}

cell::cell(const cell& c)
{
	count = c.count;
	size = c.size;
	an = new animal*[size];
	for (int i = 0; i < count; i++)
	{
		addAnimal(an[i]);
	}
}

cell::~cell()
{
	if (count != 0)
		delete[]an;
}

int cell::getCount() const
{
	return count;
}

void cell::addAnimal(animal* a)
{
	if (count == size)
	{
		throw "There is no room for the animal in the cage(cell)\n";
	}
	if (count == 0)
	{
		an[0] = a;
		count = 1;
	}
	else
	{
		if (an[0]->isPredator())
		{
			throw "You can't put anyone up with a predator\n";
		}
		else
		{
			if (a->isPredator())
			{
				throw "You can't put a predator with a herbivore\n";
			}
			else
			{
				an[count] = a;
				count++;
			}
		}
	}
}

void cell::sound() const
{
	if (count != 0)
	{
		for (int i = 0; i < count; i++)
			an[i]->sound();
		std::cout << '\n';
	}
	else
	{
		std::cout << "<Empty>\n";
	}
}

void wolf::sound() const
{
	std::cout << "<woof>";
}

wolf::wolf() : animal(true) {};

void rabbit::sound() const
{
	std::cout << "<rab-rab>";
}

rabbit::rabbit() : animal(false) {};

void elephant::sound() const
{
	std::cout << "<ooooo>";
}

elephant::elephant() : animal(false) {};

void tiger::sound() const
{
	std::cout << "<tigerrr>";
}

tiger::tiger() : animal(true) {};

zoo::zoo(int _count): cellCount(_count)
{
	cells = new cell[cellCount];
}

zoo::zoo(const zoo& z)
{
	cells = new cell[cellCount];
	for (int i = 0; i < 10; i++)
		cells[i] = z.cells[i];
}

zoo::~zoo()
{
	delete[]cells;
}
