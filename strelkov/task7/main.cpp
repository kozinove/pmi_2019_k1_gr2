#include "zoo.h"






int main()
{
	lion l;
	parrot p;
	monkey m;
	zoo z;
	z.getAn(0, &l);
	z.getAn(1, &l);
	z.getAn(3, &p);
	z.getAn(6, &p);
	z.getAn(7, &m);
	z.getAn(8, &m);
	z.getAn(9, &p);
	try 
	{
		z.getAn(1, &m);
	}
	catch (const char* str)
	{
		str;
		cout << str << endl;
	}
	try
	{
		z.getAn(2, &l);
	}
	catch (const char* str)
	{
		str;
		cout << str << endl;
	}
	try
	{
		z.getAn(7, &l);
	}
	catch (const char* str)
	{
		str;
		cout << str << endl;
	}
	try
	{
		z.getAn(9, &p);
	}
	catch (const char* str)
	{
		str;
		cout << str << endl;
	}
	z.walk();

	return 0;
}