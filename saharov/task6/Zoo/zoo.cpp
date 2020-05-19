#include "animal.hpp"
using namespace std;


void box::_emphy()
{
    emphy = true;
}

void zoo::walk()
{
    for(int i = 0; i < 10; i ++)
        boxes[i].sound();
}

zoo::zoo()
{
    for(int i = 0; i < 10; i ++)
        boxes[i]._emphy();

    for(int i =0 ; i < 3; i ++)
        boxes[i].add(&b);
    for(int i = 3; i < 6; i ++)
        boxes[i].add(&t);
    for(int i = 6; i < 10; i ++)
        boxes[i].add(&s);
}
