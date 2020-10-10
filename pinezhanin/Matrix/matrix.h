#pragma once

#include<iostream>

using namespace std;

class matrix
{
	int* pMatrix;
	int size;

public:
	matrix(int n);
	matrix(int n, int k);
	matrix(const matrix &m);
	~matrix();

	int GetSize() const;
	void SetElem(int x, int _i, int _j);
	int GetElem(int _i, int _j) const;

	bool operator==(const matrix& m) const;
	bool operator!=(const matrix& m) const;

	matrix& operator=(const matrix& m);
	matrix operator+(const matrix& m) const;
	matrix operator-(const matrix& m) const;
	matrix operator*(const matrix& m) const;

	friend istream& operator>>(istream& istr, matrix& m);
	friend ostream& operator<<(ostream& ostr, const matrix& m);

};
