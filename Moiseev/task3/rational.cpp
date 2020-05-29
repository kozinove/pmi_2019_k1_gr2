#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "rational.h"


rat::rat(int a, int b)
{
	ch = a;                          //ustanovka peremennih
	zn = b;
}

int NOD(int a, int b)
{
	int p;
	while (b != 0)
	{                            //nod
		p = a % b;
		a = b;
		b = p;
	}
	return a;
}

void rat::sokr()
{
	int p;
	int num, den;
	num = ch;
	den = zn;                         //sokrachenie
	if (ch > zn)
	{
		p = NOD(ch, zn);
	}
	else
	{
		p = NOD(ch, zn);
	}
	ch = ch / p;
	zn = zn / p;
}

rat::rat()
{
	ch = 0;            // znachenie ch i zn
	zn = 1;
}

const rat rat::operator+ (const rat& x)
{
	int a, b;
	a = ch * x.zn + x.ch * zn;            // slozhenie
	b = zn * x.zn;
	rat c(a, b);
	c.sokr();
	return c;
}
const rat rat::operator- (const rat& x)
{
	int a, b;
	a = ch * x.zn - x.ch * zn;                 //vichitanie
	b = zn * x.zn;
	rat c(a, b);
	c.sokr();
	return c;
}
const rat rat::operator* (const rat& x)
{
	int a, b;
	a = ch * x.ch;
	b = zn * x.zn;                         //unmozhenie
	rat c(a, b);
	c.sokr();
	return c;
}
const rat rat::operator/ (const rat& x)
{
	int a, b;
	a = ch * x.zn;
	b = zn * x.ch;                      //delenie
	rat c(a, b);
	c.sokr();
	return c;
}

rat& rat::operator++(int)
{
	ch = ch + zn;
	if (ch == 0)
	{                                              //slozhit s soboy
		zn = 1;
	}
	return *this;
}

void rat::print() 
{                                                 //vivod
	printf("%d/%d\n", ch, zn);
}