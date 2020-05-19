#include "dNum.h"
#include "NOD.h"
#include <iostream>

//dNumA

dNumA::dNumA()
{
	n.setBoth(0, 1);
}

dNumA::dNumA(const int& a)
{
	n.setBoth(a, 1);
}

dNumA::dNumA(const int& a, const int& b)
{
	if (b == 0)
	{
		printf("Wrong number! Created 0 / 1.\n");
		n.setBoth(0, 1);
	}
	else
	{
		if (b < 0)
		{
			n.setBoth(-a, -b);
		}
		else
		{
			n.setBoth(a, b);
		}
		n.reduction();
	}
}

dNumA& dNumA::operator+(const dNumA& num2)
{
	n.setBoth(n.getF() * num2.n.getS() + num2.n.getF() * n.getS(), n.getS() * num2.n.getS());
	n.reduction();
	return *this;
}

dNumA& dNumA::operator-(const dNumA& num2)
{
	n.setBoth(n.getF() * num2.n.getS() - num2.n.getF() * n.getS(), n.getS() * num2.n.getS());
	n.reduction();
	return *this;
}

dNumA& dNumA::operator*(const dNumA& num2)
{
	n.setBoth(n.getF() * num2.n.getF(), n.getS() * num2.n.getS());
	n.reduction();
	return *this;
}

dNumA& dNumA::operator/(const dNumA& num2)
{
	if (num2.n.getS() == 0)
	{
		printf("Wrong second number!\n");
		return *this;
	}
	n.setBoth(n.getF() * num2.n.getS(), n.getS() * num2.n.getF());
	n.reduction();
	return *this;
}

dNumA& dNumA::operator++(int)
{
	n.setF(n.getF() + n.getS());
	if (n.getF() == 0) n.setS(1);
	return *this;
}

dNumA& dNumA::operator--(int)
{
	n.setF(n.getF() - n.getS());
	if (n.getF() == 0) n.setS(1);
	return *this;
}

std::istream& operator>>(std::istream& stream, dNumA& number)
{
	int f = 0, s = 0;
	stream >> f >> s;
	number.n.setBoth(f, s);
	return stream;
}
std::ostream& operator<<(std::ostream& stream, const dNumA& number)
{
	stream << number.n.getF() << " / " << number.n.getS();
	return stream;
}

//dNumN

dNumN::dNumN()
{
	first = 0;
	second = 1;
	nod = 1;
}

dNumN::dNumN(const int& a)
{
	first = a;
	second = 1;
	nod = 1;
}

dNumN::dNumN(const int& a, const int& b)
{
	if (b == 0)
	{
		printf("Wrong number! Created 0 / 1.\n");
		first = 0;
		second = 1;
		nod = 1;
	}
	else
	{
		if (b < 0)
		{
			first = -a;
			second = -b;
		}
		else
		{
			first = a;
			second = b;
		}
		nod = findNOD();
		reduction();
	}
}

dNumN& dNumN::operator+(const dNumN& num2)
{
	first = first * num2.second + num2.first * second;
	second *= num2.second;
	nod = findNOD();
	reduction();
	return *this;
}

dNumN& dNumN::operator-(const dNumN& num2)
{
	first = first * num2.second - num2.first * second;
	first *= num2.second;
	nod = findNOD();
	reduction();
	return *this;
}

dNumN& dNumN::operator*(const dNumN& num2)
{
	first *= num2.first;
	second *= num2.second;
	nod = findNOD();
	reduction();
	return *this;
}

dNumN& dNumN::operator/(const dNumN& num2)
{
	if (num2.second == 0)
	{
		printf("Wrong second number!\n");
		return *this;
	}
	first *= num2.second;
	second *= num2.first;
	nod = findNOD();
	reduction();
	return *this;
}

dNumN& dNumN::operator++(int)
{
	first += second;
	if (first == 0) second = 1;
	return *this;
}

dNumN& dNumN::operator--(int)
{
	first -= second;
	if (first == 0) second = 1;
	return *this;
}

std::istream& operator>>(std::istream& stream, dNumN& number)
{
	stream >> number.first >> number.second;
	return stream;
}
std::ostream& operator<<(std::ostream& stream, const dNumN& number)
{
	stream << number.first << " / " << number.second;
	return stream;
}