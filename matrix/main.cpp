#include "matrix.h"

int main()
{

	int n = 5;
	matrix m1(n,5);
	matrix m2(n, 3);
	matrix m3(n);
	matrix m4(n);
	m3.sumMatrix(m1, m2);
	m3.outmatrix();
	m4.addElem(2, 4);
	cout << endl;
	m4.outmatrix();
	return 0;
}