#include <iostream>
using namespace std;

struct Struktura {
   int x;
   double y;

   Struktura(int);
   Struktura(double);
   ~Struktura() { cout << "x=" << x << ", y=" << y << endl; };
};

Struktura::Struktura(int _x): x(_x)
{
   std::cout << "Struktura(" << _x << ") int" << std::endl;
}
Struktura::Struktura(double _y): y(_y)
{
   std::cout << "Struktura(" << _y << ") double" << std::endl;
}

int main()
{
   struct Struktura a(5);     //Struktura(int)
   struct Struktura b(3.14);  //Struktura(double)
   //struct Struktura c;        //blad - brak jawnej deklaracji konstruktora "Strukutra()"
   a.~Struktura();            //wywo³anie destruktora na rzecz obiektu a
   a.y = 2.71;       //mo¿emy korzystaæ z obiektu poniewa¿ pamiêæ nie zosta³a zwolniona
   std::cout << a.y << std::endl;
   return 0;
}
