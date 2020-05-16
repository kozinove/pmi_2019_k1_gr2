#include "animal.hpp"



int main()
{

    box *_boxes;
    _boxes -> init();
    zoo z(_boxes);
    z.walk();

    return 0;
}
