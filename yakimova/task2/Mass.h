#pragma once
class Mass
{
	int n;  // ������ �������
	int* a; //��������� �� 1 �������
public:
	Mass(int size);
	Mass(const Mass& x);

	~Mass();

	void vvod();
	void print();

}; 
