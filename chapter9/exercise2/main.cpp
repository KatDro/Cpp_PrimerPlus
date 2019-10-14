#include <iostream>
#include <string>


void strcount (std::string str);

int main()
{
    std::string input;
    char next;

    std::cout << "Wprowadz wiersz: \n";
    std::getline(std::cin, input);
    while (input != "\0")
    {
        strcount (input);
        std::cout << "Wprowadz nastepny wiersz (wiersz pusty konczy wprowadzanie):\n";
        std::getline(std::cin, input);
    }
    return 0;
}

void strcount(std::string str)
{
    static int total = 0;
    int count = 0;

    std::cout << "\"" << str << "\" zawiera ";
        count = str.length ();
    total += count;
    std::cout << count << "znakow\n";
    std::cout << "Lacznie: " << total << "znakow\n";
}
