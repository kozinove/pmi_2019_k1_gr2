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

class cell
{
private:
	animal** an;
	int size;
	int count;
public:
	void addAnimal(animal* a);
	void sound() const;
	cell(int _size = 2);
	cell(const cell& c);
	~cell();
	int getCount() const;
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
	int cellCount;
	int sizeCell;
public:
	cell* cells;
	zoo(int _count = 10);
	zoo(const zoo& z);
	~zoo();
};