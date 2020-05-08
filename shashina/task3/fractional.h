#pragma once

class rational
{
private:
    int n, m;
    void abb ();
public:
   rational ();
   rational (int a, int b);
   const rational operator+ (const rational &s);
   const rational operator- (const rational &s);
   const rational operator* (const rational &s);
   const rational operator/ (const rational &s);
    rational &operator++(int);
   void print ();
 };
