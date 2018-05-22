#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void wczytywanie(int tablica[]){
cout<<"Wpisz dziesiec liczb: "<<endl;
for(int i=0;i<10;i++)
cin>>tablica[i];
if(!cin){
        cout<<"Wrong. its not number!"<<endl;
    cin.clear();
cin.ignore();
}}

int losowanie(){ //zwraca liczbe 1 2 albo 3
return (rand()%8);
}
bool czyWylosowanaByla(int tablica[],int x,int ile){//ile ilosc liczb juz znalezionych x liczba szukana
    if(ile<=0)
        return false;


    for(int i=0;i<ile;i++){
    if(tablica[i]==x)
            return true;
    }
return false;
}

int main(){
    srand(time(NULL));
    int wczytane[10];
int wylosowane[8];
int wylosowanych=0;
wczytywanie(wczytane);

///////////
do{
    int liczba = wczytane[losowanie()];

    if(czyWylosowanaByla(wylosowane,liczba,wylosowanych)==false){
        wylosowane[wylosowanych]=liczba;
        wylosowanych++;
    }
}while (wylosowanych<8);

for(int i=0;i<8;i++){
    cout<<"liczby wylosowane: "<<wylosowane[i]<<endl;
}

return 0;
}
