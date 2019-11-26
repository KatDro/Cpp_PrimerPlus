#include <iostream>
#include "cpmv.h"

int main()
{
	Cpmv one;
	Cpmv two("ala ma ", "lokomotywa ");
	std::string st1("kota ");
	std::string st2 = "stoi na stacji ";
	Cpmv three(st1, st2);
	Cpmv four(two + three);
	Cpmv five = four + four;
	one.Display();
	two.Display();
	three.Display();
	four.Display();
	five.Display();	
	five = two;
	five.Display();
}