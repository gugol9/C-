#include <cstdlib>
#include <iostream>

using namespace std;

class osoba
{     
      private:
              string imie;
              string nazwisko;
              int wiek;
              
              
      public:
             void wprowadz();
             void wyswietl();
};

class uczen
{     
      private:
              string imie;
              string nazwisko;
              string semestr;
              string wychowawca;
              int wiek;
              int rok;
              double srednia;
              
              
      public:
             void wprowadz();
             void wyswietl();
};



int main(int argc, char *argv[])
{
     
    osoba os1;
    os1.wprowadz();
    os1.wyswietl();
    
    
    
    osoba os2;
    os2.wprowadz();
    os2.wyswietl();
    
    



system("PAUSE");
return EXIT_SUCCESS;
}

void osoba::wprowadz()
{
 cout << "podaj imie:" << endl ;
      cin >> imie ;
 cout << "podaj nazwisko:" << endl ;
      cin >> nazwisko ;
 cout << "podaj wiek:" << endl ;
      cin >> wiek ;
 
}

void osoba::wyswietl()
{
cout << imie << endl; 
cout << nazwisko << endl; 
cout << wiek << endl; 
}


void uczen::wprowadz()
{
 cout << "podaj imie:" << endl ;
      cin >> imie ;
 cout << "podaj nazwisko:" << endl ;
      cin >> nazwisko ;
 cout << "podaj wiek:" << endl ;
      cin >> wiek ;
 cout << "podaj rok:" << endl ;
      cin >> rok ;
 cout << "podaj semestr:" << endl ;
      cin >> semestr ;
 cout << "podaj wychowawca:" << endl ;
      cin >> wychowawca ;
 
}

void uczen::wyswietl()
{
     
 cout << imie << endl; 
 cout << nazwisko << endl; 
 cout << wiek << endl; 
 cout << rok << endl; 
 cout << semestr << endl; 
 cout << wychowawca << endl; 
 
}




