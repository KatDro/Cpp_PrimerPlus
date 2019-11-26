#pragma once
#include <stdexcept>
#include <string>

class bad_basemean : public std::logic_error
{
private:
	double a;
	double b;
public:
	explicit bad_basemean(const std::string& _Message, double x, double y) : std::logic_error(_Message), a(x), b(y) {}
	explicit bad_basemean(const char* _Message, double x, double y) : std::logic_error(_Message), a(x), b(y) {}
	virtual double first() const { return a; }
	virtual double second() const { return b; }
};
class bad_hmean : public bad_basemean
{
public:
	explicit bad_hmean(const std::string& _Message, double x, double y) : bad_basemean( _Message, x, y)  {}
	explicit bad_hmean(const char* _Message, double x, double y) : bad_basemean(_Message, x, y) {}
};
class bad_gmean : public bad_basemean
{
public:
	explicit bad_gmean(const std::string& _Message, double x, double y) : bad_basemean(_Message, x, y) {}
	explicit bad_gmean(const char* _Message, double x, double y) : bad_basemean(_Message, x, y) {}
};

