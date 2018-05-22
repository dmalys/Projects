#include <iostream>
#include <string>
using namespace std;
struct Auto{
    string nazwa;
    int numerModelu;
    float predkoscMax;
    int iloscBiegow;

    void wyswietlamy();
};
void Auto::wyswietlamy(){
cout<<"Nazwa auta; "<<nazwa<<", model:"<<numerModelu<<", predkosc maksymalna: "<<predkoscMax<<", ilosc biegów: "<<iloscBiegow<<"."<<endl;
}
int main(){

    std::string sNapis = "To jest napis";
    std::cout << "Napis: " << sNapis << std::endl;
    std::cout << "Dlugosc napisu to (metoda size): " << sNapis.size() << std::endl;
    std::cout << "Dlugosc napisu to (metoda length): " << sNapis.length() << std::endl;

    std::string tekst = "abc";
tekst += "def";
tekst.append( "ghi" );
std::cout << tekst<<endl; //zostanie wypisany tekst: abcdefghi

tekst = "abc";
tekst.insert( 1, "def" );
std::cout << tekst; //zostanie wypisany tekst: adefbc

sNapis = "[Kurs C++] std::string - Modyfikowanie tekstu.";
    sNapis.erase( 10, 14 ); //Kasujemy od dziesiątej pozycji (czyli jedenastego znaku) czternaście znaków
    std::cout << sNapis << std::endl;

    sNapis = "[Kurs C++] std::string - Kopiowanie tekstu.";
    std::string sDrugiNapis="<- tutaj papapappa";
    sDrugiNapis.insert( 0, sNapis,1,8 ); //pozycja, tekst, od ktorego znaku kopiowac, liczba znakow do skopiowania
    //Wstaw przed pozycją zero tekst z obiektu sNapis
    std::cout << sDrugiNapis << std::endl;

struct Auto autoo;
cout<<"Podaj nazwe auta, numer modelu, predkosc maksymalna oraz ilosc biegow"<<endl;
cin>>autoo.nazwa>>autoo.numerModelu>>autoo.predkoscMax>>autoo.iloscBiegow;
autoo.wyswietlamy();
return 0;
}
