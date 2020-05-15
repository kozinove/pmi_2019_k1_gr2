#include "animal.h"
#include <iostream>


animal::animal() : predator(false) {}

animal::animal(bool _predator) : predator(_predator) {}

animal::animal(const animal& an) {
	predator = an.predator;
}




cell::cell() {
	empty = true;
	count = 0;
}

cell::cell(const cell& c) {
	empty = c.empty;
	count = c.count;
	for (int i = 0; i < c.count; i++)
		anim[i] = c.anim[i];
}

void cell::addAnimal(animal* an) {
	if (empty) {
		empty = false;
		anim[count] = an;
		count++;
	}
	else {
		if ((anim[count - 1]->getPred() == 0) && (an->getPred() == 0)) {
			anim[count] = an;
			count++;
		}
		else
			throw exceptionAnimal("herbivoreAndPredator");
	}
}

bool cell::getEmpty() const {
	return empty;
}

int cell::getCount() const {
	return count;
}

void cell::sound() const {
	if (!empty) {
		for (int i = 0; i < this->getCount(); i++)
			anim[i]->sound();
	}
	else {
		std::cout << "empty cell\n";
	}
}

bool* cell::getPredArr(bool* arr) const {
	if (!empty) {
		for (int i = 0; i < this->getCount(); i++)
			arr[i] = anim[i]->getPred();
	}
	else {
		std::cout << "empty cell\n";
	}

	return arr;
}




tiger::tiger() : animal(true) {}
kangaroo::kangaroo() : animal(false) {}
bear::bear() : animal (true) {}


tiger::tiger(const tiger& t) {
	predator = t.predator;
}

kangaroo::kangaroo(const kangaroo& k) {
	predator = k.predator;
}

bear::bear(const bear& b) {
	predator = b.predator;
}


void tiger::sound() {
	std::cout << "\'aaarrrr\' (tiger)\n";
}

void kangaroo::sound() {
	std::cout << "\'khhh\' (kangaroo)\n";
}

void bear::sound() {
	std::cout << "\'aarrrkhh\' (bear)\n";
}


bool tiger::getPred() {
	return predator;
}

bool kangaroo::getPred() {
	return predator;
}

bool bear::getPred() {
	return predator;
}





zoo::zoo() {
	cells = new cell[N];
}

zoo::zoo(const zoo& z) {
	cells = new cell[N];
	for (int i = 0; i < N; i++)
		cells[i] = z.cells[i];
}

zoo::~zoo() {
	delete[] cells;
}



exceptionAnimal::exceptionAnimal(std::string _name) : name(_name) {}

void exceptionAnimal::setName(std::string _name) {
	name = _name;
}

std::string exceptionAnimal::getName() {
	return name;
}
