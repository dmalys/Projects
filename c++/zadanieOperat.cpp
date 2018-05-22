
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void dodajemyLiczby(int &ssuma){
    cout<<"Suma wynosi: "<<ssuma<<endl;
}


bool wczytajmyPlik(string nazwaPliku){
ifstream plik;
plik.open( nazwaPliku.c_str());
if(!plik.good())
    return false;

    int i=0;
    int liczby[100];

    /*if( plik.bad() ) //podczas próby odczytania danych wyst¹pi³ b³¹d sprzêtowy
        {
            plik.close();
            return false; //wychodzimy z funkcji i informujemy, ¿e odczytanie pliku zakoñczy³o siê niepowodzeniem
        }

        while(!plik.eof()){}//czy plik sie caly wczytal ->true*/
   while(!plik.eof()){





       plik>>liczby[i];

       if( plik.fail() ){
    cout<<"blad fail."<<endl;
        plik.clear(); //Czyœcimy flagi b³êdów
        char cZnak;
        plik >> cZnak; //Wczytujemy znak
        if( plik.fail() )
             break;
             else
             std::cout << "Napotkano znak '" << cZnak << "'" << std::endl;
     }
     else{
        i++;
        cout<<"cos sie robi"<<endl;
     }
   }
        int suma=0;
        for(int x=0;x<i;x++){
                suma+=liczby[x];
                cout<<"liczba numer: "<<x<<" wynosi "<<liczby[x]<<endl;
        }
        dodajemyLiczby(suma);
    plik.close();
   return true;

}

int main(){

if(!wczytajmyPlik("zadanie oper.txt")){
    cout<<"blad jakis"<<endl;
}
return 0;


}
