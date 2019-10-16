#ifndef MYTIME_H
#define MYTIME_H
#include <iostream>

using std::ostream;

class Time
{
private:
    int hours;
    int minutes;
public:
    Time();
    Time(int h, int m);
    void Addmin (int m);
    void Addhr (int h);
    void Reset (int h = 0, int m = 0);
    friend Time operator + (const Time & t1, const Time & t2);
    friend Time operator - (const Time & t1, const Time & t2);
    friend Time operator * (const Time & t, double n);
    friend Time operator * (double n, const Time & t)
    {return t * n;}
    friend ostream & operator << (ostream & os, const Time & t);
};

#endif // MYTIME_H
