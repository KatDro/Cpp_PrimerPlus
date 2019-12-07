#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Person.h"

void Person::Data()
{
	std::cout << "Imie i nazwisko: " << name << std::endl;
}
void Person::Get()
{
	std::cout << "Podaj imie i nazwisko: ";
	getline(std::cin, name);
	std::cout << std::endl;
}
void Person::Set()
{
	Get();
}
void Gunslinger::Data()
{
	std::cout << "Liczba zaciec: " << scotch << std::endl;
}
float Gunslinger::Draw()
{
	int r = std::rand() % 500;
	return (float)(r /10);
}
void Gunslinger::Get()
{
	std::cout << "Podaj ilosc zaciec: ";
	std::cin >> scotch;
	std::cout << std::endl;
}
void Gunslinger::Set()
{
	Person::Get();
	Get();
}
void Gunslinger::Show()
{
	Person::Data();
	Gunslinger::Data();
	std::cout << "Czas wyciagniecia rewolwera: " << Gunslinger::Draw() << std::endl;
}
int PokerPlayer::Draw()
{
	return (std::rand() % 52 + 1);
}
void PokerPlayer::Set()
{
	Person::Get();
}
void PokerPlayer::Show()
{
	Person::Data();
	std::cout << "Wyciagnieta karta: " << Draw() << std::endl;
}
void BadDude::Show()
{
	Person::Data();
	Gunslinger::Data();
	std::cout << "Czas wyciagniecia rewolwera: " << Gdraw() << std::endl;
	std::cout << "Wyciagnieta karta: " << Cdraw() << std::endl;
}
void BadDude::Set()
{
	Person::Get();
	Gunslinger::Get();
}