#include "zoo.h"


cage::cage()
{
	emp = 0;
}

void animal::voice()
{

}

void cage::addAnimal(animal* _an)
{
	emp = 1;
	an = _an;
}
void cage::voice()
{
	if (emp == 0)
		cout << "empty" << endl;
	else
		an->voice();
}
void lion::voice()
{

	cout << "rrrrr" << endl;

}
void monkey::voice()
{

	cout << "wowowow" << endl;

}
void parrot::voice()
{

	cout << "chikwik" << endl;

}


void zoo::walk()
{
	for (int i = 0; i < 10; i++)
	{
		cages[i].voice();
	}
}