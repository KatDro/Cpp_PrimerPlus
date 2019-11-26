#include <iostream>
#include <cmath>
#include "exc_mean.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;
	cout << "Podaj dwie liczby: ";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Srednia arytmetyczna liczb " << x << " i " << y << " wynosi " << z << endl;
			cout << "Srednia geometryczna liczb " << x << " i " << y << " wynosi " << gmean(x, y) << endl;
			cout << "Podaj kolejna pare liczb <w, aby wyjsc>: ";
		}
		catch (bad_hmean & hm)
		{
			cout << hm.what() << endl;
			cout << "Podaj dwie liczby: ";
			continue;
		}
		catch (bad_gmean& gm)
		{
			cout << gm.what() << endl;
			cout << "Podaj dwie liczby: ";
			continue;
		}
	}
	cout << "Koniec";
}

double hmean(double a, double b)
{
	if (a == -b)
		throw bad_hmean("Niepoprawny argument funkcji bad_hmean()");
	return 2.0 * a * b / (a + b);
}
double gmean(double a, double b)
{
	if (a < 0 || b < 0)
		throw bad_gmean("Niepoprawny argument funkcji bad_gmean()");
	return std::sqrt(a * b);
}