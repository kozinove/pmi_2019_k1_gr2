#pragma once
#include <iostream>
#include "NOD.h"

class dNumA
{
private:
	twoNumber n;
public:
	dNumA();
	dNumA(const int& a);
	dNumA(const int& a, const int& b);
	dNumA& operator+(const dNumA& num2);
	dNumA& operator-(const dNumA& num2);
	dNumA& operator*(const dNumA& num2);
	dNumA& operator/(const dNumA& num2);
	dNumA& operator++(int);
	dNumA& operator--(int);
	friend std::istream& operator>>(std::istream& stream, dNumA& number);
	friend std::ostream& operator<<(std::ostream& stream, const dNumA& number);
};

class dNumN: private twoNumber
{
public:
	dNumN();
	dNumN(const int& a);
	dNumN(const int& a, const int& b);
	dNumN& operator+(const dNumN& num2);
	dNumN& operator-(const dNumN& num2);
	dNumN& operator*(const dNumN& num2);
	dNumN& operator/(const dNumN& num2);
	dNumN& operator++(int);
	dNumN& operator--(int);
	friend std::istream& operator>>(std::istream& stream, dNumN& number);
	friend std::ostream& operator<<(std::ostream& stream, const dNumN& number);
};