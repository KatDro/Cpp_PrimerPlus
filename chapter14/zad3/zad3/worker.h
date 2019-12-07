#pragma once
#include <string>

class Worker
{
private:
	std::string fullname;
	long id;
public:
	virtual void data() const;
	virtual void get();
	Worker() : fullname("brak"), id(0L) {}
	Worker(const std::string& s, long n) : fullname(s), id(n) {}
	//~Worker() {}
};
