#include <iostream>
#include "classic.h"

void Bravo(const Cd& disk);

int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Sonata fortepianowa B-dur. Fantazja C-moll", "Alfred Brednel", "Philips", 2, 57.17);
	Cd* pcd = &c1;

	std::cout << "Bezposrednie uzycie obiektu:\n";
	c1.Report();
	c2.Report();
	std::cout << std::endl;

	std::cout << "Uzycie wskaznika na typ CD:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();
	std::cout << std::endl;

	std::cout << "Wywolywanie funkcji z argumentem w postaci referencji do typu Cd:\n";
	Bravo(c1);
	Bravo(c2);
	std::cout << std::endl;

	std::cout << "Test przypisania: ";
	Classic copy;
	copy = c2;
	copy.Report();
	std::cout << std::endl;

	Cd temp;
	temp = c2;
	temp.Report();
}

void Bravo(const Cd& disk)
{
	disk.Report();
}