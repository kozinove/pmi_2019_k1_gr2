#include "Zoo.h"
#include <iostream>

using namespace std;

Zoo::Zoo(){
}

Cell* Zoo::take_cell(int num) {
	return &cells[num];
}

void Zoo::add_to_cell(Animal* an, int num) {
	cells[num].Add(an);
}

void Zoo::around() {
	for (int i = 0; i < n; i++)
	{
		cout << "Cell[" << i << "] -> ";
		cells[i].Ask();
	}
}