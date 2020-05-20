#pragma once

class animal
{
private:
	const bool predator;
public:
	virtual void sound() const = 0;
	bool isPredator() const;
	animal(bool _type);
};

class cage
{
private:
	animal** an;
	int size;
	int count;
public:
	void addAnimal(animal* a);
	void sound() const;
	cage(int _size = 2);
	cage(const cage& c);
	~cage();
	void copy(const cage& original);
	int getCount() const;
	int getSize() const;
	void changeSize(int _size);
};

class wolf : public animal
{
private:
	virtual void sound() const;
public:
	wolf();
};

class rabbit : public animal
{
private:
	virtual void sound() const;
public:
	rabbit();
};

class elephant : public animal
{
private:
	virtual void sound() const;
public:
	elephant();
};

class tiger : public animal
{
private:
	virtual void sound() const;
public:
	tiger();
};

class zoo
{
	int cageCount;
	cage** cages;
public:
	zoo(int _count = 10, int _initSize = 2);
	zoo(const zoo& z);
	~zoo();
	void addAnimal(animal& a, int _num);
	void changeSize(int _num, int _size);
	void addCages(int _count = 1);
	void soundCage(int _num) const;
	void delCage(int _num);
	int getCount() const;
	void wolk() const;
};