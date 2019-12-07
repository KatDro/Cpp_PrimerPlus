#include "stack.h"
#include <iostream>

Stack::Stack(int n)
{
	pitems = new Item[n];
	size = 0;
	top = 0;
	amount = n;
}
Stack::Stack(const Stack& st)
{
	size = st.size;
	top = st.top;
	amount = st.amount;
	pitems = new Item[amount];
	for (int i = 0; i < size; i++)
		*(pitems + i) = *(st.pitems + i);
}
Stack::~Stack()
{
	delete[] pitems;
}
bool Stack::isempty() const
{
	if (size == 0)
		return true;
	else
		return false;
}
bool Stack::isfull() const
{
	if (size == amount)
		return true;
	else
		return false;
}
bool Stack::push(const Item& item)
{
	if (isfull())
		return false;
	else
	{
		pitems[top] = item;
		size++;
		top++;
		return true;
	}
}
bool Stack::pop(Item & item) 
{
	if (isempty())
		return false;
	else
	{
		top--;
		size--;
		return true;
	}
}
Stack& Stack::operator = (const Stack& st)
{
	size = st.size;
	top = st.top;
	amount = st.amount;
	pitems = new Item[amount];
	for (int i = 0; i < size; i++)
		* (pitems + i) = *(st.pitems + i);
	return *this;
}
std::ostream& operator << (std::ostream& os, const Stack& st)
{
	if (st.isempty())

		os << "Stos jest pusty.\n";

	for(int i = 0; i < st.size; i++)
		os << "Element " << i + 1 << " : " << st.pitems[i] << std::endl;
	return os;
}
