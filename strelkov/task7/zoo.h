#pragma once
#include <iostream>

using namespace std;

class animal
{

	bool predator;
	
public:
	animal(bool a) :predator(a) {};
	virtual void voice();
	bool getPR() const;
};

class cage
{
	animal* an1;
	animal* an2;
	int emp;
public:
	cage() {emp = 0;};
	void voice();
	void addAnimal(animal* _an);
};

class lion : public animal
{
public:
	lion() :animal(true) {};
	virtual void voice();

};
class monkey : public animal
{
public:
	monkey() :animal(false) {};
	virtual void voice();

};
class parrot : public animal
{
public:
	parrot() :animal(false) {};
	virtual void voice();
};
class zoo
{
	int emp = 0;
public:
	void getAn(int n, animal* an);
	void walk();
private:
	cage cages[10];

};
