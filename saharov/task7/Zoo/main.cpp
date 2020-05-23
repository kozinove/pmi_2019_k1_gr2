#include "animal.hpp"



int main()
{
    bird b;
    tiger t;
    snake s;
    rabbit r;

    zoo z(&b, &t, &s, &r);
    z.walk();

    return 0;
}
