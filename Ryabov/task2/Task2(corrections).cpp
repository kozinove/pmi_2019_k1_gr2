

#include <stdio.h>

class mass
{
public:
    int size;
    int* a;
    mass(int n=1, int num=1)
    {
        size = n;
        a = new int[size];
        for (int i = 0; i < size; i++)
        a[i] = num;
    }
    ~mass()
    {
        delete[]a;
    }
   mass(const mass& copy)
   {
       size = copy.size;
    a = new int[size];
    for (int i = 0; i < size; i++)
    a[i] = copy.a[i];
   }
};
void vivod(mass a)
{
    printf("massiv:");
    for (int i = 0; i < a.size; i++)
    {
        printf(" %d", a.a[i]);
    }
    printf(";");
    printf(" \n");
}

int main()
{
    
    mass kir(8, 17);
    vivod(kir);
    return 0;
}

