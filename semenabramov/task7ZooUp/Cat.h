#pragma once
#include <iostream>
#include "Animal.h"

class Cat : public Animal
{
	int id;
public:
	bool get_rap() { return rapacity; }

	Cat() { id = 0; };
	Cat(int _id) { id = _id; };

	virtual void voice();
	void get_id();
};



void Cat::voice() {
	std::cout << "meow-meow\n";
}
void Cat::get_id() {
	std::cout << "id_wolf: " << id << "\n";
}