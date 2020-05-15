#include "header.h"
#include <stdlib.h>

#include <iostream>
using namespace std;


cage::cage()
{
	empty1 = true;
	empty2 = true;
}

void cage::addiction1(animal* _a1)
{
	a1 = _a1;
	empty1 = false;
}

void cage::addiction2(animal* _a2)
{
	a2 = _a2;
	empty2 = false;
}

animal* cage::get_a1()
{
	if (empty1 == false)
		return a1;
	else
		return NULL;
}

void cage::voice() const
{
	if ((empty1) & (empty2))
	{
		cout << "Full empty \n";
	}
	if ((empty1 == false) & (empty2 == false))
	{
		a1->voice();
		a2->voice();
		cout << "\n";
	}
	else
	{
		if (empty1 == false)
		{
			a1->voice();
			cout << "2 - empty \n";
		}
		if (empty2 == false)
		{
			cout << "1 - empty ";
			a2->voice();
			cout << "\n";
		}
	}
}


void zoo::entercages()
{
	for (int i = 0; i < 10; i++)
	{
		srand(i);
		int b = rand() % 5 + 1;

		if (b == 5)
		{
			
		}
		else
		{
			animal* an = &zer;
			if (b == 1)
			{
				an = &lio;
			}
			if (b == 2)
			{
				an = &tig;
			}
			if (b == 3)
			{
				an = &rab;
			}
			if (b == 4)
			{
				an = &rac;
			}

			cages[i].addiction1(an);
		}
	}

	for (int i = 0; i < 10; i++)
	{
		try
		{
			srand(500);
			int b = rand() % 5 + 1;

			if (b == 5)
			{

			}
			else
			{
				animal* an = &zer;
				if (b == 1)
				{
					an = &lio;
				}
				if (b == 2)
				{
					an = &tig;
				}
				if (b == 3)
				{
					an = &rab;
				}
				if (b == 4)
				{
					an = &rac;
				}

				animal* temp = cages[i].get_a1();
				if (temp != NULL)
				{
					if (temp->checkpredator())
					{
						throw "Another animal cant join cage with a predator";
					}
					else
					{
						if (an->checkpredator())
						{
							throw "Predator cant join cage with a herbivore";
						}
						else
						{
							cages[i].addiction2(an);
						}
					}
				}
				else
					cages[i].addiction2(an);
			}
		}
		catch (const char* str)
		{
			cout << str << endl;
		}
	}
}

void zoo::checkcages()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "cage[" << i + 1 << "] ";
		cages[i].voice();
	}
}


void lion::voice() const
{
	cout << "Lion      ";
}
bool lion::checkpredator() const
{
	return true;
}

void tiger::voice() const
{
	cout << "Tiger     ";
}
bool tiger::checkpredator() const
{
	return true;
}

void rabbit::voice() const
{
	cout << "Rabbit    ";
}
bool rabbit::checkpredator() const
{
	return false;
}

void raccoon::voice() const
{
	cout << "Raccoon   ";
}
bool raccoon::checkpredator() const
{
	return false;
}

void zero::voice() const
{
	cout << "Zero      ";
}
bool zero::checkpredator() const
{
	return false;
}