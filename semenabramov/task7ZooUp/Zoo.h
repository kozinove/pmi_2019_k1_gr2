#pragma once
#include "Cell.h"
class Zoo
{
protected:
	int n = 10;
	Cell cells[10];
public:
	Zoo();
	
	void around();
	Cell* take_cell(int num);	//Получить полный доступ к клетке (не стоит давать пользователям)
	void add_to_cell(Animal* an, int num);	//Добавить животное по ссылке на него и номеру клетки

};

