#include "header.h"
#include <stdlib.h>

#include <iostream>
using namespace std;


cage::cage()
{
	empty = true;
}

void cage::addiction(animal* _a)
{
	a = _a;
	empty = false;
}

void cage::voice() const
{
	if (empty)
	{
		cout << "empty \n" << endl;
	}
	else
	{
		a->voice();
	}
}


void zoo::entercages(lion& l, tiger& t)
{
	for (int i = 0; i < 10; i++)
	{
		int b = rand() % 3 + 1;
		if (b == 1)
			cages[i].addiction(&l);
		else
		{
			if (b == 2)
				cages[i].addiction(&t);
		}
	}
}

void zoo::checkcages()
{
	for (int i = 0; i < 10; i++)
	{
		cages[i].voice();
	}
}


void lion::voice() const
{
	cout << "lion \n" << endl;
}

void tiger::voice() const
{
	cout << "tiger \n" << endl;
}
