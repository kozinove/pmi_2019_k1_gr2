#pragma once
#include <iostream>
#include "Animal.h"

class Fox : public Animal
{
	int id;
public:
	bool rapacity = true;
	bool get_rap() { return rapacity; }

	Fox() { id = 0; };
	Fox(int _id) { id = _id; };

	virtual void voice();
	void get_id();
};



void Fox::voice() {
	std::cout << "fir-fir\n";
}
void Fox::get_id() {
	std::cout << "id_wolf: " << id << "\n";
}