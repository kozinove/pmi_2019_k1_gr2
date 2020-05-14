#include "zoo.h"
#include <iostream>

bool animal::isPredator() const
{
	return predator;
}

animal::animal(bool type) : predator(type) {};

cage::cage(int _size): size(_size)
{
	an = new animal*[size];
	count = 0;
}

cage::cage(const cage& c)
{
	count = c.count;
	size = c.size;
	an = new animal*[size];
	for (int i = 0; i < count; i++)
	{
		addAnimal(an[i]);
	}
}

cage::~cage()
{
	delete[]an;
}

void cage::copy(const cage& original)
{
	delete[]an;
	size = original.size;
	count = original.count;
	for (int i = 0; i < count; i++)
		an[i] = original.an[i];
}

int cage::getCount() const
{
	return count;
}

int cage::getSize() const
{
	return size;
}

void cage::changeSize(int _size)
{
	if (_size < count)
		throw "The new cage doesn't have enough space\n";
	else
	{
		animal** temp = new animal * [count];
		for (int i = 0; i < count; i++)
			temp[i] = an[i];
		delete[]an;
		size = _size;
		an = new animal * [_size];
		for (int i = 0; i < count; i++)
			an[i] = temp[i];
	}
}

void cage::addAnimal(animal* a)
{
	if (count == size)
	{
		throw "There is no room for the animal in the cage(cage)\n";
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

void cage::sound() const
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

zoo::zoo(int _count, int _initSize): cageCount(_count)
{
	cages = new cage*[cageCount];
	for (int i = 0; i < cageCount; i++)
	{
		cages[i] = new cage(_initSize);
	}
}

zoo::zoo(const zoo& z)
{
	cageCount = z.cageCount;
	cages = new cage*[cageCount];
	for (int i = 0; i < 10; i++)
	{
		cages[i] = new cage(z.cages[i]->getSize());
		cages[i]->copy(*(z.cages[i]));
	}
}

zoo::~zoo()
{
	for (int i = 0; i < cageCount; i++)
	{
		delete cages[i];
	}
	delete[]cages;
}

void zoo::soundCage(int _num) const
{
	if ((_num < 0) || (_num >= cageCount))
		throw "Invalid value";
	else
		cages[_num]->sound();
}

void zoo::addAnimal(animal& a, int _num)
{
	if ((_num < 0) || (_num >= cageCount))
		throw "Invalid value";
	else
		cages[_num]->addAnimal(&a);
}

void zoo::changeSize(int _num, int _size)
{
	if ((_num < 0) || (_num >= cageCount))
		throw "Invalid value";
	else
		cages[_num]->changeSize(_size);
}

void zoo::addCages(int _count)
{
	if (_count <= 0)
		throw "Incorrect value\n";
	else
	{
		cage** temp = new cage * [cageCount];
		for (int i = 0; i < cageCount; i++)
			temp[i] = cages[i];
		delete[]cages;
		cages = new cage * [cageCount + _count];
		for (int i = 0; i < cageCount; i++)
			cages[i] = temp[i];
		cageCount += _count;
	}
}

void zoo::delCage(int _num)
{
	if ((_num < 0) || (_num >= cageCount))
		throw "Invalid value\n";
	else
	{
		cage** temp = new cage * [cageCount - 1];
		for (int i = 0; i < _num; i++)
			temp[i] = cages[i];
		for (int i = _num + 1; i < cageCount; i++)
			temp[i] = cages[i];
		delete[]cages;
		cageCount --;
		cages = new cage * [cageCount];
		for (int i = 0; i < cageCount; i++)
			cages[i] = temp[i];
	}
}