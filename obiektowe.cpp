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

class uczen:osoba
{     
      private:
              string wychowawca;
              double srednia;
              
              
      public:
             void wprowadz();
             void wyswietl();
};


class student:osoba
{
       private:
              string semestr;
              int rok;

       public:
             void wprowadz();
             void wyswietl();
};


class przedszkolak:osoba
{
      private:
              string grupa;
              string opiekun;
              
              
      public:
             void wprowadz();
             void wyswietl();
};


class trzeciaTI:uczen
{
      
      private:
              string efekty;  
      
      public:
               void wprowadz();
               void wyswietl();
};


class emeryt:osoba
{
      
      private:
                double emerytura;  
      
      public:
               void wprowadz();
               void wyswietl();
};


class chlopak:osoba
{
      
      private:
               string prawo_jazdy;
               string zainteresowania;  
      
      public:
               void wprowadz();
               void wyswietl();
};


int main(int argc, char *argv[])
{
     
    osoba os1;
    os1.wprowadz();
    os1.wyswietl();
    
    uczen os2;
    os2.wprowadz();
    os2.wyswietl();
    
    student os3;
    os3.wprowadz();
    os3.wyswietl();

    przedszkolak os4;
    os4.wprowadz();
    os4.wyswietl();
    
    emeryt os5;
    os5.wprowadz();
    os5.wyswietl();
    
    chlopak os6;
    os6.wprowadz();
    os6.wyswietl();


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
 osoba::wprowadz();
  
 cout << "podaj srednia:" << endl ;
      cin >> srednia ;
 cout << "podaj wychowawca:" << endl ;
      cin >> wychowawca ;
 
}

void uczen::wyswietl()
{
 osoba::wyswietl();
      
 cout << srednia<< endl; 
 cout << wychowawca << endl; 
 
}


void student::wprowadz()
{
 osoba::wprowadz();
  
 cout << "podaj semestr:" << endl ;
      cin >> semestr ;
 cout << "podaj rok:" << endl ;
      cin >> rok ;      
 
}

void student::wyswietl()
{
 osoba::wyswietl();
      
 cout << semestr << endl; 
 cout << rok << endl;
 
}


void przedszkolak::wprowadz()
{
 osoba::wprowadz();
  
 cout << "podaj grupe:" << endl ;
      cin >> grupa ;
 cout << "podaj opiekuna:" << endl ;
      cin >> opiekun ;      
 
}

void przedszkolak::wyswietl()
{
 osoba::wyswietl();
      
 cout << grupa << endl; 
 cout << opiekun << endl;
 
}


void trzeciaTI::wprowadz()
{
     uczen::wprowadz();
     
     cout << "podaj efektywnoœæ" << endl;   
     cin >> efekty;
}


void trzeciaTI::wyswietl()
{
     uczen::wyswietl();
     
     cout << efekty << endl;
     
}


void emeryt::wprowadz()
{
     osoba::wprowadz();
     
     cout << "podaj emeryture" << endl;   
     cin >> emerytura;
}


void emeryt::wyswietl()
{
     osoba::wyswietl();
     
     cout << emerytura << endl;
     
}


void chlopak::wprowadz()
{
     osoba::wprowadz();
     
     cout << "czy posiadasz prawo jazdy?????" << endl;   
     cin >> prawo_jazdy;
      cout << "podaj zainteresowania" << endl;   
     cin >> zainteresowania;
}


void chlopak::wyswietl()
{
     osoba::wyswietl();
     
     cout << prawo_jazdy << endl;
     cout << zainteresowania << endl;
     
}


