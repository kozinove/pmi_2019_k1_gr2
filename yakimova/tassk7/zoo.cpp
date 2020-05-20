#include "zoo.h"
#include <iostream>
using namespace std;

animal::animal() : predator(false) {}
animal::animal(bool _predator) : predator(_predator) {}
animal::animal(const animal& a)
{
	predator = a.predator;
}

cell::cell()
{
	empty = true;
	count = 0;
}
cell::cell(const cell& c)
{
	empty = c.empty;
	count = c.count;
	for (int i = 0; i < c.count; i++)
		anim[i] = c.anim[i];
}

void cell::addAnimal(animal* a)
{
	if (empty) {
		empty = false;
		anim[count] = a;
		count++;
	}
	else {
		if ((anim[count - 1]->getPred() == false) && (a->getPred() == false)) {
			anim[count] = a;
			count++;
		}
		else
			throw "animal_incompatibility";
	}
}

int cell::get_count() const
{
	return count;
}
void cell::sound() const
{
	if (!empty) {
		for (int i = 0; i < this->get_count(); i++)
			anim[i]->sound();
	}
	else {
		std::cout << "Empty\n";
	}
}

bool* cell::getPredArr(bool* arr) const
{
	if (!empty) {
		for (int i = 0; i < this->get_count(); i++)
			arr[i] = anim[i]->getPred();
	}
	else
	{
		std::cout << "Empty\n";
	}
	return arr;
}

tiger::tiger() : animal(true) {}
kangaroo::kangaroo() : animal(false) {}
bear::bear() : animal(true) {}

tiger::tiger(const tiger& t)
{
	predator = t.predator;
}
kangaroo::kangaroo(const kangaroo& k)
{
	predator = k.predator;
}
bear::bear(const bear& b)
{
	predator = b.predator;
}

void tiger::sound()
{
	std::cout << "tigerrr\n";
}
void kangaroo::sound()
{
	std::cout << "kangaaroooo\n";
}
void bear::sound()
{
	std::cout << "beeeaar\n";
}

bool tiger::getPred()
{
	return predator;
}
bool kangaroo::getPred()
{
	return predator;
}
bool bear::getPred()
{
	return predator;
}

void zoo::walk()
{
	for (int i = 0; i < 10; i++)
		cells[i].sound();
}
void zoo::try_add_animal(animal* a)
{
	try {
		for (int i = 0; i < 3; i++)
			cells[rand() % 10].addAnimal(a);
	}
	catch (const char* str) {
		cout << "error: " << str << '\n';
	}
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
	delete[] cells;
}
