#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "rational.h"

int main()
{
	rat a(7, 9), b(1, 4), c;
	printf("Dano:\n");
	a.print();
	b.print();
	printf("\n");

	printf("Results:\n");
	c = a + b;
	c.print();

	c = a - b;
	c.print();

	c = a * b;
	c.print();

	c = a / b;
	c.print();

	c++;
	c.print();

	return 0;
}
