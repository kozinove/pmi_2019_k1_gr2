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


void zoo::entercages()
{
	for (int i = 0; i < 15; i++)
	{
		int b = rand() % 4 + 1;
		if (b == 1)
			cages[i].addiction(&l);
		else
		{
			if (b == 2)
				cages[i].addiction(&t);
			else
				if (b == 3)
					cages[i].addiction(&r);
		}
	}
}

void zoo::checkcages()
{
	for (int i = 0; i < 15; i++)
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

void rabbit::voice() const
{
	cout << "rabbit \n" << endl;
}

