#pragma once

#include <iostream>
#include <cstdlib>

using namespace std;

class animal
{
    bool predator;
public:
    void pred()
    {
        predator = true;
    }
    void no_pred()
    {
        predator = false;
    }
    bool getPr()
    {
        return predator;
    }
    virtual void sound() = 0;
};

class bird: public animal
{
public:
    no_pred();
    void sound() override
    {
        cout << "Chick-chi-rick" << '\t';
    }
};

class tiger: public animal
{
public:
    pred();
    void sound() override
    {
         cout << "Ur           " << '\t';
    }
};

class snake: public animal
{
public:
    pred();
    void sound() override
    {
         cout << "Shh          " << '\t';
    }
};

class rabbit: public animal
{
public:
    no_pred();
    void sound() override
    {
        cout << "Jump-jump     " << '\t';
    }
};

class box
{
    int countAn;
    animal *a1;
    animal *a2;

    tiger t;
    bird b;
    snake s;
    rabbit r;
public:
    animal &take_tiger() {return t;}
    animal &take_bird() {return b;}
    animal &take_snake() {return s;}
    animal &take_rabbit() {return r;}
    void add(animal *_a);
    void sound();
    void emphy();
    void check();
};

class zoo
{
    box boxes[10];

public:
    zoo();
    void walk();

};

