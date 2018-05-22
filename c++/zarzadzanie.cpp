#include <iostream>
using namespace std;
int main(){
int rozmiar=0;
int * tablica = new int[5];
int * nowa =new int[5];
cout<<"Podaj liczby do wczytania, 0 wychodzi."<<endl;
while(true){
    int liczba;
    cin>>liczba;
    if(liczba==0)
        break;

    //jak brakuje miejsca w tablicy, utworz wieksza tablice
    if(rozmiar%5==0){
    nowa= new int[rozmiar+5];
    }
    //skopiuj tablice
    for(int i=0;i<rozmiar;i++)
        nowa[i] = tablica[i];

    //dodaj nowa wartosc
    nowa[rozmiar]=liczba;

    //usun stara tablice
    delete[] tablica;

    //zaktualizuj zmienne
    tablica=nowa;
    rozmiar++;
}
cout<<"Podane liczby, ale odwrotnie"<<endl;

for(int i=rozmiar-1;i>=0;i--){
    cout<<tablica[i]<<" ";
}
delete[] tablica;
}
