#include "NOD.h"


twoNumber::twoNumber(const int& f, const int& s)
{
	first = f;
	second = s;
	nod = findNOD();
}

int twoNumber::findNOD()
{
	int a, b, r;
	if (first > second)
	{
		a = first;
		b = second;
	}
	else
	{
		a = second;
		b = first;
	}
	if (b == 0)
	{
		return a;
	}
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}
const int twoNumber::getF() const
{
	return first;
}
void twoNumber::setF(const int& f)
{
	first = f;
	nod = findNOD();
}
const int twoNumber::getS() const
{
	return second;
}
void twoNumber::setS(const int& s)
{
	second = s;
	nod = findNOD();
}

const int twoNumber::getNOD() const
{
	return nod;
}

void twoNumber::setBoth(const int& f, const int& s)
{
	first = f;
	second = s;
	nod = findNOD();
}

void twoNumber::reduction()
{
	first = first / nod;
	second = second / nod;
}