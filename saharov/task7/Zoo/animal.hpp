#pragma once

#include <iostream>
#include <cstdlib>

using namespace std;

class animal
{
public:
    bool predator;
    virtual void sound() = 0;
};

class bird: public animal
{
    bool predator = false;
    void sound() override
    {
        cout << "Chick-chi-rick" << '\t';
    }
};

class tiger: public animal
{
    bool predator = true;
    void sound() override
    {
         cout << "Ur           " << '\t';
    }
};

class snake: public animal
{
    bool predator = true;
    void sound() override
    {
         cout << "Shh          " << '\t';
    }
};

class rabbit: public animal
{
    bool predator = false;
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
public:

    void add(animal *_a);
    void sound();
    void emphy();
    void check();
};

class zoo
{
    box boxes[10];

    tiger t;
    bird b;
    snake s;
    rabbit r;
public:
    zoo();
    void walk();

};

