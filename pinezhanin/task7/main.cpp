#include<iostream>
#include<cstdlib>
#include"zoo.h"

using namespace std;

int main()
{
    zoo ZooPark;
    wolf w;
    tiger t;
    snake s;
    donkey d;
    int num = 1;
    int numAn;
    while(true)
    {
        cout <<"Enter animal number(1 - wolf, 2 - tiger,...): ";
        cin >> numAn;
        cout << "Enter the cage number(1..10 or 0 to exit): ";
        cin >> num;
        if (num <= 0) break;

        if (numAn == 1) ZooPark.addAnim(num-1, &w);
        if (numAn == 2) ZooPark.addAnim(num-1, &t);
        if (numAn == 3) ZooPark.addAnim(num-1, &s);
        if (numAn == 4) ZooPark.addAnim(num-1, &d);
    }

    ZooPark.checkAllCage();

    return 0;
}