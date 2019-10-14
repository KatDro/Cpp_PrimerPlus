#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using std::string;

class Account {
    private:
        string name;
        string number;
        double balance;
    public:
        Account (const string n, const string no, double b = 0);
        void show () const;
        void deposit (double d);
        void withdraw (double n);
};

void showmenu();

#endif
