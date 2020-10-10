#include<iostream>
#include"matrix.h"

using namespace std;

int main()
{
	matrix m1(4);
	matrix m2(4, 1);
	cout << m1 << endl;
	for (int i = 0; i < m1.GetSize(); i++)
	{
		for (int j = 0; j < m1.GetSize() - i; j++)
		{
			m1.SetElem(i * 5, i, j);
		}
	}
	cout << m1 << endl;
	matrix m3(m1);
	cout << m2 << endl;
	m1 = m3 * m2;
	cout << m1 << endl;
	return 0;
}