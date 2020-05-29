#pragma once
#include <iostream>

class rat
{
	
	int ch, zn;
	
	void sokr();

    public:
	
	  rat();

	  rat(int a, int b);
	
	  const rat operator- (const rat& x);
	  const rat operator+ (const rat& x);
	  const rat operator/ (const rat& x);
	  const rat operator* (const rat& x);
	  rat& operator++(int);

	  friend std::istream& operator>>(std::istream& output, rat& x);
	  friend std::ostream& operator<<(std::ostream& input, const rat& x);

	  void print();

};
