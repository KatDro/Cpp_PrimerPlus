#include <iostream>
#include "tv.h"

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else return false;
}
bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else return false;
}
void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}
void Tv::chandown()
{
	if (channel > 1)
		channel++;
	else
		channel = maxchannel;
}
void Tv::settings() const
{
	std::cout << "Telewizor jest" << (state == Off ? " Wylaczony" : " Wlaczony") << std::endl;
	if (state == On)
	{
		std::cout << "Glownosc: " << volume << std::endl;
		std::cout << "Program: " << channel << std::endl;
		std::cout << "Tryb: " << (mode == Antenna ? "antena" : "kabel") << std::endl;
		std::cout << "Wejscie: " << (input == TV ? "TV" : "DVD") << std::endl;
	}
}
void Tv::set_remote(Remote& r)
{
	if(ison())
	r.function = (r.function == Remote::Normal ? Remote::Interactive : Remote::Normal);
}

void Remote::show_function()
{ 
	std::cout << "Tryb pracy pilota: " << (function == Normal ? "normalny" : "interaktywny"); 
}