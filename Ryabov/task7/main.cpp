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
    Zoo.inner(1, &be);
    Zoo.inner(1, &bi);
    Zoo.inner(1, &z);
    try
    {
        Zoo.inner(1, &be);
    }
    catch (const char* str)
    {
        cout << str << '\n';
        cout << "try again\n";
    }
    try
    {
        Zoo.inner(1, &bi);
    }
    catch (const char* str)
    {
        cout << str << '\n';
        cout << "try again\n";
    }
    try
    {
        Zoo.inner(1, &z);
    }
    catch (const char* str)
    {
        cout << str << '\n';
        cout << "try again\n";
    }
    Zoo.check;
    return 0;

}
