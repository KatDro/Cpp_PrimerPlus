#include <iostream>
#include "mytime.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time (int h, int m)
{
    hours = h;
    minutes = m;
}

void Time::Addmin (int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes = minutes % 60;
}

void Time::Addhr (int h)
{
    hours += h;
}

void Time::Reset (int h, int m)
{
    hours = h;
    minutes = m;
}

Time operator + (const Time & t1, const Time & t2)
{
    Time sum;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours;
    sum.hours += sum.minutes / 60;
    sum.minutes = sum.minutes % 60;
    return sum;
}

Time operator - (const Time & t1, const Time & t2)
{
    Time diff;
    int to1 = t1.minutes + 60 * t1.hours;
    int to2 = t2.minutes + 60 * t2.hours;
    diff.minutes = to1 - to2;
    diff.hours = diff.minutes / 60;
    diff.minutes = diff.minutes % 60;
    return diff;
}

Time operator * (const Time & t, double n)
{
    Time multi;
    multi.minutes = t.hours * 60 + t.minutes;
    multi.minutes = multi.minutes * n;
    multi.hours = multi.minutes / 60;
    multi.minutes = multi.minutes % 60;
    return multi;
}

ostream & operator << (ostream & os, const Time & t)
{
    std::cout << "("  << t.hours << ":" << t.minutes << ")";
}
