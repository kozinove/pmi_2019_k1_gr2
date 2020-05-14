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

void cage::voice() const
{
	if (empty1)
	{
		cout << "Full empty \n" << endl;
	}
	if ((empty1 == false) & (empty2 == false))
	{
		a1->voice();
		a2->voice();
		cout << "\n" << endl;
	}
	else
	{
		if (empty1 == false)
		{
			a1->voice();
			cout << "2 - empty \n" << endl;
		}
	}
}

void zoo::entercages()
{
	for (int i = 0; i < 10; i++)
	{
		int b = rand() % 5 + 1;
		
		try
		{
			if (b == 1)
			{
				cages[i].addiction1(&lio);
				int b = rand() % 5 + 1;
				if (b == 1)
				{
					throw "2nd lion cant join cage with lion";
				}
				if (b == 2)
				{
					throw "Tiger cant join cage with lion";
				}
				if (b == 3)
				{
					throw "Rabbit cant join cage with lion";
				}
				if (b == 4)
				{
					throw "Raccoon cant join cage with lion";
				}
			}
		}
		catch (const char* str)
		{
			cout << str << endl;
		}
		
		try
		{
			if (b == 2)
			{
				cages[i].addiction1(&tig);
				int b = rand() % 5 + 1;
				if (b == 1)
				{
					throw "Lion cant join cage with tiger";
				}
				if (b == 2)
				{
					throw "2nd tiger cant join cage with tiger";
				}
				if (b == 3)
				{
					throw "Rabbit cant join cage with tiger";
				}
				if (b == 4)
				{
					throw "Raccoon cant join cage with tiger";
				}
			}
		}
		catch (const char* str)
		{
			cout << str << endl;
		}
		
		try
		{
			if (b == 3)
			{
				cages[i].addiction1(&rab);
				int b = rand() % 5 + 1;
				if (b == 1)
				{
					throw "Lion cant join cage with rabbit";
				}
				if (b == 2)
				{
					throw "Tiger cant join cage with rabbit";
				}
				if (b == 3)
				{
					cages[i].addiction2(&rab);
				}
				if (b == 4)
				{
					cages[i].addiction2(&rac);
				}
			}
		}
		catch (const char* str)
		{
			cout << str << endl;
		}
		
		try
		{
			if (b == 4)
			{
				cages[i].addiction1(&rac);
				int b = rand() % 5 + 1;
				if (b == 1)
				{
					throw "Lion cant join cage with raccoon";
				}
				if (b == 2)
				{
					throw "Tiger cant join cage with raccoon";
				}
				if (b == 3)
				{
					cages[i].addiction2(&rab);
				}
				if (b == 4)
				{
					cages[i].addiction2(&rac);
				}
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
	cout << "Lion    ";
}

void tiger::voice() const
{
	cout << "Tiger   ";
}

void rabbit::voice() const
{
	cout << "Rabbit  ";
}

void raccoon::voice() const
{
	cout << "Raccoon ";
}