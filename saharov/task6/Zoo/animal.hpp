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
//    animal *a;
    bool emphy;
public:
    animal *a;
    void _emphy();
    void add(animal *_a);
    void sound()
    {
        if(emphy)
            cout << "no sound" << endl;
        else
            a -> sound() ;
    }
};

class zoo: public box
{
public:
    box *boxes;
    zoo(box *_boxes);
    //void sound();

    ~zoo();
};

