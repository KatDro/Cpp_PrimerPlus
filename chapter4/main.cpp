#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    // cwiczenie 1
    /*string name;
    string surname;
    float score;
    int age;
    cout << "Jak masz na imie?" << endl;
    getline(cin, name);
    cout << "Jak sie nazywasz?" << endl;
    getline(cin, surname);
    cout << "Na jaka ocene zaslugujesz?" << endl;
    cin >> score;
    cout << "Ile masz lat?" << endl;
    cin >> age;
    cout << "Nazwisko: " << name+ " " +surname << endl;
    cout << "Ocena: " << score << endl;
    cout << "Wiek: " << age-1; */

    // cwiczenie 2
    /*string name;
    string dessert;

    cout << "Podaj swoje imie: \n";
    getline (cin, name);
    cout  << "Podaj swoj ulubiony deser:\n";
    getline (cin, dessert);
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n"; */

    // cwiczenie 3
    /*char name [20];
    char surname [20];
    cout << "Podaj imie:";
    cin.getline (name, 20);
    cout << "Podaj nazwisko:";
    cin.getline (surname, 20);
    char all [20];
    strcpy(all, surname);
    strcat(all, ", ");
    strcat(all, name);
    cout <<"Oto informacje zestawione w jeden napis: " << all; */

   //cwiczenie 4
   /*string name;
   string surname;
   cout << "Podaj imie: ";
   getline (cin, name);
   cout << "Podaj nazwisko: ";
   getline (cin, surname);
   cout << "Oto informacje zestawione w jedne napis: " << surname + ", " + name; */

   //cwiczenie 5
   /*struct Batonik
   {
       string marka;
       float waga;
       int kalorie;
   };
   Batonik snack = { "Mocha Munch", 2.3, 350 };
   cout << snack.marka << endl;
   cout << snack.waga << endl;
   cout << snack. kalorie; */

   // cwiczenie 6
      /*struct Batonik
   {
       string marka;
       float waga;
       int kalorie;
   };
   Batonik baton [3];
   cout << "Podaj nazwe pierwszego batona: ";
   getline (cin, baton[0].marka);
   cout << "Podaj wage " << baton[0].marka << " : ";
   cin >> baton[0].waga;
   cout << "Podaj kalorie " << baton[0].marka << " : ";
   cin >> baton[0].kalorie;
   cin.get();

   cout << "Podaj nazwe drugiego batona: ";
   getline (cin, baton[1].marka);
   cout << "Podaj wage " << baton[1].marka << " : ";
   cin >> baton[1].waga;
   cout << "Podaj kalorie " << baton[1].marka << " : ";
   cin >> baton[1].kalorie;
   cin.get();

    cout << "Podaj nazwe trzeciego batona: ";
   getline (cin, baton[2].marka);
   cout << "Podaj wage " << baton[2].marka << " : ";
   cin >> baton[2].waga;
   cout << "Podaj kalorie " << baton[2].marka << " : ";
   cin >> baton[2].kalorie;
   cin.get();

   cout << baton[0].marka << endl;
   cout << baton[0].waga << endl;
   cout << baton[0]. kalorie << endl <<endl;

    cout << baton[1].marka << endl;
   cout << baton[1].waga << endl;
   cout << baton[1]. kalorie << endl <<endl;

    cout << baton[2].marka << endl;
   cout << baton[2].waga << endl;
   cout << baton[2]. kalorie << endl <<endl; */

   //cwiczenie 7
   /*struct Pizza
   {
       string name;
       float srednica;
       float waga;
   };
   Pizza pizza;
   cout << "Podaj nazwe firmy produkujacej pizze: ";
   getline (cin, pizza.name);
   cout << "Podaj srednice pizzy: ";
   cin >> pizza.srednica;
   cout << "Podaj wage pizzy: ";
   cin >> pizza.waga;

   cout << "Firma: " << pizza.name << endl;
   cout << "Srednica" << pizza.srednica << endl;
   cout << "Waga" << pizza.waga << endl; */

   //cwiczenie 8
    /*struct Pizza
   {
       string name;
       float srednica;
       float waga;
   };

   Pizza *p = new Pizza;
   cout << "Podaj srednice pizzy: ";
   (cin >> p -> srednica).get();
   cout << "Podaj firme: ";
   getline (cin, p->name);
   cout << "Podaj wage:";
   cin >> p->waga;

   cout << (*p).name << endl;
   cout << p -> srednica << endl;
   cout << p->waga;

   delete p;*/


  //cwiczenie 9
  struct Batonik
  {
      string marka;
      float waga;
      int kalorie;
  };

  Batonik *b = new Batonik [3];

  b -> marka = "chocho";
  b -> waga = 76.8;
  b -> kalorie = 879;

  (*(b+1)).marka = "diada";
  (*(b+1)).waga = 87.9;
  (*(b+1)).kalorie = 987;

  (b+2) -> marka = "katos";
  (b+2) -> waga = 98.9;
  (b+2) -> kalorie = 876;

  cout << (*b).marka << endl << (*b).waga << endl << (*b).kalorie << endl;
  cout << (b+1) -> marka << endl << (*(b+1)).waga << endl << (*(b+1)).kalorie << endl;
  cout << (b+2) -> marka << endl << (*(b+2)).waga << endl << (*(b+2)).kalorie << endl;

  delete [] b;

    return 0;
}
