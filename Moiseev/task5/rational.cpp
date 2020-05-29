#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include "rational.h"

using namespace std;

NOD::NOD(const int& ch, const int& zn)
{
	this->ch = ch;
	this->zn = zn;
	nod = nodf();
}

void NOD::setnod(const int& ch, const int& zn)
{
	this->ch = ch;
	this->zn = zn;
	nod = nodf();
}

int NOD::getnod()
{
	return nod;
}

int NOD::nodf()
{
	int a = abs(ch);
	int b = abs(zn);
	if (a < b)
	{
		int temp = a;
		a = b;
		b = temp;
	}

	int f;
	while (b != 0)
	{
		f = a % b;
		a = b;
		b = f;
	}
	return a;
}

rat::rat(const int& ch, const int& zn) : nod(1, 1)
{
	a = ch;
	if (zn == 0) b = 1;
	else a = zn;
	if (b < 0)
	{
		a = a * (-1);
		b = b * (-1);
	}

	sokr();
}

const rat rat::operator+ (const rat& x)
{
	rat r(0, 1);
	r.b = b * x.b;
	r.b = r.b / b * a + r.b / x.b * x.a;
	r.sokr();
	return r;
}

const rat rat::operator- (const rat& x)
{
	rat r(0, 1);
	r.b = b * x.b;
	r.b = r.b / b * a - r.b / x.b * x.a;
	r.sokr();
	return r;
}

const rat rat::operator* (const rat& x)
{
	rat r(0, 1);
	r.a = a * x.a;
	r.b = b * x.b;
	r.sokr();
	return r;
}

const rat rat::operator/ (const rat& x)
{
	rat r(0, 1);
	r.a = a * x.b;
	r.b = b * x.a;
	r.sokr();
	return r;
}

rat rat::operator++(int)
{
	rat t = *this;
	a = a + b;
	return t;
}

rat& rat::operator++()
{
	a = a + b;
	return *this;
}

istream& operator>>(istream& output, rat& x)
{
	output >> x.a >> x.b;
	return output;
}

ostream& operator<<(ostream& input, const rat& x)
{
	input << x.a << "/" << x.b;
	return input;
}

void rat::print() 
{                                                
	printf("%d/%d\n", a, b);
}

int rat::sokr()
{
	nod.setnod(a, b);
	int x = nod.getnod();
	a /= x;
	b /= x;
	return 0;
}


frat::frat(const int& ch, const int& zn) : NOD(1, 1)
{
	a = ch;
	if (zn == 0) b = 1;
	else b = zn;
	if (b < 0)
	{
		a = a * (-1);
		b = b * (-1);
	}
	sokr();

}

frat frat::operator+(const frat& x)
{
	frat r(0, 1);
	r.b = b * x.b;
	r.a = r.b / b * a + r.b / x.b * x.a;
	r.sokr();
	return r;
}

frat frat::operator-(const frat& x)
{
	frat r(0, 1);
	r.b = b * x.b;
	r.a = r.b / b * a - r.b / x.b * x.a;
	r.sokr();
	return r;
}

frat frat::operator*(const frat& x)
{
	frat r(0, 1);
	r.a = a * x.a;
	r.b = b * x.b;
	r.sokr();
	return r;
}

frat frat::operator/(const frat& x)
{
	frat r(0, 1);
	r.a = a * x.b;
	r.b = b * x.a;
	r.sokr();
	return r;
}

frat frat::operator++(int)
{
	frat temp = *this;
	a = a + b;
	return temp;
}

frat& frat::operator++()
{
	a = a + b;
	return *this;
}

istream& operator>>(istream& output, frat& x)
{
	output >> x.a >> x.b;
	return output;
}

ostream& operator<<(ostream& input, const frat& x)
{
	input << x.a << "/" << x.b;
	return input;
}

void frat::print()
{
	printf("%d/%d \n", a, b);
}

int frat::sokr()
{
	setnod(a, b);
	int x = getnod();
	a /= x;
	b /= x;
	return 0;
}