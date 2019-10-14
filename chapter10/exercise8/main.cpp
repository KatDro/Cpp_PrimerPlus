#include <iostream>


int solution(int N)
{
    std::string binary;
    std::string temp;
    int liczba = N;
    int i = 0;
    while (liczba)
    {
        if (liczba%2)
            temp = '1';
        else
            temp = '0';
        binary += temp;
        liczba = liczba/2;
        i++;
    }

    i = 0;
    while (binary [i] == '0')
    {
        i++;
    }

    int amount = 0;
    int maxa = 0;
    for (i; i < binary.length(); i++)
    {
        if (binary [i] == '0')
        {
            amount = 1;
            int j = i + 1;
            while (binary [j] != '1')
            {
                amount++;
                j++;
            }
            if (maxa < amount)
            maxa = amount;
        }
    }
    return maxa;
}

int main()
{
    int a =solution (9);
    cout << a;
    return 0;
}
