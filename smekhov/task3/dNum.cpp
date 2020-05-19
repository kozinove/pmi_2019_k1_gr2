#include "dNUm.h"
#include <stdio.h>

void dNum::reduction()
{
	int a = up, b = down;
	if (a == 0)
	{
		b = 1;
		return;
	}
	if (a < b)
	{
		int temp = b;
		b = a;
		a = temp;
	}
	if (a % b != 0)
	{
		int r = a % b;
		while (r != 0)
		{
			a = b;
			b = r;
			r = a % b;
		}
	}
	up = up / b;
	down = down / b;
}

dNum::dNum() 
{
	up = 0;
	down = 1;
}

dNum::dNum(const int& a) 
{ 
	up = a; 
	down = 1;
}

dNum::dNum(const int& a, const int& b)
{
	if (b == 0)
	{
		printf("Wrong number! Created 0/1.\n");
		up = 0;
		down = 1;
	}
	else
	{
		if (b < 0)
		{
			up = -a;
			down = -b;
		}
		else
		{
			up = a;
			down = b;
		}
		this->reduction();
	}
}

dNum& dNum::operator+(const dNum& num2)
{
	up = up * num2.down + num2.up * down;
	down *= num2.down;
	this->reduction();
	return *this;
}

dNum& dNum::operator-(const dNum& num2)
{
	up = up * num2.down - num2.up * down;
	down *= num2.down;
	this->reduction();
	return *this;
}

dNum& dNum::operator*(const dNum& num2)
{
	up *= num2.up;
	down *= num2.down;
	this->reduction();
	return *this;
}

dNum& dNum::operator/(const dNum& num2)
{
	if (num2.up == 0)
	{
		printf("Wrong second number!\n");
		return *this;
	}
	up *= num2.down;
	down *= num2.up;
	this->reduction();
	return *this;
}

dNum& dNum::operator++(int)
{
	up += down;
	if (up == 0) down = 1;
	return *this;
}

dNum& dNum::operator--(int)
{
	up -= down;
	if (up == 0) down = 1;
	return *this;
}

void dNum::print()
{
	if (down == 1)
		printf("%d\n", up);
	else
		printf("%d/%d\n", up, down);
}