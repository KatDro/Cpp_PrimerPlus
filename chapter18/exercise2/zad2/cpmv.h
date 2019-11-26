#pragma once
#include <string>
#include <iostream>

class Cpmv
{
public:
	std::string qcode;
	std::string zcode;
//private:
	//Info* pi;
public:
	Cpmv() :qcode(""), zcode("") { std::cout << "Konstruktor domyslny." << std::endl; }
	Cpmv(std::string q, std::string z) :qcode(q), zcode(z) { std::cout << "Konstruktor (string, string)" << std::endl; }
	Cpmv(const Cpmv& cp) :qcode(cp.qcode), zcode(cp.zcode) { std::cout << "Konstruktor kopiujacy" << std::endl; }
	Cpmv(Cpmv&& mv) :qcode(mv.qcode), zcode(mv.zcode) { std::cout << "Konstruktor przenoszacy" << std::endl; }
	~Cpmv() {};
	Cpmv& operator=(const Cpmv& cp);
	Cpmv& operator=(Cpmv&& cp);
	Cpmv operator+(const Cpmv& obj) const;
	void Display() const;
};

