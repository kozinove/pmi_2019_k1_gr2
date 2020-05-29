#include <iostream>
#include "zoo.h"
using namespace std;

int main()
{
	pig p;
	cat c;
	chiken ch;
	frog f;
	zoo ZOO;
	
	for (int j = 0; j < 2; j++)
	{
		ZOO.getA(j, &f);
	}
	
	for (int j = 02; j < 4; j++)
	{
		ZOO.getA(j, &ch);
	}

	for (int j = 4; j < 6; j++)
	{
		ZOO.getA(j, &c);
	}

	for (int j = 6; j < 8; j++)
	{
		ZOO.getA(j, &p);
	}
	
	ZOO.go();

	return 0;
}
