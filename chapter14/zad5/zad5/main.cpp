#include <iostream>
#include "emp.h"

int main()
{
	using std::cout;
	using std::endl;

	employee em("Tadeusz", "Hubert", "Sprzedawca");
	cout << em << endl;
	em.ShowAll();
	cout << endl;

	manager ma("Amforiusz", "Smoczewski", "Malarz", 5);
	cout << ma << endl;
	ma.ShowAll();
	cout << endl;

	fink fi("Maurycy", "Olkuski", "Hudraulik", "Julina Bar");
	cout << fi << endl;
	fi.ShowAll();
	cout << endl;

	highfink hf(ma, "Jan Kudlaty");
	hf.ShowAll();
	cout << endl;
	cout << "Wcisnij dowolny przycisk, aby przejsc do kolejnego etapu: \n";
	std::cin.get();
	highfink hf2;
	hf2.SetAll();
	cout << endl;
	cout << "Uzywa wskaznika abstr_emp*:\n";
	abstr_emp* tri[4] = { &em, &fi, &hf, &hf2 };
	for (int i = 0; i < 4; i++)
	{
		tri[i]->ShowAll();
		cout << endl;
	}
}