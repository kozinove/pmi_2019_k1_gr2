#include "zoo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void walk(const zoo& z) {
	for (int i = 0; i < 10; i++) 
		z.cells[i].sound();
}

void try_add_animal(animal* an, zoo& z) {
	try {
		for (int i = 0; i < 3; i++)
			z.cells[rand() % 10].addAnimal(an);
	}
	catch (const char*str) {
		cout << "error: "<< str << '\n';
	}
}



int main() {

	tiger t;
	kangaroo k;
	bear b;
	zoo z;

	try_add_animal(&t, z);
	try_add_animal(&k, z);
	try_add_animal(&b, z);

	walk(z);
	return 0;
} 