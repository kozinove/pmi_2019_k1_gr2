#include "header.h"
#include <iostream>
using namespace std;

int main()
{
	zoo park;
	lion l;
	tiger t;
	
	park.entercages(l, t);
	park.checkcages();

	return 0;
}