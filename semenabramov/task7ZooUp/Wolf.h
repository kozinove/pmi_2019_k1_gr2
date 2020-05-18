#pragma once
#include <iostream>
#include "Animal.h"

class Wolf: public Animal
{
	int id;
public:
	bool rapacity = true;
	bool get_rap() { return rapacity; }

	Wolf() { id = 0; };
	Wolf(int _id) { id = _id; };

	virtual void voice();
	void get_id();
};



void Wolf::voice() {
	std::cout << "wof-wof\n";
}
void Wolf::get_id() {
	std::cout << "id_wolf: "<< id<<"\n" ;
}
