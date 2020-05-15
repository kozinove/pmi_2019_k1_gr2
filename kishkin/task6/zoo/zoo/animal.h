#pragma once
#include <string>


#define N 10 // number of cells
#define quin 2 // quintity animals in cells



class animal {
public:
	bool predator;

	animal();
	animal(bool _predator);
	animal(const animal& an);

	virtual void sound() = 0;
	virtual bool getPred() = 0;
};

class cell {
private:
	animal* anim[quin];
	bool empty;
	int count;
public:
	cell();
	cell(const cell& c);

	void addAnimal(animal* an);
	bool getEmpty() const;
	int getCount() const;
	void sound() const;
	bool* getPredArr(bool* arr) const;
};

class tiger:public animal {
public:
	tiger();
	tiger(const tiger& t);

	virtual void sound();
	virtual bool getPred();
};

class kangaroo:public animal {
public:
	kangaroo();
	kangaroo(const kangaroo& k);

	virtual void sound();
	virtual bool getPred();
};

class bear:public animal {
public:
	bear();
	 bear(const bear& b);

	virtual void sound();
	virtual bool getPred();
};

class zoo {
public:
	cell* cells;

	zoo();
	zoo(const zoo& z);
	~zoo();
};



class exceptionAnimal {
private:
	std::string name;
public:
	exceptionAnimal(std::string _name);

	void setName(std::string _name);
	std::string getName();
};