#pragma once

//represent CD disk
class Cd
{
private:
	char* performers;
	char* label;
	int selections;	//amount of records 
	double playtime;	//time of all records on CD
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd();
	Cd(const Cd& c);
	virtual ~Cd();
	virtual void Report() const;
	Cd& operator=(const Cd& c);
	
};

class Classic : public Cd
{
private:
	char* main_tittle;
public:
	Classic(const char* s3, const char* s1, const char* s2, int n, double x);
	Classic();
	Classic(const Classic& c);
	~Classic();
	void Report() const;
	Classic& operator=(const Classic& c);
};
