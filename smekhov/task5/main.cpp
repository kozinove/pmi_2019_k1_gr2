#include <iostream>
#include "NOD.h"
#include "dNum.h"

int main()
{
	dNumA aA(2, 3), bA(3, 5);
	dNumN aN(2, 3), bN(3, 5);
	aA = aA * bA;
	aN = aN * bN;
	std::cout << aA << ", " << aN;
	return 0;
}