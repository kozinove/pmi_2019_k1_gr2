#pragma once
#include <iostream>

using namespace std;

class animal
{
public:

	virtual void voice();

};

class cage
{

	int emp;
public:
	cage();
	void voice();
	void addAnimal(animal* _an);
	animal* an;
};

class lion : public animal
{
public:

	virtual void voice();

};
class monkey : public animal
{
public:

	virtual void voice();

};
class parrot : public animal
{
public:
	virtual void voice();
};
class zoo
{
public:
	cage cages[10];
	void walk();
};
