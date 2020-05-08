#include <stdio.h>
#include"fractional.h"

int main()
{
   rational a(1,2), b(2,5);
   rational c;

    printf("F1: ");
    a.print();
    printf("F2: ");
    b.print();

   c = a + b;
   printf("F1+F2: ");
   c.print();

   c = a - b;
    printf("F1-F2: ");
   c.print();

   c = a * b;
    printf("F1*F2: ");
   c.print();

   c = a / b;
    printf("F1/F2: ");
   c.print();

   a++;
    printf("F1+1: ");
   a.print();

    b++;
    printf("F2+1: ");
    b.print();

   return 0;
}
