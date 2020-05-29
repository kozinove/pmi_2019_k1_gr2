#include <iostream>
#include "zoo.h"
using namespace std;

void cage::add(animal* A)
{
	if (t == 0)
	{
		t = 1;
		a1 = A;
	}
	else
	{
		if (A->pred())
		{
			throw "u cant add predator";
		}
		else if (a1->pred())
		{
			throw "u cant add animal";
		}
		else
		{
			t = 2;
			a2 = A;
		}
	}
}


void cage::sound()
{
	if (t == 0)
	{
		cout << "empty" << endl;
	}
	else if (t == 1)
	{
		a1->sound();
		cout << endl;
	}
	else if (t == 2)
	{
		a1->sound();
		a2->sound();
	}
}


void zoo::go()
{
	for (int i = 0; i < 10; i++)
	{
		amount[i].sound();
	}
}

bool animal::pred() const
{
	return predator;
}

void animal::sound()
{

};

void cat::sound()
{

	cout << "meow";

}

void pig::sound()
{

	cout << "hru-hru";

}

void chiken::sound()
{

	cout << "kudah-tah-tah";

}

void frog::sound()
{

	cout << "kwak";

}

void zoo::getA(int n, animal* a)
{

	amount[n].add(a);

}