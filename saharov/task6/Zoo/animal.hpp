#pragma once

#include <iostream>
#include <cstdlib>

using namespace std;

class animal
{
public:
    virtual void sound() = 0;
};

class bird: public animal
{
    void sound() override
    {
        cout << "Chick - chi-rick" << endl;
    }
};

class tiger: public animal
{
    void sound() override
    {
         cout << "Ur" << endl;
    }
};

class snake: public animal
{
    void sound() override
    {
         cout << "Shh" << endl;
    }
};

class box
{
    animal *a;
    bool emphy;
public:
    void add(animal *_a)
    {
        if(emphy)
        {
            emphy = false;
            a = _a;
        }
    }
    animal* getA()
    {
        return a;
    }
    void sound()
    {
        if(emphy)
            cout << "no sound" << endl;
        else
            a -> sound();
    }

    void _emphy();

};

class zoo
{
    box boxes[10];

    tiger t;
    bird b;
    snake s;
public:
    zoo();
    void walk();

};

