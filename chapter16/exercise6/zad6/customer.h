#pragma once
class Customer;
typedef Customer Item;

class Customer
{
private:
	long arrive;		//czas dolaczenia do kolejki
	int processtime;	//czas obslugi klienta
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}
