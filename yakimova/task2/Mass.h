#pragma once
class Mass
{
	int n;  // ������ �������
	int* a; //��������� �� 1 �������
public:
	Mass();
	Mass(int size);
	Mass(Mass& x);

	~Mass();

	void vvod();
	void print();

}; 
