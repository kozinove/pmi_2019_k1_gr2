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

    tiger t;
    bird b;
    snake s;
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
    box* init();
};

class zoo
{
    box *boxes;
public:

    zoo(box *_boxes);
    void walk()
    {
        for(int i = 0; i < 10; i ++)
            boxes[i].sound();
    }

    ~zoo();
};

