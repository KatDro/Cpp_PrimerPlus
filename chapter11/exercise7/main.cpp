#include <iostream>
#include "complex0.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    complex a (3.0, 4.0);
    complex c;
    cout << "Podaj liczbe zespolona (k, aby zakonczyc): " << endl;
    while(cin >> c)
        {
            cout << "c to " << c << endl;
            cout << "sprzezenie z c to: " << ~c << endl;
            cout << "a to " << a << endl;
            cout << "a + c wynosi: " << a + c << endl;
            cout << "a - c wynosi: " << a - c << endl;
            cout << "a * c wynosi: " << a * c << endl;
            cout << "2 * c wynosi: " << 2 * c << endl;
            cout << "Podaj liczbe zespolona (k, aby zakonczyc): " << endl;
        }
        cout << "Gotowe!";
    return 0;
}
