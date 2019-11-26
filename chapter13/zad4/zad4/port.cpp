#include <iostream>
#include "port.h"

Port::Port(const char* br, const char* st, int b)
{
	brand = new char[strlen(br) + 1];
	strcpy_s(brand, strlen(br) + 1, br);
	strncpy_s(style, st, SIZE);
	bottles = b;
}
Port::Port(const Port& p)
{
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strncpy_s(style, p.style, SIZE);
	bottles = p.bottles;
}
Port& Port::operator=(const Port& p)
{
	if (this == &p)
		return *this;
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy_s(brand, strlen(p.brand) + 1, p.brand);
	strncpy_s(style, p.style, SIZE);
	bottles = p.bottles;
	return *this;
}
Port& Port::operator +=(int b)
{
	bottles += b;
	return *this;
}
Port& Port::operator -=(int b)
{
	if (bottles < b)
	{
		std::cout << "Nie wystarczajaca ilosc butelek w magazynie." << std::endl;
	}
	else
	bottles -= b;
	return *this;
}
void Port::show() const
{
	std::cout << "Marka: " << brand << std::endl;
	std::cout << "Styl: " << style << std::endl;
	std::cout << "Ilosc butelek: " << bottles << std::endl;
}
std::ostream& operator << (std::ostream& os, const Port& p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles << std::endl;
	return os;
}

VintagePort::VintagePort(const char* nk, int y, const char* br, const char* st, int b) : Port(br, st, b)
{
	nickname = new char[strlen(nk) + 1];
	strcpy_s(nickname, strlen(nk) + 1, nk);
	year = y;
}
VintagePort::VintagePort(Port &p, const char* nk, int y) : Port(p)
{
	nickname = new char[strlen(nk) + 1];
	strcpy_s(nickname, strlen(nk) + 1, nk);
	year = y;
}
VintagePort::VintagePort(const VintagePort& vp) : Port(vp)
{
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}
VintagePort& VintagePort::operator=(const VintagePort& vp)
{
	if (this == &vp)
		return *this;
	Port::operator=(vp);
	delete[] nickname;
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy_s(nickname, strlen(vp.nickname) + 1, vp.nickname);
	year = vp.year;
}
void VintagePort::show() const
{
	Port::show();
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Rocznik: " << year << std::endl;
}
std::ostream& operator<<(std::ostream& os, const VintagePort& p)
{
	os << (Port&)p;
	os << p.nickname << ", " << p.year << std::endl;
	return os;
}