#include <iostream>
#include "sales.h"

//using SALES::Sales;

int main()
{
    double arr [4] {21.54, 6.56, 1.87, 6};
    SALES::Sales spr1 (arr, 4);
    spr1.showSales();
    SALES::Sales spr2;
    spr2.showSales();
    return 0;
}
