#include <iostream>
#include "ex4.h"

int main()
{
    const double arr [] = {32.6, 3.67, 12.6, 1};
    SALES::Sales s1;
    SALES::setSales(s1, arr);
    SALES::Sales s2;
    SALES::setSales(s2);
    SALES::showSales(s1);
    SALES::showSales(s2);
    return 0;
}
