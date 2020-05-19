#include "dNum.h"
#include <stdio.h>

int main()
{
	int c, d;
	scanf("%d %d", &c, &d);
	dNum a(c, d);
	scanf("%d %d", &c, &d);
	dNum b(c, d);
	a = a + b;
	a.print();
	a = a - b;
	a.print();
	a = a * b;
	a.print();
	a = a / b;
	a.print();
	a++;
	a.print();
	a--;
	a.print();
	return 0;
}