#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	rat a(1, 2), b(2, 4), c(0, 0);
	
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

	cout << "\n";

	frat d(1, 2), e(2, 4), g(0, 0);

	cout << "Dano:\n";

	d.print();
	e.print();

	cout << "\n";

	g = d + e;
	g.print();

	g = d - e;
	g.print();

	g = d * e;
	g.print();

	g = d / e;
	g.print();

	g++;
	g.print();

	return 0;
}
