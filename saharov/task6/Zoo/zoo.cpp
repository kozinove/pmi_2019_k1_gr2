#include "animal.hpp"
using namespace std;


void box::_emphy()
{
    emphy = true;
}


box* box::init()
{
    box _boxes[10];

    for(int i = 0; i < 10; i ++)
        _boxes[i]._emphy();

    for(int i =0 ; i < 3; i ++)
        _boxes[i].add(&t);
    for(int i = 3; i < 6; i ++)
        _boxes[i].add(&t);
    for(int i = 6; i < 10; i ++)
        _boxes[i].add(&s);

    return _boxes;
}


zoo::zoo(box *_boxes)
{
    boxes = new box[10];
    for(int i = 0; i < 10; i ++)
    {
        boxes[i]._emphy();
        boxes[i].add(_boxes[i].getA());
    }
}


zoo::~zoo()
{
    delete[]boxes;
}
