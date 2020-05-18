#pragma once
#include "Animal.h"
class Cell
{
	int count;
	Animal* animals[2];
public:
	Cell();
	void Add(Animal* an);
	void Ask();

};

