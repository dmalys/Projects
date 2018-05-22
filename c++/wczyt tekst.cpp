#include <iostream>
#include <string>
using namespace std;
void wczytajOsobe(string &imie,string &nazw,int &wiek){
    cout<<"Wypisz swoje dane: imie, nazwisko, wiek."<<endl;
    cin>>imie;
    cin>>nazw;
    cin>>wiek;
}
void wypiszOsobe(string &imie, string &nazw,int &wiek){
cout<<"Imie: " <<imie<<", nazwisko: "<<nazw<<", wiek: "<<wiek<<endl;
}
   int main()
{
    std::string imie[ 2 ];
    std::string nazwisko[ 2 ];
    int wiek[ 2 ];
    for( int i = 0; i < 2; i++ )
         wczytajOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );

    for( int i = 0; i < 2; i++ )
         wypiszOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );

    return 0;
}

