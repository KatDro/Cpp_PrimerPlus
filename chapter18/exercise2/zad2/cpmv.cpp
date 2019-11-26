#include "cpmv.h"

Cpmv& Cpmv::operator=(const Cpmv& cp)
{
	std::cout << "Przypisanie (operator =) kopiujace" << std::endl;
	if (this == &cp)
		return *this;
	qcode = cp.qcode;
	zcode = cp.zcode;
	return *this;
}
Cpmv& Cpmv::operator=(Cpmv&& mv)
{
	std::cout << "Przypisanie (operator =) przenoszace" << std::endl;
	if (this == &mv)
		return *this;
	qcode = mv.qcode;
	zcode = mv.zcode;
	return *this;
}
Cpmv Cpmv::operator+(const Cpmv& obj) const
{
	std::cout << "Operator +" << std::endl;
	Cpmv temp(qcode + obj.qcode, zcode + obj.zcode);
	return temp;
}
void Cpmv::Display() const
{
	std::cout << qcode << ", " << zcode << std::endl;
}