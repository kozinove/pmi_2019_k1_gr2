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

	try
	{
		ZOO.getA(1, &p);
	}

	catch (const char* str)
	{
		str;
		cout << str << endl;
	}

	try
	{
		ZOO.getA(2, &c);
	}

	catch (const char* str)
	{
		str;
		cout << str << endl;
	}

	try
	{
		ZOO.getA(7, &ch);
	}

	catch (const char* str)
	{
		str;
		cout << str << endl;
	}

	try
	{
		ZOO.getA(9, &f);
	}

	catch (const char* str)
	{
		str;
		cout << str << endl;
	}
	
	ZOO.go();

	return 0;
}
