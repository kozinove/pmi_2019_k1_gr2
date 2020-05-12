#include "zoo.h"

int main()
{
	lion l;
	parrot p;
	monkey m;
	zoo z;
	z.cages[0].addAnimal(&l);
	z.cages[1].addAnimal(&l);
	z.cages[3].addAnimal(&p);
	z.cages[6].addAnimal(&p);
	z.cages[7].addAnimal(&m);
	z.cages[8].addAnimal(&m);
	z.cages[9].addAnimal(&m);

	z.walk();

	return 0;
}