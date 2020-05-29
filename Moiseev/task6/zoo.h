#pragma once
#include <iostream>

using namespace std;

class animal
{
public:
	virtual void sound();
};

class cage
{
private:
	animal* a;
	int t;
public:
	cage();
	void sound();
	void add(animal* A);
};

class zoo
{
public:
	void getA(int n, animal* a);
	void go();
private:
	cage amount[10];
};

class pig : public animal
{
  public:
    virtual void sound();
};

class cat : public animal
{
  public:
    virtual void sound();
};

class chiken : public animal
{
  public:
	virtual void sound();
};

class frog : public animal
{
public:
	virtual void sound();
};
