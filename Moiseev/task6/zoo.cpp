#include <iostream>
#include "zoo.h"
using namespace std;

cage::cage()
{
	t = 0;
}

void animal::sound()
{

}

void zoo::getA(int n, animal* a)
{
	amount[n].add(a);

}

void cage::add(animal* A)
{
	t = 1;
	a = A;
}

void cage::sound()
{
	if (t == 0)
	{
		cout << "empty" << endl;
	}
	else
	{
		a->sound();
	}
}

void zoo::go()
{
	for (int i = 0; i < 10; i++)
	{
		amount[i].sound();
	}
}

void pig::sound()
{

	cout << "hru-hru" << endl;

}

void cat::sound()
{

	cout << "meow" << endl;

}

void chiken::sound()
{

	cout << "kudah-tah-tah" << endl;

}

void frog::sound()
{

	cout << "kwak" << endl;

}
