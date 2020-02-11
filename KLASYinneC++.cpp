#include <cstdlib>
#include <iostream>

using namespace std;

class punkt
{
       private:
              int x;
              int y;
         
      public:
             void wprowadz();
             void wyswietl();
             void zmien();
             void przesun();
};

class odcinek
{
       private:
              int x;
              int y;
         
      public:
             void wprowadz();
             void wyswietl();
             void zmien();
             void przesun();
};


class kwadrat
{
       private:
              int x;
              int y;
         
      public:
             void wprowadz();
             void wyswietl();
             void zmien();
             void przesun();
};



class kolo
{
       private:
              int x;
              int y;
         
      public:
             void wprowadz();
             void wyswietl();
             void zmien();
             void przesun();
};




int main(int argc, char *argv[])
{
    system("PAUSE");
    return EXIT_SUCCESS;
}
