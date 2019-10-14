#ifndef SALES_H
#define SALES_H
namespace SALES
{
class Sales
{
private:
    static const int QUARTERS = 4;
    double sales[QUARTERS];
    double avarage;
    double max;
    double min;
public:
    Sales(const double *s, int n);
    Sales();
    void showSales () const;
};
}
#endif // SALES_H
