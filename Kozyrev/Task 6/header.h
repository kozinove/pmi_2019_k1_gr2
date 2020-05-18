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
	animal* a;
	bool empty;
public:
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

class rabbit : public animal
{
public:
	virtual void voice() const;
};


class zoo
{
	lion l;
	tiger t;
	rabbit r;
	cage cages[15];
public:
	void entercages();
	void checkcages();
};
