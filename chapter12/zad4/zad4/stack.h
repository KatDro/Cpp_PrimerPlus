#pragma once
#include <iostream>
typedef unsigned long Item;

class Stack
{
private:
	enum {MAX = 10};	//stala o zasiegu klasy
	Item* pitems;		//przechowuje elementy stosu
	int size;			//liczba elementow na stosie
	int top;			//indeks szczytowego elementu stosu
	int amount;			//pojemnosc stosu
public:
	Stack(int n = MAX);
	Stack(const Stack& st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	//push() zwraca false, kiedy stos jest pelen, true w pozostalych przypadkach
	bool push(const Item& item);	//odklada element na stos
	//pop() zwraca false, kiedy stos jest pusty, true w pozostalych przypadkach
	bool pop(Item & item);		//zdejmuje element ze stosu
	Stack & operator = (const Stack& st);
	friend std::ostream& operator<<(std::ostream& os, const Stack& st);
};
