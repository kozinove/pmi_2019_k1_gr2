#include<stdio.h>

class array 
{
public:
	
	int size;
	int* arr;

	array(int l, int v)
	{
		size = l;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = v;
		}
	}

	array(const array& copy)
	{
		size = copy.size;
		arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = copy.arr[i];
		}
	}

	~array()
	{
		delete[] arr;
	}
};

 void print(array arr)
 {
	 for (int i = 0; i < arr.size; i++)
	 {
		 printf(" %d ", arr.arr[i]);
	 }
 }

 int main()
 {
	 array mas(10, 10);
	 print(mas);
	 return 0;
 }
