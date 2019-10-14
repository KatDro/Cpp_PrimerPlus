#ifndef zadanie_4_h
#define zadanie_4_h
namespace SALES
{
    const int QUARTERS =4;
    struct Sales
    {
        double sales [QUARTERS];
        double avarage;
        double max;
        double min;
    };

    void setSales (Sales & s, const double ar[], int n = 4); // kopiuje 4 elementy z tablicy ar i oblicza skladowe struktury
    void setSales (Sales & s); // pobiera z konsoli informcaje o 4 kwartalach i oblicza skladowe struktury
    void showSales (const Sales & s); // wyswietla informacje ze struktury
}
#endif
