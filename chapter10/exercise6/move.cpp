#include <iostream>
#include "move.h"

Move::Move (double a, double b)
{
    x = a;
    y = b;
}
Move::showmove () const
{
    std::cout << "Wartosc x: " << x << std::endl;
    std::cout << "Wartosc y: " << y << std::endl;
}

Move Move::add (const Move & m)
{
    double xtemp = this -> x + m.x;
    double ytemp = this -> y + m.y;
    Move temp (xtemp, ytemp);
    return temp;
}

Move::reset (double a, double b)
{
    x = a;
    y = b;
}
