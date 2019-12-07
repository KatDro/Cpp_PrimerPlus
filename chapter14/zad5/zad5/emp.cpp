#include "emp.h"

void abstr_emp::ShowAll() const
{
	std::cout << "Imie i nazwisko: " << fname << " " << lname << std::endl;
	std::cout << "Zawod: " << job << std::endl;
}
void abstr_emp::SetAll()
{
	std::cout << "Podaj imie i nazwisko: ";
	std::cin >> fname;
	std::cin >> lname;
	std::cout << "Podaj zawod:";
	std::cin >> job;
}
abstr_emp::~abstr_emp()
{

}
std::ostream& operator << (std::ostream& os, const abstr_emp& e)
{
	os << e.fname << " " << e.lname;
	return os;
}

void employee::ShowAll() const
{
	abstr_emp::ShowAll();
}
void employee::SetAll()
{
	abstr_emp::SetAll();
}

manager::manager(const manager& m) : abstr_emp(m)
{
	inchargeof = m.InChargeOf();
}
void manager::ShowAll () const
{
	abstr_emp::ShowAll();
	std::cout << "Zarzadza: " << inchargeof << " osobami.\n";
}
void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj ilosc osob ktorymi zarzadza: ";
	std::cin >> inchargeof;
}

void fink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Zglasza do: " << reportsto << std::endl;
}
void fink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj do kogo zglasza: ";
	getline(std::cin, reportsto);
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Zarzadza: " << InChargeOf() << " osobami.\n";
	std::cout << "Zglasza do: " <<ReportsTo() << std::endl;
}
void highfink::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj ilosc osob ktorymi zarzadza: ";
	std::cin >> InChargeOf();
	std::cin.get();
	std::cout << "Podaj do kogo zglasza: ";
	std::getline(std::cin, ReportsTo());
}
