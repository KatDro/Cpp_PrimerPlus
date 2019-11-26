#include <iostream>
#include "tv.h"

int main()
{
	Tv t1;
	t1.settings();
	std::cout << "Wlaczam telewizor\n\n";
	t1.onoff();
	t1.settings();
	std::cout << std::endl;
	Remote r1;
	r1.chanup(t1);
	r1.volup(t1);
	r1.set_mode(t1);
	r1.set_input(t1);
	t1.settings();
	r1.show_function();
	std::cout << std::endl;
	std::cout << "\nZmieniam tryb pracy pilota\n";
	t1.set_remote(r1);
	r1.show_function();
	std::cout << std::endl;
	r1.onoff(t1);
	t1.settings();
	t1.set_remote(r1);
	r1.show_function();
	std::cout << std::endl;

}