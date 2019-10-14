#include "ex4.h"
#include <iostream>

using SALES::QUARTERS;

double maximum (const double ar[])
{
    double temp = ar[0];
    for (int i = 1; i < QUARTERS; i++)
    {
        if (temp < ar[i])  temp = ar [i];
    }
    return temp;
}

void SALES::setSales (Sales & s, const double ar[], int n)
{
    for (int i = 0; i < QUARTERS; i++) //coping to sales[]
        s.sales [i] = ar [i];

    double temp = s.sales[0]; //calculate min
    for (int i = 1; i < QUARTERS; i++)
        if (s.sales[i] < temp)  temp = s.sales [i];
    s.min = temp;

    temp = s.sales[0]; //calculate max
    for (int i = 1; i < QUARTERS; i++)
        if (s.sales[i] > temp)  temp = s.sales [i];
    s.max = temp;

    for (int i = 0; i < QUARTERS; i++) //calculate avarage
        s.avarage =+ s.sales[i];
    s.avarage = s.avarage/QUARTERS;
}

void SALES::setSales (Sales & s)
{
    for (int i = 0; i < QUARTERS; i++)
    {
        std::cout << "Podaj wartosc dla kwartalu " << i+1 << ": ";
        std::cin >> s.sales [i];
    }
    double temp = s.sales[0]; //calculate min
    for (int i = 1; i < QUARTERS; i++)
        if (s.sales[i] < temp)  temp = s.sales [i];
    s.min = temp;

    temp = s.sales[0]; //calculate max
    for (int i = 1; i < QUARTERS; i++)
        if (s.sales[i] > temp)  temp = s.sales [i];
    s.max = temp;

    for (int i = 0; i < QUARTERS; i++) //calculate avarage
        s.avarage =+ s.sales[i];
    s.avarage = s.avarage/QUARTERS;
}

void SALES::showSales (const Sales & s)
{
    for (int i = 0; i < QUARTERS; i++)
        std::cout << "Wartosc dla kwartalu " << i+1 << ": "<< s.sales [i] << std::endl;
    std::cout << "Wartosc minimalna: " << s.min << std::endl;
    std::cout << "Wartosc maksymalna: " << s.max << std::endl;
    std::cout << "Wartosc srednia: " << s.avarage << std::endl;
}
