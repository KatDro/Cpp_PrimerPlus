#include <iostream>

using namespace std;

const float konwersja=30.48;
const float kmetry=0.0254;
const float kkilo=2.2;

int main()
{
// zadanie 1
/*float cent;
cout << "Podaj odleglosc w centymetrach: ";
cin >> cent;
cout << "odleglosc w stopach: " << cent/konwersja; */

// zadanie 2
/*int stopy;
int cale;
int funty;
 cout << "podaj wzrost w stopach i calach: ";
 cin >> stopy;
 cin >> cale;
 cout << "Podaj wage w funtach: ";
 cin >>funty;
 float kilo=funty/kkilo;
 float metry =(stopy/12+cale)*kmetry;
 float BMI=kilo/(metry*metry);
 cout << "Twoje BMI: " << BMI;*/

 // zadanie 3
 /*float stopnie;
 float minuty;
 float sekundy;
 cout << "Podaj odleglosc geograficzna w stopniach, minutach i sekundach: ";
 cin >> stopnie >> minuty >> sekundy;
 float stopnie_calosc=stopnie+minuty/60+sekundy/(60*60);
 cout << "Szerekosc geograficzna zapisana dziesietnie to: " << stopnie_calosc;*/

 // zadanie 4
 /*const int sek_min=60;
 const int godz_min=60;
 const int dni_godz=24;
 const int rok_dni=365;

 long long sekunda;
 cout << "Podaj ilosc sekund: ";
 cin >> sekunda;
 long minuta = sekunda/sek_min;
 sekunda = sekunda%sek_min;
 long godzina = minuta/godz_min;
 minuta = minuta%godz_min;
 long dni = godzina/dni_godz;
 godzina = godzina%dni_godz;
 int lata = dni/rok_dni;
 dni = dni%rok_dni;
 cout << "Ilosc lat: " << lata << endl << "Ilosc dni: " << dni << endl << "Ilosc godzin: " << godzina << endl;
 cout << "Ilosc minut: " << minuta << endl << "Ilosc sekund: " << sekunda;*/

 // zadanie 5

 /*long long swiat;
 long long polska;
 cout << "Podaj liczebnosc ludnosci swiata: ";
 cin >> swiat;
 cout << "Podaj liczebnosc ludzkosci Polski: ";
 cin >> polska;
 long double procent_polska;
 procent_polska=(long double) polska / (long double) swiat *100;
 cout << "Polulacja Polski stanowi: " << procent_polska <<"%";*/

 // Zadanie 6
 /*const int pojemnosc=13;
 float trasa;
 float zuzyto_galonow;
 cout << "Ile mil przejechano: ";
 cin >> trasa;
 cout << "Ile galonow benzyny zuzyto: ";
 cin >> zuzyto_galonow;
 float zuzycie = trasa/zuzyto_galonow;
 cout << "Zostalo ci: " << pojemnosc-zuzyto_galonow << " galonow paliwa\n";
 cout << "Twoje zuzycie to: " << zuzycie << " mil/galon\n";
 cout << "Mozesz jeszcze przejechac: " << (pojemnosc-zuzyto_galonow)*zuzycie << " mil\n";*/

 // Zadanie 7

 double zuzycie_euro;
 double zuzycie_amer;

 cout << "Podaj zuzycie benzyny (litry na 100 kilimetrow): ";
 cin >> zuzycie_euro;

 double mile = 62.137;
 double galony = zuzycie_euro/3.785;

 zuzycie_amer = mile/galony;

 cout << "Zuzycie benzyny to: " << zuzycie_amer << " mili na galon";

    return 0;
}
