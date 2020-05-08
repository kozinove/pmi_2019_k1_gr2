#pragma once

class animals
{
public:
    virtual void voice()  = 0;
};

class horse : public animals
{
    virtual void voice();
};

class donkey : public animals
{
    virtual void voice();
};

class owl : public animals
{
    virtual void voice();
};

class cell
{
protected:
    bool f = true;
    animals *beast;
public:
    void animalzoo(animals *animal);
    void voice();
};

class zoo
{
public:
    cell cells[10];
    zoo();
    void wolk();
};
