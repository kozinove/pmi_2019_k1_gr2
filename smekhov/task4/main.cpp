#include "dNUm.h"
#include <iostream>

int main()
{
	dNum a[3];
	std::cin >> a[0] >> a[1];
	a[2] = a[0] + a[1] * 2;
	std::cout << "\n" << a[2];
	return 0;
}