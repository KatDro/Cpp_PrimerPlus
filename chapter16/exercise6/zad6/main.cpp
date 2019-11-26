#include <iostream>
#include <cstdlib>	// rand(), srand()
#include <ctime>	//time()
#include "customer.h"
#include <queue>

const int MIN_PER_HOUR = 60;
bool newcustomer(double x); // are new cystemer arrive?

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;
	std::srand(std::time(0));

	cout << "Studium przypadku: Bankomat Banku STU.\n";
	cout << "Podaj maksymalna dlugosc kolejki: ";
	int qs;
	cin >> qs;
	std::queue <Customer> line;

	cout << "Podaj sumulowany czas w godzinach: ";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HOUR * hours;

	cout << "Podaj srednia liczbe klientow na godzine: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HOUR / perhour;

	Item temp;
	long turnaways = 0;	//liczba klinetow odelsanych z kolejki
	long customers = 0;		//liczba klientow przyjetych do kolejki
	long served = 0;		//liczba klinetow obsluzonych w symulacji
	long sum_line = 0;		//laczna liczba oczekujacych
	int wait_time = 0;		//czas do zwolnienia bankomatu
	long line_wait = 0;	//laczny czas oczekiwania

	//rozpoczenie symulacji
	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.size() == qs)
				turnaways++;
			else
			{
				customers++;
				temp.set(cycle);	//czas przybycia = nr cyklu
				line.push(temp); //dolaczenie klienta do kolejki
			}
		}
		if (wait_time <= 0 && !line.empty())
		{
			line.pop();	//natepny do obsluzenia
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.size();
	}
	//zestawienie wynikow
	if (customers > 0)
	{
		cout << "liczba klientow przyjetych: " << customers << endl;
		cout << "liczba klientow obsluzonych: " << served << endl;
		cout << "liczba klientow odeslanych: " << turnaways << endl;
		cout << "srednia dlugosc kolejki: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "sredni czas oczekiwania: " << (double)line_wait / served << " minut\n";
	}
	else
		cout << "Brak klinetow.\n";
	cout << "Gotowe.\n";
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}