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


class zoo
{
public:
    cage cages[10];
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

void checkcages(zoo& zoo);

void entercages(zoo& zoo, lion& l, tiger& t);