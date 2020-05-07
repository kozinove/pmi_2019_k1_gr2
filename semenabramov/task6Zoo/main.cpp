#include <iostream>
#include "Zoo.h"
#include "Wolf.h"
#include "Fox.h"
#include "Cat.h"

using namespace std;

int main() {

	Zoo zoo;	//������ �������

	Wolf wolf(1), wolf1(2), wolf2(1984);	//������ �������
	Fox fox1(3);
	Cat cat1(1);


	zoo.take_cell(3)->Add(&wolf);	// �������� �� �� �������
	zoo.take_cell(4)->Add(&wolf2);
	zoo.take_cell(7)->Add(&fox1);
	zoo.take_cell(9)->Add(&cat1);

	zoo.around();	// ������� �������

	return 0;
}