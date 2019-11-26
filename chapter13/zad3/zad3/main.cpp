#include <iostream>
#include "dma.h"

const int SIZE = 3;
const int LIMIT = 80;
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	char templ[LIMIT];
	int tempr;
	char temps[LIMIT];
	char tempc[LIMIT];
	int kind;

	DMA* objects[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Podaj nazwe producenta: ";
		cin.getline(templ, LIMIT);
		cout << "Podaj ocene: ";
		cin >> tempr;
		cin.get();
		cout << "Podaj typ produktu 0 - brak, 1 - kolor, 2 - styl: ";
		cin >> kind;
		cin.get();
		if (kind == 0)
		{
			objects[i] = new baseDMA (templ, tempr);
		}
		else if (kind == 1)
		{
			cout << "Podaj kolor: ";
			cin.getline(tempc, LIMIT);
			objects[i] = new lacksDMA (tempc, templ, tempr);
		}
		else if (kind == 2)
		{
			cout << "Podaj styl: ";
			cin.getline(temps, LIMIT);
			objects[i] = new hasDMA (temps, templ, tempr);
		}
		else
			cout << "Blad!";
	}
	for (int i = 0; i < SIZE; i++)
		objects[i]->View();
}