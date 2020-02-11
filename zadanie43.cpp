#include <cstdlib>
#include <iostream>

using namespace std;

class budynek
{
      private:
              int osoby;
              int pietro;
              double metry;
              string metody;
              
     public:
            void wprowadz();
            void wyswietl();         
};

class blok:budynek
{
     private:
              int wind;
             
              
     public:
            void wprowadz();
            void wyswietl();  
      
};


class domjednorodzinny:budynek
{
      
      private:
              string wlasciciel;
             
              
     public:
            void wprowadz();
            void wyswietl();  
      
};


int main(int argc, char *argv[])
{
    
    budynek bud;
    bud.wprowadz();
    bud.wyswietl();
    
    blok bl;
    bl.wprowadz();
    bl.wyswietl();
    
    domjednorodzinny dom;
    dom.wprowadz();
    dom.wyswietl();
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


void budynek::wprowadz()
{
 cout << "podaj osoby:" << endl ;
      cin >> osoby ;
 cout << "podaj pietro:" << endl ;
      cin >> pietro ;
 cout << "podaj metry:" << endl ;
      cin >> metry ;
 cout << "podaj metody:" << endl ;
      cin >> metody ;
 
}

void budynek::wyswietl()
{
cout << osoby << endl; 
cout << pietro << endl; 
cout << metry << endl; 
cout << metody << endl; 
 
}


void blok::wprowadz()
{
     budynek::wprowadz();
     
 cout << "podaj windy:" << endl ;
      cin >> wind ;
}

void blok::wyswietl()
{
     budynek::wyswietl();
 cout << wind << endl; 
}


void domjednorodzinny::wprowadz()
{
     budynek::wprowadz();
     
 cout << "podaj wlasciciela:" << endl ;
      cin >> wlasciciel ;
}

void domjednorodzinny::wyswietl()
{
     budynek::wyswietl();
 cout << wlasciciel << endl; 
}
