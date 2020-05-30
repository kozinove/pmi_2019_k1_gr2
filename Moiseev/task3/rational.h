#pragma once

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

	  void print();

};
