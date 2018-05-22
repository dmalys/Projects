#include <iostream>
#include <fstream>

int main()
{
    std::ifstream plik( "zadanier.txt" );
    if( !plik.good() )
         return 0;

    int iPozycjaStartowa = 4;
    plik.seekg( iPozycjaStartowa );

    int iLiczba;
    plik >> iLiczba;

    int iWczytanychZnakow = plik.tellg() - iPozycjaStartowa;
    std::cout << "Liczba: " << iLiczba << std::endl;
    std::cout << "Wczytano " << iWczytanychZnakow << " znakow" << std::endl;
    return 0;
}
