#include "Wine.h"
#include <iostream>

void Wine::GetBottles()
{
	std::cout << "Podaj dane o winie " << name << " dla " << years << " rocznikow:" << std::endl;
	for (int i = 0; i < years; i++)
	{
		int temp;
		std::cout << "Podaj rocznik: ";
		std::cin >> temp;
		yearbot.first()[i] = temp;
		std::cout << "Podaj liczbe butelek: ";
		std::cin >> temp;
		yearbot.second()[i] = temp;
	}
}
int Wine::Sum()
{
	int sum{};
	for (int i = 0; i < years; i++)
		sum += yearbot.second()[i];
	return sum;
}
void Wine::Show()
{
	std::cout << "Wino: " << name << std::endl << "\t" << "Rocznik\t" << "Butelki" << std::endl;
	for (int i = 0; i < years; i++)
		std::cout << "\t" << yearbot.first()[i] << "\t" << yearbot.second()[i] << std::endl;
}