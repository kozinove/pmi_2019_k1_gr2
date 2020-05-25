#include<iostream>
#include<cstdlib>
#include"zoo.h"

using namespace std;

int main()
{
    zoo Zoo;
    bear be;
    bird bi;
    zeebra z;
  
    int num = 1;
    int numBeast;
    while (true)
    {
        cout << "1-bear,2-bird,3-zeebra";
        cin >> numBeast;
        cout << "Witch cage you want to use?";
        cin >> num;
      

        if (numBeast == 1) Zoo.inner(num - 1, &be);
        if (numBeast == 2) Zoo.inner(num - 1, &bi);
        if (numBeast == 3) Zoo.inner(num - 1, &z);
    
    }

    Zoo.check();

    return 0;
}
