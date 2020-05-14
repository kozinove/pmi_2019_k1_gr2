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
	animal* a1;
	animal* a2;
	bool empty1;
	bool empty2;
public:
	cage();
	void addiction1(animal* _a1);
	void addiction2(animal* _a2);
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

class raccoon : public animal
{
public:
	virtual void voice() const;
};


class zoo
{
	lion lio;
	tiger tig;
	rabbit rab;
	raccoon rac;
	cage cages[10];
public:
	void entercages();
	void checkcages();
};