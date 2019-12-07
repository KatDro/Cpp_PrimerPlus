#include "wine.h"
#include <iostream>

void Wine::GetBottles()
{
	std::cout << "Podaj dane o winie " << name << " dla " << years << " rocznikow:" << std::endl;
	for (int i = 0; i < years; i++)
	{
		int temp;
		std::cout << "Podaj rocznik: ";
		std::cin >> temp;
		Pair::first()[i] = temp;
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> temp;
		Pair::second()[i] = temp;
	}
}
int Wine::Sum() const
{
	int sum{};
	for (int i = 0; i < years; i++)
		sum += Pair::second()[i];
	return sum;
}
void Wine::Show() const
{
	std::cout << "Wino: " << name << std::endl << "\t" << "Rocznik\t" << "Butelki" << std::endl;
	for (int i = 0; i < years; i++)
		std::cout << "\t" << Pair::first()[i] << "\t" << Pair::second()[i] << std::endl;
}