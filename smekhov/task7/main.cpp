#include "zoo.h"
#include <stdlib.h>
#include <iostream>

int main()
{
	tiger t;
	wolf w;
	rabbit r;
	elephant e;
	zoo z(10, 2);
	for (int i = 0; i < 5; i++)
		z.addAnimal(r, rand() % 10);
	for (int i = 0; i < 2; i++)
		z.addAnimal(w, rand() % 10);
	for (int i = 0; i < 2; i++)
		z.addAnimal(t, rand() % 10);
	z.addAnimal(e, 9);
	z.addAnimal(r, 9);
	z.wolk();
	return 0;
}