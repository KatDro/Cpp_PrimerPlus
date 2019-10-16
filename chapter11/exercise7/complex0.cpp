#include <iostream>
#include "complex0.h"

complex::complex()
{
    r = 0;
    i = 0;
}

complex::complex(double a, double b)
{
    r = a;
    i = b;
}

complex complex::operator + (const complex & b) const
{
    return complex((r + b.r), (i + b.i));
}

complex complex::operator - (const complex & b) const
{
    return complex((r - b.r), (i - b.i));
}

complex complex::operator * (const complex & b) const
{
    return complex((r * b.r - i * b.i), (r * b.r + i * b.i));
}

complex complex::operator * (double b) const
{
    return complex (r * b, i * b);
}

complex operator * (double a, const complex & b)
{
    return b*a;
}

complex complex::operator ~ ()
{
    return complex (r, - i);
}

std::ostream & operator << (std::ostream & os, const complex & b)
{
    os << "(" << b.r << ", " << b.i << "i)";
    return os;
}

std::istream & operator >> (std::istream & os, complex & b)
{
    std::cout << "Skladowa rzeczywista: ";
    os >> b.r;
    std::cout << "Skladowa urojona: ";
    os >> b.i;
    return os;
}
