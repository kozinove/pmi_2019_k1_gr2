#pragma once
#include <iostream>


using namespace std;


class matrix
{
private:
	int* mat;
	int n;
public:

	matrix(int _n);
	matrix(int _n, int _elem);
	~matrix();
	void outmatrix();
	void addElem(int i, int j);
	void sumMatrix(matrix _m1, matrix _m2);
};