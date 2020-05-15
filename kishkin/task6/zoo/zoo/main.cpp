#include "animal.h"
#include <iostream>
#include <stdlib.h>

#include <ctime> // For rand()


#define QuantityAnimals 2

using namespace std;

void walk(const zoo& temp) {
	for (int i = 0; i < N; i++) {
		cout << i + 1 << ". ";
		temp.cells[i].sound();
	}
}

template < typename T >
void tryAddAnimalToZoo(T* an, zoo* z) {
	try {
		for (int i = 0; i < QuantityAnimals; i++)
			z->cells[rand() % 10].addAnimal(an);
	}
	catch (exceptionAnimal& exceptionName) {
		cout << "error: " << exceptionName.getName() << '\n' << "try adding another animal" << '\n';
	}
}



int main() {
	srand(time(NULL)); // For different meanings in rand()

	tiger t;
	kangaroo k;
	bear b;

	zoo z;

	tryAddAnimalToZoo(&t, &z);
	tryAddAnimalToZoo(&k, &z);
	tryAddAnimalToZoo(&b, &z);

	walk(z);

	// How to use .getPredArr(arr)
	/*bool arr[quin];
	if (z.cells[0].getCount() != 0)
		cout << z.cells[0].getPredArr(arr)[0];*/
	

	return 0;
}