#include "matrix.h"

matrix::matrix(int n)
{
	if (n < 0) throw - 1;
	size = n;
	pMatrix = new int[((1 + n) * n) / 2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			pMatrix[((n + (n - i + 1)) * i) / 2 + j] = 0;
		}
	}
}

matrix::matrix(int n, int k)
{
	if (n < 0) throw - 1;
	size = n;
	pMatrix = new int[((1 + n) * n) / 2];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			pMatrix[((n + (n - i + 1)) * i) / 2 + j] = k;
		}
	}
}

matrix::matrix(const matrix& m)
{
	size = m.size;
	pMatrix = new int[((1 + size) * size) / 2];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			pMatrix[((size + (size - i + 1)) * i) / 2 + j] = m.GetElem(i, j);
		}
	}
}

matrix::~matrix()
{
	delete[] pMatrix;
}

int matrix::GetSize() const
{
	return size;
}

void matrix::SetElem(int x, int _i, int _j)
{
	pMatrix[((size + (size - _i + 1)) * _i) / 2 + _j] = x;
}

int matrix::GetElem(int _i, int _j) const
{
	return pMatrix[((size + (size - _i + 1)) * _i) / 2 + _j];
}

bool matrix::operator==(const matrix& m) const
{
	if (size != m.size) return 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (GetElem(i, j) != m.GetElem(i, j)) return 0;
		}
	}
	return 1;
}

bool matrix::operator!=(const matrix& m) const
{
	if (size != m.size) return 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			if (GetElem(i, j) != m.GetElem(i, j)) return 1;
		}
	}
	return 0;
}

matrix& matrix::operator=(const matrix& m)
{
	if (this != &m)
	{
		if (size != m.size)
		{
			delete[] pMatrix;
			size = m.size;
			pMatrix = new int[size];
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - i; j++)
			{
				pMatrix[((size + (size - i + 1)) * i) / 2 + j] = m.GetElem(i, j);
			}
		}
	}
	return *this;
}

matrix matrix::operator+(const matrix& m) const
{
	if (size != m.size) throw - 1;
	matrix tmp(size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			tmp.pMatrix[((size + (size - i + 1)) * i) / 2 + j] = GetElem(i, j) + m.GetElem(i,j);
		}
	}
	return tmp;
}

matrix matrix::operator-(const matrix& m) const
{
	if (size != m.size) throw - 1;
	matrix tmp(size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			tmp.pMatrix[((size + (size - i + 1)) * i) / 2 + j] = GetElem(i, j) - m.GetElem(i, j);
		}
	}
	return tmp;
}

matrix matrix::operator*(const matrix& m) const
{
	if (size != m.size) throw - 1;
	matrix tmp(size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i; j++)
		{
			for (int k = 0; k < j + 1; k++)
			{
				tmp.pMatrix[((size + (size - i + 1)) * i) / 2 + j] += GetElem(i, k) * m.GetElem(k + i, j - k);
			}
		}
	}
	return tmp;
}

istream& operator>>(istream& istr, matrix& m)
{
	int x;
	for (int i = 0; i < m.size; i++)
	{
		cout << "Enter line [" << i << "]: ";
		for (int j = 0; j < m.size - i; j++)
		{
			istr >> x;
			m.SetElem(x, i, j);
		}
	}
	return istr;
}

ostream& operator<<(ostream& ostr, const matrix& m)
{
	for (int i = 0; i < m.size; i++)
	{
		for (int j = 0; j < m.size; j++)
		{
			if (j < i) cout << 0 << " ";
				else cout << m.GetElem(i, j - i) << " ";
		}
		cout << endl;
	}
	return ostr;
}
