#pragma once
#include <string>

using namespace std;

class animal
{
protected:
    bool predator;
public:
    animal();
    animal(bool pray);
    animal(const animal &an);
    virtual void voice() = 0;
    virtual bool getpray() = 0;
};

class horse : public animal
{
public:
    horse();
    horse(const horse &h);
    virtual void voice();
    virtual bool getpray();
};

class donkey : public animal
{
public:
    donkey();
    donkey(const donkey &d);
    virtual void voice();
    virtual bool getpray();
};

class owl : public animal
{
public:
    owl();
     owl(const owl &o);
    virtual void voice();
    virtual bool getpray();
};

class cell
{
private:
    animal *beast[2];
    bool f = true;
    int qty = 0;
public:
    cell();
    cell(const cell &c);
    void animalzoo(animal *an);
    int getqry();
    void voice();
};
class zoo
{
private:
    cell *cells;
public:
    zoo();
    zoo(const zoo &z);
    ~zoo();
    void walk();
    void tryAnimal(animal *an);
};

class excess
{
private:
    string name;
public:
    excess(string n);
    void setname(string n);
    string getname();
};
