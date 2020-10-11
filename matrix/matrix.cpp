#include "matrix.h"

matrix::matrix(int _n)
{
	n = _n;
	int k = ((_n + 1) * _n) / 2;
	m = new int[k];
	for (int i = 0; i < k; i++)
		m[i] = 0;
}
void matrix::outmatrix()
{
	for (int i = 0; i < n; i++) {
		
		for (int j = i; j < n; j++)
			{
				int k = n + ((n + i) * i) / 2 - j;
				cout << m[k];
			}
		cout << endl;
	}
}

void matrix::addElem(int i,int j)
{
	int k = n + (n + i) * i / 2 - j;
	m[k] = 1;
}