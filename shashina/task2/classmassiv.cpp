#include <stdio.h>

class massiv
{
public:
    int *arr;
    int size;
    massiv(int sz, int value = 0)
    {
        arr = new int[sz];
        if(!arr) return;
        size = sz;
        for(int i = 0;i<size;i++)
        arr[i]=value;
    }

    ~massiv()
    {
        delete [] arr;
    }

    massiv(const massiv &copy)
    {
        arr = new int[copy.size];
        if (!arr) return;
        size = copy.size;
        for(int i = 0;i<copy.size;i++)
        arr[i]=copy.arr[i];
    }
};

void print(massiv arr)
{
    printf("array = [");
    for(int i = 0;i<arr.size-1;i++)
        printf("%d ", arr.arr[i]);
    printf("%d]\n", arr.arr[arr.size-1]);
}


int main()
{
    massiv arr(15,46);
    print(arr);
    return 0;

}
