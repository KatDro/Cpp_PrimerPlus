#include <iostream>
#include "port.h"

int main()
{
	Port p1("ole ole", "dry", 100);
	p1.show();
	Port p2 = p1;
	std::cout << p2;
	p2 += 25;
	std::cout << "Dodano butelki do p2: " << p2;
	p2 -= 15;
	std::cout << "Odjeto butelki od p2: " << p2;
	p2 -= 150;
	VintagePort vp1(p1,"kas", 1990);
	vp1.show();
	vp1 += 10;
	std::cout << vp1;
}