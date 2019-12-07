#include <iostream>
#include <cstdlib>
#include <ctime>
#include "q.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x); //checking if new customer arrive

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));

	cout << "Studium przypadku: bankomat Stu." << endl;
	int qs = 10;
	cout << "Maksymalna dlugosc kolejki: " << qs << endl;


	int hours = 100;
	cout << "Czas symulacji: " << hours << endl;

	double perhour = 30;
	double min_per_cust;
	long turnaways = 0; //amount of customers who was sent back from line
	long customers = 0; //amount of customers who were in line
	long served = 0; //amount of served customers
	long sum_line = 0;  //amount of waiting people
	int wait_time = 0; //time do free ATM
	long line_wait = 0; //sum of customers time waiting to be serve

	long cyclelimit = hours * MIN_PER_HR;
	do
	{
		cout << "Symulacja rozpoczeta dla " << perhour << " klientow na godzine." << endl;
		min_per_cust = MIN_PER_HR / perhour;
		Queue line(qs);
		Item temp;
		turnaways = 0; 
		customers = 0; 
		served = 0; 
		sum_line = 0; 
		wait_time = 0;
		line_wait = 0;
		//simulation start
		for (int cycle = 0; cycle < cyclelimit; cycle++)
		{
			if (newcustomer(min_per_cust))
			{
				if (line.isfull())
					turnaways++;
				else
				{
					temp.set(cycle);
					line.enqueue(temp);
					customers++;
				}
			}
			if (wait_time <= 0 && !line.isempty())
			{
				line.dequeue(temp);
				wait_time = temp.ptime();
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}
		perhour--;
		cout << "Sredni czas oczekiwania: " << (double)line_wait / served << " minut" << endl;
	} while (((double)line_wait / served) > 1.0);

	//results
	if (customers > 0)
	{
		cout << "Liczba klientow przyjetych: " << customers << endl;
		cout << "Liczba klientow obsluzonych: " << served << endl;
		cout << "Liczba klientow odeslanych: " << turnaways << endl;
		cout << "Srednia dlugosc kolejki: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << "Sredni czas oczekiwania: " << (double)line_wait / served << " minut" << endl;
	}
	else
		cout << "Brak klientow\n";
	cout << "Gotowe!";
}

bool newcustomer(double x)
{
	return (std::rand() * x / RAND_MAX < 1);
}