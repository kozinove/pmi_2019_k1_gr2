#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
	rat a(7, 9), b(3, 8), c;
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

	cin >> a >> b;
	c = a + b;
	cout << "\n" << "result = " << c;

	return 0;
}