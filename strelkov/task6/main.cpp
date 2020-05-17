#include "zoo.h"

int main()
{
	lion l;
	parrot p;
	monkey m;
	zoo z;
	z.get(0,&l);
	z.get(1,&l);
	z.get(3,&p);
	z.get(6,&p);
	z.get(7,&m);
	z.get(8,&m);
	z.get(9,&p);
	z.walk();

	return 0;
}