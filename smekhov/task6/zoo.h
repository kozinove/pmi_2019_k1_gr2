#pragma once

class animal
{
public:
	virtual void sound() const = 0;
};

class cell
{
private:
	bool empty;
	animal* an;
public:
	void addAnimal(animal* a);
	bool isEmpty() const;
	void sound() const;
	cell();
	cell(const cell& c);
	~cell();
};

class wolf : public animal
{
	virtual void sound() const;
};

class rabbit : public animal
{
	virtual void sound() const;
};

class tiger : public animal
{
	virtual void sound() const;
};

class zoo
{
public:
	cell* cells;
	zoo();
	zoo(const zoo& z);
	~zoo();
};