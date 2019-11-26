#pragma once

//represent CD disk
class Cd
{
private:
	char performers[50];
	char label[20];
	int selections;	//amount of records 
	double playtime;	//time of all records on CD
public:
	Cd(const char* s1, const char* s2, int n, double x);
	Cd();
	virtual ~Cd() {}
	virtual void Report() const;
};

class Classic : public Cd
{
private:
	char main_tittle[50];
public:
	Classic(const char* s3, const char* s1, const char* s2, int n, double x);
	Classic();
	~Classic() {}
	void Report() const;
};
