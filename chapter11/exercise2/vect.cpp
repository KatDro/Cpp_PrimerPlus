#include "vect.h"
#include <cmath>
#include <fstream>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
const double rad_deg = 45 / atan(1);
//private method
double Vector::set_mag() const
{
    double mag;
    return mag = sqrt (x * x + y * y);
}

double Vector::set_ang() const
{
    double ang;
    if ( x == 0 && y == 0 )
        return ang = 0;
    else
        return ang = atan2(y, x);
}

void Vector::set_x(double mag, double ang)
{
    x = mag * cos (ang);
}

void Vector::set_y(double mag, double ang)
{
    y = mag * sin(ang);
}
//public method
Vector::Vector()
{
    x = y /*= ang = mag*/ = 0;
    mode = RECT;
}
Vector::Vector(double n1, double n2, Mode form)
{
    mode = form;
    if (mode == RECT)
        {
            x = n1;
            y = n2;
            mode = RECT;
            //set_mag();
            //set_ang();
        }
    else if (mode == POL)
        {
            //mag = n1;
            //ang = n2 / rad_deg;
            set_x(n1, n2);
            set_y(n1, n2);
        }
    else
        {
            cout << "Nieprawna wartosc trzeciego argumentu. Zeruje wektor";
            x = y = /*mag = ang*/ 0;
            mode = RECT;
        }
}

void Vector::reset(double n1, double n2, Mode form)
{
    mode = form;

    if (mode == RECT)
        {
            x = n1;
            y = n2;
            mode = RECT;
            //set_mag();
            //set_ang();
        }
    else if (mode == POL)
        {
            /*mag = n1;
            ang = n2;*/
            set_x(n1, n2);
            set_y(n1, n2);
        }
    else
        {
            cout << "Nieprawna wartosc trzeciego argumentu. Zeruje wektor";
            x = y = /*mag = ang =*/ 0;
            mode = RECT;
        }

}

Vector::~Vector()
{

}

void Vector::polar_mode()
{
    mode = POL;
}

void Vector::rect_mode()
{
    mode = RECT;
}

Vector Vector::operator+( const Vector & b ) const
{
    return Vector (x + b.x, y + b.y);
}

Vector Vector::operator-( const Vector & b ) const
{
    return Vector (x - b.x, y - b.y);
}

Vector Vector::operator-() const
{
    return Vector (-x, -y);
}

Vector Vector::operator*(double n) const
{
    return Vector (n*x, n*y);
}

Vector operator*(double n, const Vector & b)
{
    return b*n;
}

std::ostream & operator <<(std::ostream & of, const Vector & b)
{
            if (b.mode == Vector::RECT)
                of << "(x, y) = (" << b.x << ", " << b.y << ")";
            else
                of << "(mag, ang) = (" << b.magval() << ", " << b.angval() * rad_deg << ")";
    return of;
}

}


