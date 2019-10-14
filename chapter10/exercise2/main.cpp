#include <iostream>
#include "person.h"

using std::cout;
using std::endl;

int main()
{
    Person one;
    Person two("Staszek");
    Person three ("Jacek", "Placek");

    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;

    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;

    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;

    return 0;
}
