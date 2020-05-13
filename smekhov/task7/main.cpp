#include "zoo.h"
#include <stdlib.h>
#include <iostream>

void wolk(const zoo& z)
{
	for (int i = 0; i < 10; i++)
		z.cells[i].sound();
}

void tryAddAnimal(zoo& z, animal* a)
{
		try
		{
			z.cells[rand() % 10].addAnimal(a);
		}
		catch (const char* str)
		{
			std::cout << str;
		}
}

int main()
{
	tiger t;
	wolf w;
	rabbit r;
	elephant e;
	zoo z;
	for (int i = 0; i < 5; i++)
		tryAddAnimal(z, &r);
	for (int i = 0; i < 2; i++)
		tryAddAnimal(z, &w);
	for (int i = 0; i < 2; i++)
		tryAddAnimal(z, &t);
	for (int i = 0; i < 1; i++)
		tryAddAnimal(z, &e);
	wolk(z);
	return 0;
}