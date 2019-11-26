#include <ctime>
#include <cstdlib>
#include <iostream>
#include "Person.h"

const int SIZE = 4;

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	srand(time(NULL));
	const int SIZE = 3;
	enum MyEnum
	{
		gunslinger, pokerplayer, baddude
	};

	Person* p[SIZE];
	char ch;
	int ct;
	for (ct = 0; ct < SIZE; ct++)
	{
	cout << "Podaj kategorie osoby: \n";
	cout << "g: Gunslinger, p: Poker Player, b: Bad Dude, w: wyjscie\n";
	cin >> ch;
		while (std::strchr("gpbw", ch) == nullptr)
		{
			cout << "Podaj g, p, b lub w: ";
			cin >> ch;
		}
		if (ch == 'w')
			break;
		switch (ch)
		{
		case 'g': p[ct] = new(std::nothrow) Gunslinger;
			break;
		case 'p': p[ct] = new(std::nothrow) PokerPlayer;
			break;
		case 'b': p[ct] = new(std::nothrow) BadDude;
			break;
		}
		cin.get();
		p[ct]->Set();
	}
		cout << "Lista osob:";
		for (int i = 0; i < ct; i++)
		{
			cout << endl;
			p[i]->Show();
		}
		for (int i = 0; i < ct; i++)
			delete p[i];

	cout << "\nKoniec!";
}