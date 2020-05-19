#include "zoo.h"
#include <stdlib.h>

void wolk(const zoo& z)
{
	for (int i = 0; i < 10; i++)
		z.cells[i].sound();
}

int main()
{
	tiger t;
	wolf w;
	rabbit r;
	zoo z;
	for (int i = 0; i < 2; i++)
		z.cells[rand() % 10].addAnimal(&t);
	for (int i = 0; i < 2; i++)
		z.cells[rand() % 10].addAnimal(&w);
	for (int i = 0; i < 2; i++)
		z.cells[rand() % 10].addAnimal(&r);
	wolk(z);
	return 0;
}