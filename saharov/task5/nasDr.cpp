#include "class.hpp"

Drob1::Drob1()//����������� ��-���������
{
    ch = 0;
    zn = 1;
}

Drob1::Drob1(int a, int b)//����������� ��-��������
{
    if (b == 0)
    {
        std::cout << "���� � �����������";
        return;
    }
    ch = a;
    zn = b;
}

void Drob1::reduct1()
{
    int n = nod(ch, zn);
    ch = ch / n;
    zn = zn / n;
}

Drob1 Drob1::operator +(const Drob1 &a)//��������
{
    Drob1 c;
    c.ch = zn*a.ch + ch*a.zn;
    c.zn = zn * a.zn;
    c.reduct1();
    return c;
}

Drob1 Drob1::operator -(const Drob1 &a)//���������
{
    Drob1 c;
    c.ch = ch*a.zn - zn*a.ch;
    c.zn = zn*a.zn;
    c.reduct1();
    return c;
}

Drob1 Drob1::operator *(const Drob1 &a)//���������
{
    Drob1 c;
    c.ch = ch*a.ch;
    c.zn = zn*a.zn;
    c.reduct1();
    return c;
}

Drob1 Drob1::operator /(const Drob1 &a)//�������
{
    Drob1 c;
    c.ch = ch * a.zn;
    c.zn = zn * a.ch;
    c.reduct1();
    return c;
}

void Drob1::Print()
{
    std::cout << ch << '/' << zn << std::endl;
}


Drob1 Drob1::operator ++(int)
{
    ++*this;
    this -> reduct1();
    return *this;
}

Drob1 &Drob1::operator ++()
{
    ch += zn;
    this -> reduct1();
    return *this;
}
