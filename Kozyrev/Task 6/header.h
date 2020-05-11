#pragma once
#include <iostream>
using namespace std;

class animal
{
public:
	virtual void voice() const = 0;
};


class cage
{
public:
	animal* a;
	bool empty;
	
	cage();
	void addiction(animal* _a);
	void voice() const;
};


class lion : public animal
{
public:
	virtual void voice() const;
};

class tiger : public animal
{
public:
	virtual void voice() const;
};


class zoo
{
	cage cages[10];
public:
	void entercages(lion& l, tiger& t);
	void checkcages();
};
