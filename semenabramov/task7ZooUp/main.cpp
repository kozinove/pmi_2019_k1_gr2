#include <iostream>
#include "Zoo.h"
#include "Wolf.h"
#include "Fox.h"
#include "Cat.h"

using namespace std;

int main() {

	Zoo zoo;	//Создал зоопарк

	Wolf wolf(1), wolf1(2), wolf2(1984);	//Создаём живтных
	Fox fox1(1),fox2(2),fox3(3);
	Cat cat1(1), cat2(2),cat3(3),cat4(4),cat5(5),cat6(6),cat7(7);


	try {								//Два травоядных не вызывают ошибок
		zoo.add_to_cell(&cat2, 1);
		zoo.add_to_cell(&cat1, 1);
	}
	catch (const char* str) {
		cout << "Error: " << str << endl;
	}

	try {								//Когда хищьника посадили первым к нему нельзя поместьть кого-то ещё 

		zoo.add_to_cell(&wolf, 4);
		zoo.add_to_cell(&cat3, 4);
	}
	catch (const char* str) {
		cout << "Error: " << str << endl;
	}

	try {								//Нельзя добавить хищьника к травоядному	
		zoo.add_to_cell(&cat4, 6);
		zoo.add_to_cell(&fox1, 6);
	}
	catch (const char* str) {
		cout << "Error: " << str << endl;
	}

	try {								//Нельзя поместить в клетку больше двух животных
		zoo.add_to_cell(&cat5, 1);
	}
	catch (const char* str) {
		cout << "Error: " << str << endl;
	}


	zoo.around();	// Обходим зоопарк

	return 0;
}