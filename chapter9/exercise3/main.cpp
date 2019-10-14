#include <iostream>
#include <string.h>
#include <sstream>

const int BUF = 100;
const int N = 2;
char buffer [BUF]; // obszar pamieci do realizacji przydzialow

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    chaff * c;
    c = new (buffer) chaff [N]; // przydzial w pamieci bufora
        strcpy (c -> dross, "Struktura 1");
        c -> slag = 1000000;
        strcpy ((c+1) -> dross, "Struktura 2");
        (c+1) -> slag = 200;
        std::cout << "Adres pamieci buffora 1: " << (void*) buffer<< std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cout << "Adres struktury " << i << ": " << (c+i) << std::endl;
        std::cout << "Rozmiar struktury w bajtach: " << sizeof(chaff) << std::endl;
        std::cout << i+1 << ": " << (c+i) -> dross << std::endl;
        std::cout << (c+i) -> slag<< std::endl;
    }
    return 0;
}
