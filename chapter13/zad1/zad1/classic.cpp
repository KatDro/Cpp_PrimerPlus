#include <cstring>
#include <iostream>
#include "classic.h"

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
	strncpy_s(performers, s1, 50);
	strncpy_s(label, s2, 20);
	selections = n;
	playtime = x;
}

Cd::Cd()
{
	strcpy_s(performers, "brak");
	strcpy_s(label, "brak");
	selections = 0;
	playtime = 0;
}

void Cd::Report() const
{
	std::cout << "Wykonawca: " << performers << std::endl;
	std::cout << "Wytwornia: " << label << std::endl;
	std::cout << "Ilosc nagran: " << selections << std::endl;
	std::cout << "Czas trwania plyty: " << playtime << std::endl;
}

Classic::Classic(const char* s3, const char* s1, const char* s2, int n, double x) : Cd::Cd(s1, s2, n, x)
{
	strncpy_s(main_tittle, s3, 50);
}

Classic::Classic() : Cd::Cd()
{
	strcpy_s(main_tittle, "brak");
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Glowny utwor: " << main_tittle << std::endl;
}
