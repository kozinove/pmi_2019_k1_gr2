#include "animal.hpp"
using namespace std;


void box::_emphy()
{
    emphy = true;
}

void box::add(animal *_a)
{
    if(emphy)
    {
        emphy = false;
        a = _a;
    }
}

//void box::sound()


zoo::zoo(box *_boxes)
{
    boxes = new box[10];
    for(int i = 0; i < 10; i ++)
    {
        boxes[i]._emphy();
        boxes[i].add(_boxes[i].a);
    }
}

/*void zoo::sound()
{
    for(int i = 0; i < 10; i ++)
        boxes[i].sound();
}*/

zoo::~zoo()
{
    delete[]boxes;
}
