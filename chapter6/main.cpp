#include <iostream>
#include <fstream>
#include <cctype>
#include <string>
#include <cstring>

//Cwiczenie 1
/*void EditText (char ch)

{
    while (ch != '@')
    {
        if (isdigit(ch))
        {
            std::cin.get(ch);
            continue;
        }
        if (islower(ch))
            std::cout << char (toupper(ch));
        else
            std::cout  << char (tolower(ch));
         std::cin.get(ch);
    }
        std::cout << std::endl;
}*/

//Cwiczenie 2
/*const int don = 10;
double AvarageDonation (double donation[], int n)
{
    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += donation[i];
    }
    return suma/n;
}*/

//Cwiczenie 3
/*void show_menu()
{
    std::cout << "r) roslinozerca \t p) pianista"<< std::endl;
    std::cout << "d) drzewo \t \t g) gra"<< std::endl;
    std::cout << "Prosze podac litere r, p, d lub g: ";
}*/

//Cwiczenie 4
/*const int amount = 3;

   struct zpdw  {
        std::string imie;
        std::string stanowisko;
        std::string pseudozpdw;
        int preferencje; // 0=imie, 1=stanowisko, 2=pseudonim
    };
    zpdw osoby [amount] =
    {
        {"Jan Bago", "Dzokej", "Ultra mega orzel", 2},
        {"Kuba Patos", "Kucharz" ,"Pato", 0},
        {"PaPa", "Skoczek", "Zyla", 1},
    };

// Function show menu and return chosen option
char show_menu ()
{
    char opcja;
    std::cout << "a. lista wg imion \t\t b. lista wg stanowisk"<< std::endl;
    std::cout << "c. lista wg pseudonimow \t d. lista wg preferencji"<< std::endl;
    std::cout << "q. koniec"<< std::endl;
    std::cout << "Wybierz opcje: ";
    std::cin.get(opcja);
    std::cin.get();
    while (opcja != 'a' && opcja != 'b' && opcja != 'c' && opcja != 'd' && opcja != 'q')
    {
        std::cout << "Wybierz opcje: ";
        std::cin.get(opcja);
        std::cin.get();
    }
    return opcja;\
}

void show_a()
{
    for (int i=0; i<amount; i++)
    {
        std::cout << osoby[i].imie << std::endl;
    }
}

void show_b()
{
    for (int i=0; i<amount; i++)
    {
        std::cout << osoby[i].stanowisko << std::endl;
    }
}

void show_c()
{
    for (int i=0; i<amount; i++)
    {
        std::cout << osoby[i].pseudozpdw << std::endl;
    }
}

void show_d()
{
    for (int i=0; i<amount; i++)
    {
        switch (osoby[i].preferencje)
        {
            case 0: std::cout << osoby[i].imie << std::endl; break;
            case 1: std::cout << osoby[i].stanowisko << std::endl; break;
            case 2: std::cout << osoby[i].pseudozpdw << std::endl; break;
        }
    }
}

void show_option (char c)
{
    switch (c)   {
        case 'a' : show_a();
                    break;
        case 'b' : show_b();
                    break;
        case 'c' : show_c();
                    break;
        case 'd' : show_d();
                    break;
        default : std::cout << "Koniec programu" << std::endl;
                    std::cin.get();
                    break;
        }
}*/

//cwiczenie 5
/*double taxes (double cash)
{

        if (cash <= 5000)  return 0;
        else if (cash > 5000 && cash <= 10000 )  return (cash-5000)*0.1;
        else if (cash > 10000 && cash <= 20000 )  return (10000*0.1 + (cash-10000-5000)*0.15);
        else  return (10000*0.1 + 20000*0.15 + (cash- 5000 - 10000 - 20000)*0.2);
}*/

int main()
{
    //Cwiczenie 1
   /*std::cout << "Podaj tekst (znak @ konczy program) : " << std::endl;
   char ch;
   EditText(ch);*/

   //Cwiczenie 2
   /*std::cout << "Podaj wartosc "<< don << " datkow: ";
   double donation [don];
   int i = 0;
   std::cin >>donation[i];
   i++;
   while (i < don && std::cin.good())
   {
       std::cin >> donation [i];
       if (std::cin.fail()) break;
       i++;
   }
   std::cout << std::endl;
   int liczba_elementow = i;

   double avarage = AvarageDonation(donation, liczba_elementow);
   std::cout << std::fixed;
   std::cout.precision(2);
   std::cout << "Srednia wartosc datkow to: " << avarage << std::endl;
    std::cout << "Datki wieksze od sredniej wartosci to:  ";
   for (int j = 0; j < i; j++)
   {
       if(donation[j] > avarage)
        std::cout << donation[j] << ", ";
   }*/

   //Cwiczenie 3
   /*show_menu();
   char ch;
   std::cin.get(ch);
    std::cin.get();
   while (!(ch == 'r' || ch == 'p' || ch == 'd' || ch == 'g'))
   {
            std::cout << "Prosze podac litere r, p, d lub g: ";
            std::cin.get(ch);
            std::cin.get();
   }
       switch(ch)
       {
            case 'r' : std::cout << "Krolik jest roslinozerca." <<std::endl;
                            break;
            case 'p' :std::cout << "Mozart jest pianista." <<std::endl;
                            break;
            case 'd' :std::cout << "Klon jest drzewem." <<std::endl;
                            break;
            case 'g' :std::cout << "Diablo jest gra." <<std::endl;
                            break;
       }*/

    //Cwiczenie 4
   /* char opcja;

    opcja = show_menu();
    std::cout  << "\nWybrano opcje: " << opcja << std::endl;
    show_option(opcja);*/

    //Cwiczenie 5
    /*double money;
    std::cout << "Podaj kwote, do wyliczenia podatku: ";
    std::cin >> money;
    if (std::cin.fail() || money < 0) {
            std::cout << "Podono bledna wartosc. Nastapi zakonczenie programu";
            std::cin.get();
            }
    double tax = taxes(money);
    std::cout << "Kwota podatku to: " << tax << std::endl;*/

    //Cwiczenie 6
    /*struct donation
    {
        std::string name;
        double money;
    };
    int amount;
    std::cout << "Program sledzacy wplywy na konto Towarzystwa na Rzecz Zachowania Dobrych Wplywow." << std::endl << std::endl;
    std::cout << "Podaj ilosc wplacajacych do wprowadzenia: ";
    std::cin >> amount;
    std::cin.get();

    donation *p = new donation [amount];
    for (int i = 0; i < amount; i++)
    {
        std::cout << "Podaj imie darczyncy: ";
        std::getline(std::cin, (p+i) -> name);
        std::cout << "Podaj kwote: ";
        std::cin >> (p+i) -> money;
        std::cin.get();
    }

    int j;

    std::cout << "Nasi Wspaniali Sponorzy: " << std::endl;
    for (int i = 0; i < amount; i++)
    {
        j = 0;
        if((p+i) -> money >= 10000) {
                std::cout << (p+i) -> name  << std::endl;
                j++;
        }
    }
    if (j == 0) std::cout << "Brak" << std::endl;

    std::cout << "Nasi Sponorzy: " << std::endl;
    for (int i = 0; i < amount; i++)
    {
         j = 0;
        if((p+i) -> money < 10000)  {
            std::cout << (p+i) -> name  << std::endl;
            j++;
        }
    }
        if (j == 0) std::cout << "Brak" << std::endl;

        delete [] p;*/

    // Cwiczenie 7
    /*std::cout << "Podawaj slowa (pojedyncze q konczy) : " << std::endl;
    char ch [20];
    int samo = 0;
    int spol = 0;
    int inne = 0;

    std::cin >> ch;
    int i = 0;
    while (strcmp (ch, "q"))
    {
        if (isalpha((int) ch[0]))
        {
            if (ch[0] == 'a' || ch[0] == 'A' || ch[0] == 'e' || ch[0] == 'E' || ch[0] == 'i' || ch[0] == 'I' || ch[0] == 'o' || ch[0] == 'O' || ch[0] == 'u' || ch[0] == 'U')
                samo++;
            else
                spol++;
        }
        else
        inne++;
       std::cin >>ch;
    }
    std::cout << spol << " slow zaczyna sie od spolglosek" << std::endl;
    std::cout << samo << " slow zaczyna sie od samoglosek" << std::endl;
    std::cout << inne << " slow nie zalicza sie do zadnej z tych kategorii" << std::endl;*/

    //Cwiczenie 8
    /*std::ifstream readFile;
    readFile.open("test.txt");
    if (readFile.is_open())
        std::cout << "Otworzenie pliku sie powiodlo." << std::endl << std::endl;
    else std::cout << "Otworzenie pliku sie  nie powiodlo." << std::endl << std::endl;
    int i = 0; //ilosc znakow
    char ch;
    while(!readFile.eof())
    {
     readFile.get(ch);
     i++;
    }
    readFile.close();
    std::cout << "W pliku znajduje sie: " << i-1 << " znakow." <<std::endl;*/

    //Cwiczenie 9
    std::ifstream rFile;
    rFile.open ("donation.txt");
    if (rFile.is_open()) std::cout << "Otworzenie pliku sie udalo." << std::endl;
    else std::cout << "Otworzenie pliku sie nie udalo." << std::endl;
    int amount;
    rFile >> amount;
    struct donation
    {
        std::string name;
        double money;
    };

    donation *p = new donation [amount];
    std::cout << "Nastapi wczytanie " << amount << " darczyncow." << std::endl;

    int i = 0;
    while (rFile.good()) //poki dobre dane i nie EOF
    {
       rFile.get();
       std::getline(rFile, ((p+i) -> name));
       rFile >> ((p+i) -> money);
       i++;
    }
    int j = 0;
    std::cout << std::endl << "Nasi Wspaniali Sponsorzy: " <<std::endl;
    for(int i = 0; i < amount; i++)
    {
        if ((p+i) -> money >= 10000)    {
                std::cout << (p+i) -> name << std::endl;
                j++;
            }
    }
    if (j == 0) std::cout << "brak" << std::endl;
    j = 0;
    std::cout << "Nasi Sponsorzy: " <<std::endl;
    for(int i = 0; i < amount; i++)
    {
        if ((p+i) -> money < 10000)     {
                std::cout << (p+i) -> name << std::endl;
                j++;
            }
    }
        if (j == 0) std::cout << "brak" << std::endl;

    delete [] p;

    return 0;
}
