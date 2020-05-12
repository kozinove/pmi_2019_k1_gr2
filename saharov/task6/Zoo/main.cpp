#include "animal.hpp"

void walk(zoo *z)
{
    for(int i = 0; i < 10; i ++)
    {
        z -> boxes[i].sound();
        //z  -> sound();
    }
}

box* init()
{
    box *_boxes = NULL;
    _boxes = new box[10];
    int temp;
    bird b;
    tiger t;
    snake s;

    for(int i =0 ; i < 3; i ++)
        _boxes[i].add(&t);
    for(int i = 3; i < 6; i ++)
        _boxes[i].add(&t);
    for(int i = 6; i < 10; i ++)
        _boxes[i].add(&s);
    //for(int i = 0; i < 10; i ++)
        //_boxes[i].sound();
    return _boxes;
}

int main()
{


    zoo z(init());

    walk(&z);

    return 0;
}
