#include <iostream>
#include <string.h>
#include <string>
#include <cctype>
#include <cstring>

//cwiczenie 1 - const and prototypes
/*int t = 0;
void show (char const * a, int n = 0);*/

//cwiczenie 2 - const and prototypes
/*const int ArrSize = 20;
struct Batonik
{
    char marka [ArrSize];
    double waga;
    int kalorie;
};
void setbat (Batonik &a, const char * m = "Millenium Munch", double w  = 2.85, int k = 350);
void showbat (Batonik &a);*/

//cwiczenie 3 - const and prototypes
//void upp (std::string & a);

//cwiczenie 4 - const and prototypes
/*char *p;
struct stringy {
char * str;           //wskazuje lancuch
int ct;                 //dlugosc lancucha bez \0
};
void set (stringy &b, char *c);
void show (const stringy &b, int i = 1);
void show (const char *c, int i = 1);*/

//cwiczenie 5 - const and prototypes
/*template <typename T>
T max5 (T * arr);*/

//cwiczenie 6 - const and prototypes
/*template <typename T>
T * maxn (T * arr, int n);
template <> const char ** maxn (const char ** str, int n);*/

// cwiczenie 7
/*template <typename T>
void ShowArray (T arr[], int n);

template <typename T>
void ShowArray (T * arr[], int n);

template <typename T>
T SumArray (T arr[], int n);

template <typename T>
T SumArray (T *arr[], int n);

struct debts
{
    char name [50];
    double amount;
};*/

int main()
{
    //cwiczenie 1
    /*char  t [] = "Ala ma kota";
    show (t);
    show (t);
    std::cout << "Druga opcja funkcji: " << std::endl;
    show (t, 7);*/

    //cwiczenie 2
    /*Batonik kitkat;
    Batonik ptys;
    setbat (kitkat);
    showbat (kitkat);
    setbat (ptys, "kakao", 67.8, 100);
    showbat (ptys);*/

    //cwiczenie 3
    /*std::string kat;
    std::cout << "Podaj lancuch (q, aby zakonczyc): ";
    getline (std::cin, kat);
    while (std::cin.good() && kat[0] != 'q')
    {
    upp (kat);
    std::cout << kat << std::endl;
    std::cout << "Podaj lancuch (q, aby zakonczyc): ";
    getline (std::cin, kat);
    }
    std::cout << "Do widzenia";*/

    //cwiczenie 4
    /*stringy beany;
    char testing [] = "xyz to juz nie to, co kiedys.";
    set (beany, testing);
    show (beany);
    show (beany, 2);
    testing [0] = 'D';
    testing [1] = 'u';
    show (testing);
    show (testing, 3);
    show ("Gotowe!");
    delete [] p;*/

    //cwiczenie 5
    /*int tab1 [5]  {3, 45, 6, 1, 0};
    double tab2 [5] {3.65, 4.655, 6.1, 1, 0};
    int max1 = max5(tab1);
    double max2 = max5(tab2);
    std::cout << "Max dla tablicy 1: " << max1 << std::endl;
    std::cout << "Max dla tablicy 2: " << max2 << std::endl;*/

    //cwiczenie 6
    /*int tab1 [5]  {3, 4, 6, 1, 0};
    double tab2 [4] {3.65, 4.655, 6.9, 0};
    const char * tab3 [3] {"ala ma kota", "gorace dyskusje", "kubelek pelen mozlowosci"};
    int * max1 = maxn(tab1, 5);
    double * max2 = maxn(tab2, 4);
    const char ** max3 = maxn(tab3, 3);
    std::cout << "Max dla tablicy 1: " << *max1 << std::endl;
    std::cout << "Max dla tablicy 2: " << *max2 << std::endl;
    std::cout << "Max dla tablicy 3: " << max3 << std::endl;
    std::cout << "adres: " << &tab3[2] << std::endl;*/

    //cwiczenie 7
    /*int things [6] = {13, 31, 301, 310, 130};
    struct debts mr_E [3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0},
    };
    double * pd[3];
    // ustawianie wskaznikow na pola amount struktur z tablicy Mr_E
    for (int i = 0; i < 3; i++)
        pd [i] = &mr_E[i].amount;
    std::cout << "Wyliczanie rzeczy pana E.:\n";
    ShowArray (things, 6);
    std::cout << "Suma rzeczy pana E.:\n";
    int sumt = SumArray(things, 6);
    std::cout << sumt << std::endl;
    std::cout << "Wyliczanie dlugow pana E.:\n";
    ShowArray (pd, 3);
    std::cout << "Suma dlugow pana E.:\n";
    double sumd = SumArray(pd, 3);
    std::cout << sumd << std::endl;*/
    return 0;
}

//cwiczenie 1 - definitions
/*void show (char const * a, int n)
{
    t++;
    std::cout << "Wywolanie funkcji nr: " << t << std::endl;
    if (n == 0)
    {
        while (*a != '\0')
        {
            std::cout << *a;
            a++;
        }
        std::cout << std::endl;
    }
    else
    {
        char const * temp = a;
        for (int i = 1; i <= t; i++)
        {
            a = temp;
            while (*a != '\0')
            {
                std::cout << *a;
                a++;
            }
            std::cout << std::endl;
        }
    }
}*/

//cwiczenie 2 - definitions
/*void setbat (Batonik &a, const char * m, double w, int k)
{
    strcpy (a.marka, m);
    a.waga = w;
    a.kalorie = k;
}
void showbat (Batonik &a)
{
    std::cout << a.marka << std::endl;
    std::cout << a.waga << std::endl;
    std::cout << a.kalorie << std::endl;
}*/

//cwiczenie 3 - definitions
/*void upp (std::string & a)
{
    char c;
    int i = 0;
    while (a[i] != '\0')
    {
        c = a[i];
        c = toupper (c);
        a[i] = c;
        i++;
    }
}*/

//cwiczenie 4 - definitions
/*void set (stringy &b, char c [])
{
    p = new char [strlen(c)+1];
    int j =0;
    while (*(c+j))
    {
    *(p+j) = *(c+j);
    j++;
    }
    b.str = p;
    b.ct = strlen(b.str);
}
void show (const stringy &b, int i)
{
    for (int j = 0; j < i; j++)
        std::cout << b.str << std::endl;
}
void show (const char *c, int i)
{
    for (int j = 0; j < i; j++)
            std::cout << c << std::endl;
}*/

//cwiczenie 5 - definitions
/*template <typename T>
T max5 (T * arr)
{
    T max = *arr;
    for (int i = 1; i < 5; i++)
        if (*(arr+i) > max) max = *(arr+i);
    return max;
}*/

//cwiczenie 6 - definitions
/*template <typename T>
T * maxn (T * arr, int n)
{
        T * max = arr;
    for (int i = 1; i < n; i++)
        if (*(arr+i) > * max) * max = *(arr+i);
    return max;
}
template <> const char ** maxn (const char ** str, int n)
{
    const char **c = &str[0];
    int max = strlen(str[0]);
    for (int i = 1; i < n; i++)
    {
        if (strlen(str[i]) > max) c = &str[i];
    }
    return c;
}*/

//cwiczenie 7 - definitions
/*template <typename T>
void ShowArray (T arr[], int n)
{
    using namespace std;
    cout << "Szablon 1.A\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout <<endl;
}

template <typename T>
void ShowArray (T * arr [], int n)
{
    using namespace std;
    cout << "Szablon 1.B\n";
    for (int i = 0; i < n; i++)
        cout << *arr[i] << ", ";
    cout << endl;
}

template <typename T>
T SumArray (T arr[], int n)
{
    using namespace std;
    cout << "Szablon 2.A\n";
    T sum;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template <typename T>
T SumArray (T *arr [], int n)
{
    using namespace std;
    cout << "Szablon 2.B\n";
    T sum;
    for (int i = 0; i <n; i++)
        sum += *arr[i];
    return sum;
}*/



