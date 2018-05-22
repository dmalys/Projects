#include <iostream>
#include <string>
using namespace std;
struct Zespol{
string imie;
int wiek;
bool wazny;
Zespol * koniec;
};
Zespol * ostatni(Zespol * zespol){
if(zespol){
    while(zespol->koniec)
        zespol=zespol->koniec;
}
return zespol;
}
void dodajemyElem(Zespol *& zespol,string imie,int wiek, bool wazny){
Zespol * nowy = new Zespol;
nowy ->imie =imie;
nowy ->wiek = wiek;
nowy -> wazny = wazny;
nowy ->koniec= nullptr;
if(zespol)
    ostatni(zespol)->koniec=nowy;
else
    zespol=nowy;
}
void wypisujemyElem(Zespol * zespol){
    if(zespol){
        cout<<"Czlonek zespolu: "<<zespol->imie<<", lat: "<<zespol->wiek<<", waznosc "<<zespol->wazny<<endl;
        wypisujemyElem(zespol->koniec);
    }
}
void zniszcz(Zespol * zespol){
    while(zespol){
        Zespol * chwila=zespol;
        zespol=zespol->koniec;
        delete chwila;
    }
    zespol=nullptr;
}

int main(){
int liczba;
string imie;
bool wazny;
Zespol * zespol=nullptr;
cout<<"Podaj wiek, imie oraz priorytet osoby(0/1). (type 0 to exit)"<<endl;
while(cin>>liczba&&liczba){
    cin>>imie;
    cin>>wazny;
    dodajemyElem(zespol,imie,liczba,wazny);
}
    cout<<"Koniec. Dane zespolu:"<<endl;
    wypisujemyElem(zespol);
    zniszcz(zespol);
}
