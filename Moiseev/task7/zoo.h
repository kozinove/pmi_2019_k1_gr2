#pragma once
#include <iostream>

using namespace std;

class animal
{
	bool predator;
public:
	animal(bool a) :predator(a) {};
	virtual void sound();
	bool pred() const;
};

class cage
{
private:
	animal* a1;
	animal* a2;
	int t;
public:
	cage() { t = 0; };;
	void sound();
	void add(animal* A);
};

class zoo
{
	int t = 0;
public:
	void getA(int n, animal* a);
	void go();
private:
	cage amount[10];
};

class pig : public animal
{
  public:
	  pig() :animal(false) {};
    virtual void sound();
};

class cat : public animal
{
  public:
	  cat() :animal(true) {};
    virtual void sound();
};

class chiken : public animal
{
  public:
	  chiken() :animal(false) {};
	virtual void sound();
};

class frog : public animal
{
public:
	frog() :animal(false) {};
	virtual void sound();
};
