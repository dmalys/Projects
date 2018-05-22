#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;
// array cant be alocated dynamicly
void wypiszLiczby(int tablica[],int ile){

    for(int indeks=0;indeks<ile;indeks++){
        cout<<tablica[indeks]<<endl;
    }
}
void wczytajLiczby(int tablica[],int ile){

    for(int indeks=0;indeks<ile;indeks++){
     cout<<"Podaj liczbe numer "<<indeks+1<<": ";
     cin>>tablica[indeks];
    }
}
void sumujLiczby(int tablica[],int ile){
    int oblicz=0;
    for(int indeks=0;indeks<ile;indeks++){
        oblicz+=tablica[indeks];
    }
    cout<<"Suma wynosi :"<<oblicz;
}
void sumDoWhile(int tablica[],int ile){
int indeks=0;
int suma=0;
if(indeks<ile)
do{
        suma+=tablica[indeks];
    indeks++;
}while(indeks<ile);
cout<<"Suma liczb wynosi: " << suma<<endl;
}
void zadWypelnienie(){
int mojaTablica[20];
for(int indeks=0;indeks<20;indeks++){
    mojaTablica[indeks]=(1 + indeks*5);
    cout<<"Element tablicy o indeksie: "<<indeks<<" wynosi: "<<mojaTablica[indeks]<<endl;
}
}
void zadOst(){
srand(time(NULL));
cout<<"losowanie"<<endl;
int tablicaMoj[10];
for(int indeks=0;indeks<10;indeks++){
tablicaMoj[indeks]=rand()%21+10; //jakim cudem wypelnia cala tablice
}
for(int indeks=0;indeks<10;indeks++){
cout<<"pocz konc "<<indeks<<" ssss "<<tablicaMoj[indeks]<<endl;
cout<<"koniec pocz "<<indeks<<" ssss " <<tablicaMoj[9-indeks]<<endl;
}
auto result = std::minmax_element(begin(tablicaMoj), end(tablicaMoj));
cout<<"Najmniejsza wartoœæ wynosi: "<<tablicaMoj[(result.first-begin(tablicaMoj))]<<"\n";
cout<<"Najwieksza wartoœæ wynosi: "<<tablicaMoj[(result.second-begin(tablicaMoj))]<<endl;

}
int main(){

int liczba[5];
//wczytajLiczby(liczba,4);
//wypiszLiczby(liczba,4);
//sumujLiczby(liczba,4);
//sumDoWhile(liczba,4);
//zadWypelnienie();
zadOst();
return 0;
}
