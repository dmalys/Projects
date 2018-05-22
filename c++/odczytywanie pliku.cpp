#include <iostream>
#include <fstream>
#include <string>

bool wyswietlZawartoscPliku( std::string sNazwaPliku )
{
    std::ifstream plik;
    plik.open( sNazwaPliku.c_str() );
    if( !plik.good() )
         return false;

    std::string wiersz;
    while( std::getline( plik, wiersz ) )
         std::cout << wiersz << std::endl;

    plik.close();
    return true;
}

int main()
{
    if( !wyswietlZawartoscPliku( "cpp0x.txt" ) )
         std::cout << "Nie udalo sie otworzyc pliku o podanej nazwie." << std::endl;

    return 0;
}
