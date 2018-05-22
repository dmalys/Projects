#include <fstream>
#include <iostream>
#include <string>

void wykonajOperacje( int liczba1, std::string napis, int liczba2 )
{
    if( napis == "dodac" )
    {
        std::cout << liczba1 << " + " << liczba2 << " = " << liczba1 + liczba2 << std::endl;
    } else if( napis == "odjac" )
    {
        std::cout << liczba1 << " - " << liczba2 << " = " << liczba1 - liczba2 << std::endl;
    } else
    {
        std::cout << "Nieznana operacja \"" << napis << "\" - nie mozna wykonac obliczen." << std::endl;
    }
}

bool wczytajPlik( std::string nazwaPliku )
{
    std::ifstream plik;
    plik.open( nazwaPliku.c_str() );
    if( !plik.good() )
         return false;

    while( true ) //p�tla niesko�czona
    {
        int a;
        std::string b;
        int c;
        plik >> a >> b >> c;
        if( plik.good() )
             wykonajOperacje( a, b, c );
        else
             break; //zako�cz wczytywanie danych - wyst�pi� jaki� b��d (np. nie ma wi�cej danych w pliku)

    } //while
    return true;
}

int main()
{
    if( !wczytajPlik( "dane.txt" ) )
         std::cout << "Nie udalo sie otworzyc pliku!" << std::endl;

    return 0;
}
