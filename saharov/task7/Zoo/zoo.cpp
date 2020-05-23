#include "animal.hpp"
using namespace std;


void box::emphy()
{
    countAn = 0;
}

void box::add(animal *_a)
{
    if(countAn == 0)
    {
        countAn = 1;
        a1 = _a;
    }
    if(countAn == 1)
    {
        countAn = 2;
        a2 = _a;
    }
}

void box::check()
{
    if(countAn == 2)
        if((a1->getPr() == true)||(a2->getPr() == true))
            throw "predator no one";
    try
    {
        sound();
    }
    catch(const char *str)
    {
        countAn = 1;
        cout << str << endl;
    }
}

void box::sound()
{
    if(countAn == 1)
        a1 -> sound();
    if(countAn == 2)
    {
        a1 -> sound();
        a2 -> sound();
    }
    if(countAn == 0)
        cout << "No animals";
    cout << endl;
}

void zoo::walk()
{
    for(int i = 0; i < 10; i ++)
    {
        cout << "box:" << i << " ";
        boxes[i].check();
        boxes[i].sound();
    }
}

void zoo::addAn(int i, animal *_a)
{
    boxes[i].add(_a);
}

zoo::zoo()
{
    for(int i = 0; i < 10; i ++)
        boxes[i].emphy();
}

void zoo::create(animal *_b, animal *_t, animal *_s, animal *_r)
{
    for(int i = 0; i < 10; i ++)
    {
        int temp = rand()%10 + 0;
        addAn(temp, _b);
        temp = rand()%10 + 0;
        addAn(temp, _t);
        temp = rand()%9 + 0;
        addAn(temp, _s);
        temp = rand()%8 + 0;
        addAn(temp, _r);
    }
}
