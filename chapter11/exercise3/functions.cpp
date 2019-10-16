#include "functions.h"
#include <ctime>
#include <cstdlib>
#include "vect.h"

using VECTOR::Vector;

unsigned long randwalk (double t, double d)
{
    Vector result (0, 0);
    Vector step (0, 0);
    double direction;
    unsigned long steps = 0;
            while (result.magval() < t)
                {
                    direction = rand() % 360;
                    step.reset (d, direction, Vector::POL);
                    result = result + step;
                    steps++;
                }
                return steps;
}

unsigned long show (std::vector <unsigned long> result)
{
    for (int i = 0; i < result.size(); i++)
        std::cout << result[i] << std::endl;
}

unsigned long minimum (std::vector <unsigned long> result)
{
    unsigned long minim = result[0];
    unsigned long temp;
    for (int i = 1; i < result.size(); i++)
    {
        temp = result[i];
        if (temp < minim) minim = temp;
    }
    return minim;
}

unsigned long maximum (std::vector <unsigned long> result)
{
    unsigned long maxim = result[0];
    unsigned long temp;
    for (int i = 1; i < result.size(); i++)
    {
        temp = result[i];
        if (temp > maxim) maxim = temp;
    }
    return maxim;
}

unsigned long avarage (std::vector <unsigned long> result)
{
    int s = result.size();
    unsigned long sum = result[0];
    for (int i = 1; i < s; i++)
        sum += result [i];
    return (sum/s);
}
