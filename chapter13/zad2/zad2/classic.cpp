#include <cstring>
#include <iostream>
#include "classic.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	performers = new char[strlen(s1) + 1];
	strcpy(performers, s1);
	label = new char[strlen(s2) + 1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
	performers = new char[strlen("brak") + 1];
	strcpy(performers, "brak");
	label = new char[strlen("brak") + 1];
	strcpy(label, "brak");
	selections = 0;
	playtime = 0;
}

Cd::~Cd()
{
	delete[] performers;
	delete[] label;
}

void Cd::Report() const
{
	std::cout << "Wykonawca: " << performers << std::endl;
	std::cout << "Wytwornia: " << label << std::endl;
	std::cout << "Ilosc nagran: " << selections << std::endl;
	std::cout << "Czas trwania plyty: " << playtime << std::endl;
}

Cd& Cd::operator=(const Cd& c)
{
	if (this == &c)
		return *this;
	performers = new char[strlen(c.performers) + 1];
	strcpy(performers, c.performers);
	label = new char[strlen(c.label) + 1];
	strcpy(label, c.label);
	selections = c.selections;
	playtime = c.playtime;
}

Classic::Classic(const char* s3, const char* s1, const char* s2, int n, double x) : Cd::Cd(s1, s2, n, x)
{
	main_tittle = new char[strlen(s3) + 1];
	strcpy(main_tittle, s3);
}

Classic::Classic() : Cd::Cd()
{
	main_tittle = new char[strlen("brak") + 1];
	strcpy(main_tittle, "brak");
}

Classic::~Classic()
{
	delete[] main_tittle;
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Glowny utwor: " << main_tittle << std::endl;
}

Classic& Classic::operator=(const Classic& c)
{
	if (this == &c)
		return *this;
	Cd::operator=(c);
	main_tittle = new char[strlen(c.main_tittle) + 1];
	strcpy(main_tittle, c.main_tittle);
}
