#include "sales.h"
#include <iostream>

SALES::Sales::Sales(const double s [], int n)
{

    for (int i = 0; i < QUARTERS; i++)
    {
        if (i <= n)
            sales[i] = s[i];
        else
            sales[i] = 0.0;
    }
    max = sales[0];
          for (int i = 1; i < QUARTERS; i++)
              if (max < sales[i])
                  max = sales[i];
    min = sales[0];
          for (int i = 1; i < QUARTERS; i++)
              if (min > sales[i])
                  min = sales[i];
    double sum = 0.0;
    for (int i = 0; i < QUARTERS; i++)
        sum += sales[i];
    avarage = sum/QUARTERS;
}
SALES::Sales::Sales()
{
    for (int i = 0; i < QUARTERS; i++)
    {
    std::cout << "Podaj dane dla kwartalu " << i+1 << "(dane zatwierdz klawiszem enter): ";
    std::cin >> sales[i];
    }
     max = sales[0];
          for (int i = 1; i < QUARTERS; i++)
              if (max < sales[i])
                  max = sales[i];
    min = sales[0];
          for (int i = 1; i < QUARTERS; i++)
              if (min > sales[i])
                  min = sales[i];
    double sum = 0.0;
    for (int i = 0; i < QUARTERS; i++)
        sum += sales[i];
    avarage = sum/QUARTERS;
}

void SALES::Sales::showSales () const
{
    std::cout << "Dane z kwartalu: ";
    for (int i = 0; i < QUARTERS; i++)
        std::cout << sales[i] << ", ";
    std::cout << std::endl;
    std::cout << "Wartosc maksymalna: " << max << std::endl;
    std::cout << "Wartosc minimalna: " << min << std::endl;
    std::cout << "Wartosc srednia: " << avarage << std::endl;
}
