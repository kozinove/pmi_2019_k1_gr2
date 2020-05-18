#pragma once
#include <iostream>
#include "Animal.h"

class Rabbit : public Animal
{
	int id;
public:
	Rabbit() { id = 0; };
	Rabbit(int _id) { id = _id; };

	virtual void voice();
	void get_id();
};



void Rabbit::voice() {
	std::cout << "wof-wof\n";
}
void Rabbit::get_id() {
	std::cout << "id_rabbit: " << id << "\n";
}
