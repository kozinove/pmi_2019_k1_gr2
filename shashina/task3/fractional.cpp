#include <stdio.h>
#include <stdlib.h>
#include "fractional.h"

rational::rational ()
{
   n = 0;
   m = 1;
}

rational::rational (int a,int b)
{
   if (b == 0)
   {
       printf ("nelza delit na zero\n");
       exit(1);
   }
   n = a;
   m = b;
}

int nod (int a, int b)
{
   int f;
   while (b != 0)
   {
       f = a % b;
       a = b;
       b = f;
   }
   return a;
}

void rational::abb ()
{
   int f;
   int num, den;
   num = n;
   den = m;
   if (n > m)
       f = nod(n, m);
   else
       f = nod(n, m);
   n = n/f;
   m = m/f;
}

const rational rational::operator+ (const rational &s)
{
   int num, den;
   num = n * s.m + s.n * m;
   den = m * s.m;
   rational c(num, den);
   c.abb();
   return c;
}
const rational rational::operator- (const rational &s)
{
   int num, den;
   num = n * s.m - s.n * m;
   den = m * s.m;
   rational c(num, den);
   c.abb();
   return c;
}
const rational rational::operator* (const rational &s)
{
   int num, den;
   num = n * s.n;
   den = m * s.m;
   rational c(num, den);
   c.abb();
   return c;
}
const rational rational::operator/ (const rational &s)
{
   int num, den;
   num = n * s.m;
   den = m * s.n;
   rational c(num, den);
   c.abb();
   return c;
}
rational &operator++(rational &s, int)
{
   n = n + m;
   if (n == 0) m = 1;
   return *this;
}

void rational::print()
{
   printf("%d/%d\n", n, m);
}
