#include <iostream>
#include <array>
#include <string>

//cwiczenie 1 - prototypes of functions and data
/*float sr_harm (float a, float b);*/

// cwiczenie 2 - prototypes of functions and data
/*const int ArSize = 10;
int input_score (float *begin, float *end);
void show_score (const float *begin, const float *end, int size);
float avarage_score (const float *arr,  int size);*/

//cwiczenie 3 - prototypes of functions and data
/*struct pudlo
{
    char producent [40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};
void show_par (const pudlo a);
void calc_obj (pudlo *a);*/

//cwiczenie 4 - prototypes of functions and data
/*long double probality (unsigned numbers, unsigned picks, unsigned numbers_powerball);*/

//cwiczenie 5 - prototypes of functions and data
/*long long silnia (int n);*/

//cwiczenie 6 - prototypes of functions and data
/*const int ArrSize = 5;
int fill_array (double *arr, int size);
void show_array (const double arr [], int size);
void reverse_array (double *arr, int size);*/

//cwiczenie 7 - prototypes of functions and data
/*const int Max = 5;
double * fill_array (double *begin, double *end);
void show_array (const double *begin, const double *end);
void revalue (double r, double *begin, double *end);*/

//cwiczenie 8 - prototypes of functions and data
/*const int Seasons = 4;
const char * Snames [Seasons] = {"Wiosna", "Lato", "Jesien", "Zima"};
struct expenses
{
    double values [Seasons];
};
void fill (expenses *pa, int size);
void show (expenses exp, int size);*/

//cwiczenie 9 - prototypes of functions and data
/*const int SLEN = 30;
struct student
{
    char full_name [SLEN];
    char hobby [SLEN];
    int ooplevel;
};
//n - ilosc elementow w tablicy. Pobiera i zapisuje dane o studentach,
//wprowadzanie sie konczy kiedy tablica pelna lub puste nazwisko, zwraca ilosc elementow;
int getinfo (student pa[], int n);
//pokazuje zawartosc struktury
void display1 (student st);
//pokazuje zawartosc struktury
void display2 (const student *p);
//pokazuje zawartosc tablicy
void display3 (const student p[], int n);*/

//cwiczenie 10 - prototypes of functions and data
/*double calculate (double a, double b, double (*p) (double x, double y));
double add (double x, double y);
double multi (double x, double y);*/

int main()
{
    // cwiczenie 1
    /*std::cout << "Podaj pare liczb (0 konczy program): ";
    float x, y;
    std::cin >> x >> y;
    if  (std::cin.good()) std::cout << "Podane liczby to: " << x  << ", "<< y << std::endl;
    while ( x != 0 && y != 0)
    {
    float h = sr_harm (x, y);
    std::cout << "Srednia harmoniczna to: " << h << std::endl;
    std::cout << "Podaj pare liczb (0 konczy program): ";
    std::cin >> x >> y;
    if  (std::cin.fail()) break;
    std::cout << "Podane liczby to: " << x  << ", "<< y << std::endl;
    }
    std::cout << "Nastapi zakonczenie programu.";
    getchar();
    getchar();*/

    // cwiczenie 2
    /*float score[ArSize] = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    int size = input_score (score, score + ArSize);
    show_score (score, score + ArSize, size);
    std::cout << "Sredni wynik to: " <<  avarage_score (score, size);*/

    // cwiczenie 3
    /*pudlo first = {"PUDLOX", 10, 5, 1, 0};

    show_par (first);
    std::cout << std::endl << std::endl;
    calc_obj (&first);
    show_par (first);*/

    //cwiczenie 4
    /*double total, choices, powerball;
    std::cout << "Podaj najwieksza liczbe, jaka mozna wybrac, liczbe skreslen \noraz zbior z ktorego trzeba wybrac power ball";
    while ((std::cin >> total >> choices >>powerball) && choices <= total)
    {
        std:: cout << "Szansa wygranej to jeden do ";
        std::cout << probality (total, choices, powerball) << std::endl;
        std::cout << "Nastepne trzy liczby (q aby zakonczyc): ";
    }
    std::cout << "Do widzenia \n";*/

    //cwiczenie 5
    /*std::cout << "Podaj liczbe by obliczyc jej silnie: ";
    int number;
    std::cin >> number;
    long long result = silnia (number);
    std::cout << "Wynik: " << result;*/

    //cwiczenie 6
    /*double arr [ArrSize];
    std::cout << "Podaj liczby: ";
    int size = fill_array (arr, ArrSize);
    std::cout << "Wprowadzone dane: ";
    show_array (arr, size);
    std::cout << "\nWprowadzone dane po odwoceniu: \n";
    reverse_array (arr, size);
    show_array (arr, size);*/

    // cwiczenie 7
    /*double properties [Max];
    double *end = fill_array (properties, properties + Max);
    show_array (properties, end);
    if (end > properties)
    {
        std::cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() !='\n')
                continue;
            std::cout << "Niepoprawna wartosc; podaj liczbe: ";
        }
        revalue (factor, properties, end);
        show_array(properties, end);
    }
    std::cout << "Gotowe.\n";
    std::cin.get();
    std::cin.get();*/

    // cwiczenie 8
    /*expenses exp;
    fill(&exp, Seasons);
    show(exp,Seasons);*/

    //cwiczenie 9
    /*std::cout << "Podaj wielkosc grupy: ";
    int class_size;
    std::cin >> class_size;
    while (std::cin.get() != '\n')
        continue;
    student *ptr_stu = new student [class_size];
    int entered = getinfo (ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        //display1(ptr_stu[i]);
        //display2(&ptr_stu[i]);
    }
    display3 (ptr_stu, entered);
    delete [] ptr_stu;
    std::cout << "Gotowe\n";*/

    //cwiczenie 10
    /*while (1)
    {
    std::cout << "Podaj dwie liczby: ";
    double x,y;
    std::cin >> x >> y;
    while (std::cin.fail())
    {
        std::cout << "Podano nie poprawne dane !";
        std::cin.clear();
       while (std::cin.get() != '\n')
            std::cin.get();
        std::cout << "Podaj liczby jeszcze raz: ";
        std::cin >> x >> y;
    }
    std::cout << "Wynik dodawania: " << calculate (x, y, add) << std::endl;
    std::cout << "Wynik mnozenia: " << calculate (x, y, multi) << std::endl;
    }*/

    return 0;
}

// cwiczenie 1 - declaration of functions
/*float sr_harm (float a, float b)
{
    return 2.0*a*b/(a+b);
}*/

// cwiczenie 2 - declaration of functions
/*int input_score(float* begin, float* end)
{
    int size = 0;
    char ch;
    float *p = begin;
    std::cout << "Podaj wyniki (q konczy wprowadzanie): ";
    while (p != end)
    {
        std::cin >> *(p);
        while (std::cin.fail())
            {
                std::cin.clear();
                ch = std::cin.get();
                if(ch == 'q')   {
                         std::cout << "Nastapilo zakonczenie wprowadzania danych.";
                        break;
                }
                else    {
                        std::cout << "Blad. Podaj wynik jeszcze raz." << std::endl;
                        std::cin >> *(p);
                        if (std::cin.good()) std::cout << "Podawaj wyniki dalej (q konczy wprowadzanie): ";
                }
            }
        if (ch == 'q') break;
        p++;
        size++;
    }
    return size;
}

void show_score (const float *begin, const float *end, int size)
{
    const float *p = begin;
    std::cout << " Wyniki: " << std::endl;
    for (int i = 0; i < size ; i++)
    {
        std::cout << *(p+i) << ", ";
    }
}

float avarage_score (const float *arr, int size)
{
    const float *p = arr;
    float result;
    for (int i = 0; i < size ; i++)
    {
        result += *(p+i);
    }
    return result/size;
}*/

// cwiczenie 3 - declarations of functions
/*void show_par (const pudlo a)
{
    std::cout << "Producent: ";
    int i = 0;
    while (a.producent [i] != '\0')
    {
        std::cout << a.producent [i];
        i++;
    }
    std::cout << std::endl << "wysokosc: " << a.wysokosc;
    std::cout << std::endl << "szerekosc: " << a.szerokosc;
    std::cout << std::endl << "dlugosc: " << a.dlugosc;
    std::cout << std::endl << "objetosc: " << a.objetosc;
}
void calc_obj (pudlo *p)
{
  p -> objetosc = p -> wysokosc * p -> szerokosc * p -> dlugosc;
}*/

//cwiczenie 4 - declarations of functions
/*long double probality (unsigned numbers, unsigned picks, unsigned numbers_powerball)
{
    long double result =1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
        result = result * numbers_powerball;
    return result;
}*/

//cwiczenie 5 - declarations of functions
/*long long silnia (int n)
{
    long long result;
    if (n != 1)
    {
        result = n * silnia (n-1);
        return result;
        }
    else
        return 1;
}*/

//cwiczenie 6 - declarations of functions
/*int fill_array(double* arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        std::cin >> *(arr+i);
        if (std::cin.fail())    {
        std::cout << "Wystapil blad. Zakonczenie wprowadzanie danych.\n";
        std::cin.clear();
        break;
        }
    }
    return i++;
}

void show_array (const double arr [], int size)
{
     for (int i = 0; i < size; i++)
        std::cout << arr[i] << ", ";
}
void reverse_array (double *arr, int size)
{
    double temp;
    int i, j;
    for (i = 0, j = size - 1; i != j; i++, j--)
    {
        temp = arr [j];
        arr [j] = arr [i];
        arr [i] = temp;
    }
}*/

//cwiczenie 7 - declarations of functions
/*double * fill_array (double *begin, double *end)
{
    double *p;
    double temp;
    int i;
    for (p = begin, i = 0; p < end; p++, i++)
    {
        std::cout << "Podaj wartosc nr " << (i+1) <<" : ";
        std::cin >> temp;
        if (!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bledne dane, wprowadzanie zakonczone. \n";
            break;
        }
        else if (temp < 0)
            break;
        *p = temp;
    }
    return p;
}
void show_array (const double *begin, const double *end)
{
    const double *p;
    int i;
    for (p = begin, i = 0; p < end; p++, i++)
            {
                std::cout << "Nieruchomosc nr " << (i+1) <<" : " << *p << std::endl;
            }
}
void revalue (double r, double *begin, double *end)
{
    double *p;
    for (p = begin; p < end; p++)
            *p *= r;
}*/

//cwiczenie 8 - declarations of functions
/*void fill (expenses *pa, int size)
{
    using namespace std;
    for (int i = 0; i < size; i++)
    {
        cout << "Podaj wydatki za okres " << Snames [i] << ": ";
        cin >> pa ->values[i];
    }
}
void show (expenses exp, int size)
{
    using namespace std;
    double total = 0.0;
    cout << "\nWydatki\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames [i] << ": " << exp.values[i] << " zl" << endl;
        total += exp.values[i] ;
    }
    cout << "Laczne wydatki roczne: " << total << " zl" << endl;
}*/

//cwiczenie 9 - declarations of functions
/*int getinfo (student pa[], int n)
{
    using namespace std;
    int i;
    for (i = 0; i < n; i++)
    {
        char temp [2];
        cout << "Podaj imie i nazwisko " << i + 1 << " studenta: ";
        cin.getline((pa+i) -> full_name, SLEN);
        if ((pa+i) -> full_name [0]  == '\0') break;
        cout << "Podaj hobby " << i + 1 << " studenta: ";
        cin.getline((pa+i) -> hobby, SLEN);
        cout << "Podaj poziom programowania obiektowego " << i + 1 << " studenta: ";
        cin >> (pa+i) -> ooplevel;
        cin.get();
    }
    cout << endl;
    return i;
}
void display1 (student st)
{
    using namespace std;
    cout << "Imie i nazwisko" << " studenta: " << st.full_name << endl;
    cout << "Hobby" << " studenta: " << st.hobby << endl;
    cout << "Poziom programowania obiektowego" << " studenta: " << st.ooplevel << endl;
    cout << endl;
}
void display2 (const student *p)
{
    using namespace std;
    cout << "Imie i nazwisko studenta: " << p -> full_name << endl;
    cout << "Hobby studenta: " << p -> hobby << endl;
    cout << "Poziom programowania obiektowego studenta: " << p -> ooplevel << endl;
    cout << endl;
}
void display3 (const student p[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Imie i nazwisko studenta: " << (p + i) -> full_name << endl;
        cout << "Hobby studenta: " << (p + i) -> hobby << endl;
        cout << "Poziom programowania obiektowego studenta: " << (p + i) -> ooplevel << endl;
        cout << endl;
    }
}*/

//cwiczenie 10 - declarations of functions
/*double calculate (double a, double b, double (*p) (double x, double y))
{
    return (*p) (a, b);
}
double add (double x, double y)
{
    return x+y;
}
double multi (double x, double y)
{
    return x*y;
}*/














