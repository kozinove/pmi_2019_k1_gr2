#include "matrix.h"

matrix::matrix(int _n)
{
	n = _n;
	mat = new int[((n + 1) * n) / 2];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i; j++)
		{
			int k = ((n + (n - i + 1)) * i) / 2 + j;
			mat[((n + (n - i + 1)) * i) / 2 + j] = 0;
		}
}
matrix::matrix(int _n, int _elem)
{
	n = _n;
	mat = new int[((n + 1) * n) / 2];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - i; j++)
		{
			int k = ((n + (n - i + 1)) * i) / 2 + j;
			mat[((n + (n - i + 1)) * i) / 2 + j] = _elem;
		}
}
matrix::~matrix() 
{
	delete[] mat;
}
void matrix::outmatrix()
{
	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j < n; j++)
			{
			if (j < i)
				cout << "0";
			else
			{
				int k = ((n + (n - i + 1)) * i) / 2 + (j - i);
				cout << mat[k]; 
			}
				
			}
		cout << endl;
	}
}

void matrix::addElem(int i,int j)
{
	int k = ((n + (n - (i - 1) + 1)) * (i - 1)) / 2 + (j - i);
	mat[k] = 1;
}

void matrix::sumMatrix(matrix _m1,matrix _m2)
{
	if (_m1.n < _m2.n) throw "size not equal";
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++) 
		{
			int k = ((n + (n - i + 1)) * i) / 2 + j;
			mat[k] = _m1.mat[k] + _m2.mat[k];
		}
	}
	
}