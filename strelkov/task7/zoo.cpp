#include "zoo.h"


bool animal::getPR() const
{
	return predator;
}
void animal::voice() {};
void lion::voice()
{

	cout << "rrrrr ";

}
void monkey::voice()
{

	cout << "wowowow ";

}
void parrot::voice()
{
	
	cout << "chikwik ";

}


void zoo::getAn(int n, animal* an)
{

	cages[n].addAnimal(an);
	
}

void cage::addAnimal(animal* _an)
{
	if (emp == 0)
	{
		emp = 1;
		an1 = _an;
	}
	else
	{
		if (_an->getPR())
			throw "Predator can't be added to other animals";
		else if (an1->getPR())
			throw "You can't add other animals to predator";
		else
			{
				emp = 2;
				an2 = _an;
			}
	}
}


void cage::voice()
{
	if (emp == 0)
		cout << "empty" << endl;
	else if (emp == 1)
	{
		an1->voice();
		cout << endl;
	}
	else if (emp == 2)
	{
		an1->voice();
		an2->voice();
	}
}


void zoo::walk()
{
	for (int i = 0; i < 10; i++)
	{
		cages[i].voice();
	}
}
