#ifndef VECT_H
#define VECT_H
#include <iostream>
#include <fstream>

namespace VECTOR
{
class Vector
{
public:
    enum Mode {RECT, POL};
private:
    double x;
    double y;
    //double mag;
    //double ang; // kierunek w radianach
    Mode mode;
    double set_mag() const;
    double set_ang() const;
    void set_x(double n1, double n2);
    void set_y(double n1, double n2);
public:
    Vector();
    Vector(double n1, double n2 ,Mode form = RECT );
    void reset(double n1, double n2, Mode form = RECT );
    ~Vector();
    double xval() const
    {
        return x;
    }
    const double yval() const
    {
        return y;
    }
    const double magval() const
    {
        double mag = set_mag();
        return mag;
    }
    const double angval() const
    {
        double ang = set_ang();
        return ang;
    }
    void polar_mode();
    void rect_mode();
    Vector operator+( const Vector & b ) const;
    Vector operator-( const Vector & b ) const;
    Vector operator-() const;
    Vector operator*( double n ) const;
    friend Vector operator*(double n, const Vector & b);
    friend std::ostream & operator <<(std::ostream & of, const Vector & b);
};
}
#endif // VECT_H
