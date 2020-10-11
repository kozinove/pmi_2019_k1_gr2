#pragma once
#include <iostream>


using namespace std;


class matrix
{
private:
	int* m;
	int n;
public:

	matrix(int _n);
	void outmatrix();
	void addElem(int i, int j);

};