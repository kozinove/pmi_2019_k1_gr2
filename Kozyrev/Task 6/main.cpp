#include "header.h"
#include <iostream>
using namespace std;

int main()
{
	zoo park;
	lion l;
	tiger t;
	
	entercages(park, l, t);
	checkcages(park);

	return 0;
}