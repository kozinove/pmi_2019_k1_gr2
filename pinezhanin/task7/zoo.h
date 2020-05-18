#pragma once

#include<iostream>

using namespace std;

class animal
{
public:
    animal(bool b):predator(b){};
    virtual void voice() const = 0;
    bool getPredator() const;

private:
    bool predator;
};

class cage
{
    animal *animInCage1;
    animal *animInCage2;
    bool empty1;
    bool empty2;
public:
    cage();

    void addAnim(animal* an);
    void voice() const;
};

class zoo
{
public:
    void checkAllCage() const;
    void addAnim(int a, animal* an);
private:
    cage massCage[10];

};

class wolf : public animal
{
public:
    wolf():animal(true){};
    virtual void voice() const;
};

class tiger : public animal
{
public:
    tiger():animal(true){};
    virtual void voice() const;
};

class snake : public animal
{
public:
    snake():animal(true){};
    virtual void voice() const;
};

class donkey : public animal
{
public:
    donkey():animal(false){};
    virtual void voice() const;
};
