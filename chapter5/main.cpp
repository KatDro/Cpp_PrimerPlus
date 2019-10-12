#include <iostream>
#include <array>
#include <cstring>
#include <string>


using namespace std;

//Cwiczenie 1 - funkcje

/*int sum;
int sum_for(int first, int second)
{
    sum = 0;
    for (int i=first; i<=second; i++)
    {
       sum = sum + i;
    }
    return sum;
}

int sum_while (int first, int second)
{
    sum = 0;
    int i = first;
    while (i<=second)
    {
        sum += i;
        i++;
    }
    return sum;
}*/

//cwiczenie 4 - funkcje

/*const float per_1 = 0.1; // const percentage
const float per_2 = 0.05; // folding percentage
const int money_1 = 100; // const percentage money
const int money_2 = 100; // folding percentage money

float profit_Dafne(int time)
{
    float profit = money_1+time*per_1*money_1;
    return profit;
}

float profit_Cleo(int time)
{
    float profit = money_2+per_2*money_2;
    float profit_year;
    for (int i =2; i <= time; i++)
    {
        profit_year = profit*per_2;
        profit +=profit_year;
    }
    return profit;
}*/

// cwiczenie 5 - funkcje

/*int * ilosc ()
{
    int * ilosc = new int [12];
    string miesiace [12] = {"styczen", "luty" , "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien"};
    for (int i = 0; i <= 11; i++)
    {
        cout << "Podaj ilosc sprzedanych egzemplarzy w miesiacu " << miesiace [i] << endl;
        cin >> ilosc [i];
    }
    for (int i = 0; i <=11; i++)
    {
        cout << "Ilosc sprzedanych egzemplarzy w miesiacu " << miesiace [i] << " wynosi: ";
        cout <<  ilosc [i] << endl;
    }
    cout << endl << endl;
    return ilosc;
}*/

// cwiczenie 6 - funkcje, ZLE

/*int ** ilosc ()
{
    int ** ilosc = 0;
    ilosc = new int * [3];
    ilosc [3] = new int [12];

    string miesiace [12] = {"styczen", "luty" , "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien"};
    for (int j=0; j <= 2; j++)
    {
        for (int i = 0; i <= 11; i++)
        {
            cout << "Podaj ilosc sprzedanych egzemplarzy w roku "<< j+1<< ", miesiacu " << miesiace [i] << endl;
            cin >> ilosc [j][i];
        }
    }

    for (int j = 0; j <=2; j++)
    {
        for (int i=0; i<=11; i++)
        {
            cout << "Ilosc sprzedanych egzemplarzy w roku " << j+1 <<  ", miesiacu " << miesiace [i] << " wynosi: ";
            cout <<  ilosc [j] [i] << endl;
        }
    }
    cout << endl << endl;
    return ilosc;
}*/

int main(){
// cwiczenie 1
/*  int x, y;
    cout << "Podaj dwie liczby calkowite: ";
    cin >> x >> y;
    cout << "Suma liczb z podanego przedzialu to (petla for): " << sum_for(x, y) << endl;
    cout << "Suma liczb z podanego przedzialu to (petla while): " << sum_while(x, y);*/

//cwiczenie 2
/*  const int Array_size = 100;
    array <long double, Array_size+1> silnia;
    silnia [0] = silnia [1] = 1;
    cout << "0! = " << silnia [0] << endl << "1! = " << silnia[1] << endl;
    for (int i = 2; i <= Array_size; i++)
    {
        silnia [i] = silnia [i-1] *i;
         cout << i << "! = " << silnia[i] << endl;
    }*/

// cwiczenie 3
/*  float x;
    float sum;

    cout << "Podaj liczby, program wyliczy ich sume (0 konczy program): ";
    cin >> x;
    sum=x;
    while (x!=0)
    {
        cout << "Suma to: " << sum << endl;
        cin >> x;
        sum +=x;
    }*/

// cwiczenie 4
/*  int i=1;
int time;
while (profit_Dafne(i)>profit_Cleo(i))
{
    time = i;
    i++;
}
cout << "Zysk Cleo przekroczy zysk Dafne po " << time << "latach." << endl << endl;

for (int i=1; i<=time+1;i++)
{
    cout << "Pieniadze Dafne po " << i << " latach: " << profit_Dafne(i) << endl;
    cout << "Pieniadze Cleo po " << i << " latach:  "<< profit_Cleo(i) << endl;
}*/

// cwiczenie 5
/*  cout << "Prosze o podanie  ilosci sprzedanych sztuk." << endl;

    int *p;
    p = ilosc();
    int suma=0;
    for (int i =0; i<=11; i++)
    {
        suma += p[i];
    }
    cout << "Roczna sprzedaz wynosi: " << suma;*/

// cwiczenie 6
/*  string miesiace [12] = {"styczen", "luty" , "marzec", "kwiecien", "maj", "czerwiec", "lipiec", "sierpien", "wrzesien", "pazdziernik", "listopad", "grudzien"};
    int ilosc [3] [12];
    for (int j=0; j <= 2; j++)
    {
        for (int i = 0; i <= 11; i++)
        {
            cout << "Podaj ilosc sprzedanych egzemplarzy w roku "<< j+1<< ", miesiacu " << miesiace [i] << endl;
            cin >> ilosc [j][i];
        }
    }
    int suma = 0;
    for (int j = 0; j <= 2; j++)
    {
        for (int i = 0; i <= 11; i++)
        {
            suma += ilosc [j] [i];
        }
    }
    cout << "Roczna sprzedaz wynosi: " << suma;*/

// cwiczenie 7
 /*struct car
 {
     string marka;
     int rok;
 };

 int ilosc;
 cout << "ile samochodow chcesz skatalogowac? ";
 cin >> ilosc;
 cin.get ();

 car *p = new car [ilosc];
 for (int i = 0; i <= ilosc-1; i++)
 {
    cout << "Podaj marke samochodu nr " << i+1 << " : ";
    getline(cin, (p+i) -> marka);
    cout << "Podaj rok produkcji samochodu nr " << i+1 << " : ";
    cin >> (p+i) -> rok;
    cin.get ();
 }

  for (int i = 0; i <= ilosc-1; i++)
 {
    cout << "Samochodu nr " << i+1 << " : " << (p+i) -> marka << endl;
    cout << "Rok produkcji samochodu nr " << i+1 << " : " << (p+i) -> rok << endl;
 }*/

// cwiczenie 8
/*const int ArSize = 7;
char ch [ArSize];
int ilosc = 0;
cout << "Podaj pierwsze slowo: ";
cin.get (ch, ArSize).get();
while (strcmp(ch, "gotowe") )
{
    ilosc++;
    cout << "Podaj kolejne slowo: ";
    cin.get (ch, ArSize).get();
}
cout << "Podano " << ilosc << " slow";*/

// cwiczenie 9
/*string ch;
int suma = 0;
cout << "Podaj pierwsze slowo (gotowe konczy zliczanie): ";
cin >> ch;
while (ch != "gotowe")
{
    suma++;
    cout << "Podaj kolejne slowo: ";
    cin >> ch;
}
cout << "Suma podanych slow to: " << suma;*/

// cwiczenie 10
int liczba_wierszy;
cout << "Podaj liczbe wierszy: ";
cin >> liczba_wierszy;
for (int j = 1; j <= liczba_wierszy; j++)
{
    for (int i = liczba_wierszy-1; i >= j; i--)
    {
        cout << ".";
    }
    for (int i = 1; i <= j; i++)
    {
        cout << "*";
    }
    cout << endl;
}


    return 0;
}

