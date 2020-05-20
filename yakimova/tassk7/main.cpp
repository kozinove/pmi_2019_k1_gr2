#include "zoo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>


int main() {

	tiger t;
	kangaroo k;
	bear b;
	zoo z;

	z.try_add_animal(&t);
	z.try_add_animal(&k);
	z.try_add_animal(&b);

	z.walk();
	return 0;
}