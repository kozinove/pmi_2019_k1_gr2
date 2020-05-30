#pragma once
#include <iostream>

using namespace std;

class NOD
{
    private:
	  int ch, zn;
	  int nod;
	  int nodf();
    public:
	  NOD(const int& ch, const int& zn);
	  int getnod();
	  void setnod(const int& ch, const int& zn);
};

class rat
{
    private:
	  
	  int a, b;
	  NOD nod;
	  int sokr();

    public:

	  rat(const int& a, const int& b);

	  const rat operator- (const rat& x);
	  const rat operator+ (const rat& x);
	  const rat operator/ (const rat& x);
	  const rat operator* (const rat& x);

	  rat operator++(int);
	  rat& operator++();

	  friend std::istream& operator>>(std::istream& output, rat& x);
	  friend std::ostream& operator<<(std::ostream& input, const rat& x);

	  void print();

};

class frat : protected NOD
{
    private:
	  
	  int a, b;
	  int sokr();

    public:
 	  
	  frat(const int& a, const int& b);
	  frat operator+(const frat& x);
	  frat operator-(const frat& x);
	  frat operator*(const frat& x);
	  frat operator/(const frat& x);
	  frat operator++(int);
	  frat& operator++();
	  
	  friend istream& operator>>(istream& output, frat& x);
	  friend ostream& operator<<(ostream& input, const frat& x);
	
	  void print();
};
