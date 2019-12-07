#include "stock21.h"
#include <iostream>
#include <cstring>

Stock::Stock()
{
	const char temp [] = "bez nazwy";
	company = new char[strlen(temp) + 1];
	strcpy_s(company,strlen(temp)+1, temp);
	shares = 0;
	share_val = 0;
	set_tot();
}
Stock::Stock(const char * co, long n, double pr)
{
	company = new char [strlen(co)+1];
	strcpy_s(company, strlen(co)+1, co);
	if (n < 0)
	{
		std::cout << "Liczba udzialow nie moze byc ujemna!\n" << "Ustalam liczbe udzial w " << company << "na 0.\n";
		shares = 0;
	}
	else
		shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock() 
{
	delete[] company;
}

void Stock::buy(long num, double price)
{
	if (num < 0)
		std::cout << "Liczba udzialow nie moze byc ujemna. Transakcja przerwana.\n";
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num > shares)
		std::cout << "Nie mozesz sprzedac wicej udzial niz masz. Transakcja przerwana.";
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

std::ostream & operator << (std::ostream & os, const Stock & s)
{
	using std::cout;
	using std::ios_base;
	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	os << "Spolka " << s.company << "\nLiczba udzialow: " << s.shares << std::endl << "Cena udzialu: " << s.share_val << std::endl;
	cout.precision(2);
	cout << "Laczna wartosc udzialow: " << s.total_val << " zl\n";
	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
	return os;
}

const Stock & Stock::topval(const Stock & s) const
{
	if (s.total_val > total_val)
		return s;
	else
		return *this;
}
