#include "zoo.h"
#include <stdlib.h>
#include <iostream>

void wolk(const zoo& z, int _num)
{
	if ((_num < 0) || (_num > z.getCount()))
		throw "Invalid value";
	else
		for (int i = 0; i < _num; i++)
			z.soundCage(i);
}

void tryAddAnimal(zoo& z, animal& a, int _num)
{
		try
		{
			z.addAnimal(a, _num);
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
		tryAddAnimal(z, r, rand() % 10);
	for (int i = 0; i < 2; i++)
		tryAddAnimal(z, w, rand() % 10);
	for (int i = 0; i < 2; i++)
		tryAddAnimal(z, t, rand() % 10);
	for (int i = 0; i < 1; i++)
		tryAddAnimal(z, e, 9);
	try
	{
		wolk(z, 10);
	}
	catch (const char* str)
	{
		std::cout << str;
	}
	return 0;
}