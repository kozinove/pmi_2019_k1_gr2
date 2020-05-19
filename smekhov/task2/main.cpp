#include <stdio.h>

class array
{
public:
	int size;
	int* a;
	array(int s = 1, int fill = 0) 
	{ 
		size = s;
		a = new int[size];
		for (int i = 0; i < size; i++)
			a[i] = fill;
	}
	~array()
	{
		delete[]a;
	}
	array(const array& copy)
	{
		size = copy.size;
		a = new int[size];
		for (int i = 0; i < size; i++)
			a[i] = copy.a[i];
	}
};

void print(array a)
{
	printf("array = [");
	for (int i = 0; i < a.size - 1; i++)
		printf("%d, ", a.a[i]);
	printf("%d]", a.a[a.size - 1]);
}

int main()
{
	array a(10, 5);
	print(a);
	return 0;
}