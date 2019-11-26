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
	while (std::cin.get() != '\n')
		continue;
	std::cout << "Podaj zawod:";
	getline(std::cin, job);
}
void abstr_emp::Writeall(std::ofstream& fout)
{
	fout << fname << " " << lname << " " << job;
}
void abstr_emp::Readall(std::ifstream& fin)
{
	fin >> fname >> lname >> job;
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
void employee::Writeall(std::ofstream& fout)
{
	fout << "Employee" << std::endl;
	abstr_emp::Writeall(fout);
	fout << std::endl;
}
void employee::Readall(std::ifstream& fin)
{
	abstr_emp::Readall(fin);
}

manager::manager(const manager& m) : abstr_emp(m)
{
	inchargeof = m.InChargeOf();
}
void manager::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Zarzadza: " << inchargeof << " osobami.\n";
}
void manager::SetAll()
{
	abstr_emp::SetAll();
	std::cout << "Podaj ilosc osob ktorymi zarzadza: ";
	std::cin >> inchargeof;
	std::cin.get();
}
void manager::Writeall(std::ofstream& fout)
{
	fout << "Manager" << std::endl;
	abstr_emp::Writeall(fout);
	fout << " " << inchargeof << std::endl;
}
void manager::Readall(std::ifstream& fin)
{
	abstr_emp::Readall(fin);
	fin >> inchargeof;
	fin.get();
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
void fink::Writeall(std::ofstream& fout)
{
	fout << "Fink" << std::endl;
	abstr_emp::Writeall(fout);
	fout << " " << reportsto << std::endl;
}
void fink::Readall(std::ifstream& fin)
{
	abstr_emp::Readall(fin);
	getline(fin, reportsto);
}

void highfink::ShowAll() const
{
	abstr_emp::ShowAll();
	std::cout << "Zarzadza: " << InChargeOf() << " osobami.\n";
	std::cout << "Zglasza do: " << ReportsTo() << std::endl;
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
void highfink::Writeall(std::ofstream& fout)
{
	fout << "Highfink" << std::endl;
	abstr_emp::Writeall(fout);
	fout << " " << InChargeOf() << " " << ReportsTo() << std::endl;
}
void highfink::Readall(std::ifstream& fin)
{
	abstr_emp::Readall(fin);
	fin >> InChargeOf();
	getline(fin, ReportsTo());
}

std::ifstream& operator >> (std::ifstream& is, choices::classkind& ck)
{
	std::string value;
	is >> value;
	if (value == "Employee")
		ck = choices::Employee;
	else if (value == "Manager")
		ck = choices::Manager;
	else if (value == "Fink")
		ck = choices::Fink;
	else if (value == "Highfink")
		ck = choices::Highfink;
	return is;
}