#include "Cell.h"
#include "iostream"


Cell::Cell() {
	count = 2;
	for (int i = 0; i < count; i++)
	{
		animals[i] = 0;
	}
}

void Cell::Add(Animal* an) {
	if (animals[0])
	{
		if (animals[1]) {
			throw "Cell is full!";
			return;
		}
		if (animals[0]->get_rap()) {
			throw "There's a predator in the cage";
		}
		if (!(animals[0]->get_rap()) && (an->get_rap())) {
			throw "You can't put a predator with a herbivore";
		}
		animals[1] = an;
		return;
	}
	animals[0] = an;
}

void Cell::Ask() {
	bool flag = true;
	for (int i = 0; i < count; i++)
	{
		if (animals[i] != 0) {
			animals[i]->voice();
			flag = false;
		}
	}
	if (flag)
		std::cout << "*silence*\n";
}