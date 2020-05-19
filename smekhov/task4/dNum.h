#pragma once
#include <iostream>

class dNum
{
private:
	int up, down;
	void reduction();
public:
	dNum();
	dNum(const int& a);
	dNum(const int& a, const int& b);
	dNum& operator+(const dNum& num2);
	dNum& operator-(const dNum& num2);
	dNum& operator*(const dNum& num2);
	dNum& operator/(const dNum& num2);
	dNum& operator++(int);
	dNum& operator--(int);
	friend std::istream& operator>>(std::istream& stream, dNum& number);
	friend std::ostream& operator<<(std::ostream& stream, const dNum& number);
};