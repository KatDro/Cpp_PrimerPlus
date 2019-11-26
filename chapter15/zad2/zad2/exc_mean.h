#pragma once
#include <stdexcept>
#include <string>

class bad_hmean : public std::logic_error
{
public:
	explicit bad_hmean(const std::string& _Message) : std::logic_error(_Message.c_str()) {}
	explicit bad_hmean(const char* _Message) : std::logic_error(_Message) {}
};
class bad_gmean : public std::logic_error
{
public:
	explicit bad_gmean(const std::string& _Message) : std::logic_error(_Message.c_str()) {}
	explicit bad_gmean(const char* _Message) : std::logic_error(_Message) {}
};