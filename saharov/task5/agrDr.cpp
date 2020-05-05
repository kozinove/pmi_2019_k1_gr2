#include "class.hpp"

Drob2::Drob2()
{
    ch = 0;
    zn = 1;
}

void Drob2::reduct2()
{
    int n = e.nod(ch, zn);
    ch = ch / n;
    zn = zn / n;
}

Drob2::Drob2(int a, int b)
{
    if (b == 0)
    {
        std::cout << "���� � �����������";
        return;
    }
    ch = a;
    zn = b;
    this -> reduct2();
}

Drob2 Drob2::operator +(const Drob2 &a)//��������
{
    Drob2 c;
    c.ch = zn*a.ch + ch*a.zn;
    c.zn = zn * a.zn;
    c.reduct2();
    return c;
}

Drob2 Drob2::operator -(const Drob2 &a)//���������
{
    Drob2 c;
    c.ch = ch*a.zn - zn*a.ch;
    c.zn = zn*a.zn;
    c.reduct2();
    return c;
}

Drob2 Drob2::operator *(const Drob2 &a)//���������
{
    Drob2 c;
    c.ch = ch*a.ch;
    c.zn = zn*a.zn;
    c.reduct2();
    return c;
}

Drob2 Drob2::operator /(const Drob2 &a)//�������
{
    Drob2 c;
    c.ch = ch * a.zn;
    c.zn = zn * a.ch;
    c.reduct2();
    return c;
}

void Drob2::Print()
{
    std::cout << ch << '/' << zn << std::endl;
}

Drob2 Drob2::operator ++(int)
{
    ++*this;
    this -> reduct2();
    return *this;
}

Drob2 &Drob2::operator ++()
{
    ch += zn;
    this -> reduct2();
    return *this;
}
