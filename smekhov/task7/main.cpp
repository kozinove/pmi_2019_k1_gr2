#include "zoo.h"
#include <stdlib.h>
#include <iostream>

void wolk(const zoo& z)
{
	for (int i = 0; i < 10; i++)
		z.soundCage(i);
}

void tryAddAnimal(zoo& z, animal& a)
{
		try
		{
			z.addAnimal(a, rand() % 10);
		}
		catch (const char* str)
		{
			std::cout << str;
		}
}

void tryChangeSizeCage(zoo& z, int _cage, int _size)
{
	try
	{
		z.changeSize(_cage, _size);
	}
	catch (const char* str)
	{
		std::cout << str;
	}
}

void tryAddCages(zoo& z, int _count = 1)
{
	try
	{
		z.addCages(_count);
	}
	catch (const char* str)
	{
		std::cout << str;
	}
}

void tryDelCage(zoo& z, int _num)
{
	try
	{
		z.delCage(_num);
	}
	catch (const char* str)
	{
		std::cout << str;
	}
}

int main()
{
	tiger t;
	wolf w;
	rabbit r;
	elephant e;
	zoo z(10, 2);
	for (int i = 0; i < 5; i++)
		tryAddAnimal(z, r);
	for (int i = 0; i < 2; i++)
		tryAddAnimal(z, w);
	for (int i = 0; i < 2; i++)
		tryAddAnimal(z, t);
	for (int i = 0; i < 1; i++)
		tryAddAnimal(z, e);
	wolk(z);
	return 0;
}