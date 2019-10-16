#include <iostream>
#ifndef COMPLEX0_H

class complex
{
private:
    double r;
    double i;
public:
    complex();
    complex(double a, double b);
    complex operator + (const complex & b) const;
    complex operator - (const complex & b) const;
    complex operator * (const complex & b) const;
    complex operator * (double b) const;
    friend complex operator * (double a, const complex & b);
    complex operator ~ ();
    friend std::ostream & operator << (std::ostream & os, const complex & b);
    friend std::istream & operator >> (std::istream & os, complex & b);
};

#endif // COMPLEX0_H
