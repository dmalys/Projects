#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <ctime>

using namespace std;
int funkcja()
{
    int x;
    cout<<"Podaj liczbê."<<endl;
    cin>>x;
   if(!cin){
    cin.clear();
     cin.ignore();
   }
    return x;
}

void funkRand(int q,int w){ //q poczatkowy warunek // w koncowy warunek warunek
//srand(time(NULL));
w=w-q;
cout<<"Wylosowane liczby: " << ((rand() %w) + q) <<endl; // rand % ilosc liczb  + poczatkowa liczba
}
int main(){
    int poczat;
    int konc;
cout << "Podaj liczbe: ";
    int liczba = funkcja();
    cout << "Podales liczbe: " << liczba << endl;
cout<<"wpisz poczatkowa liczbe randa";
    cin>>poczat;
    cout<<"wpisz koncowa liczbe randa";
    cin >> konc;
    for(int i=0;i<4;i++)
        funkRand(poczat,konc);
return 0;
}
