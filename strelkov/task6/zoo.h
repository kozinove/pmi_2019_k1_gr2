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
	animal* an;
	int emp;
public:
	cage();
	void voice();
	void addAnimal(animal* _an);
	
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
class zoo :public cage
{	
	
public:
	void get(int n, animal* an);
	void walk();
private:
	cage cages[10];

};
