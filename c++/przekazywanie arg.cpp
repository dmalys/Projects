#include <iostream>

void wypisz1( int  iLiczba )
{
    std::cout << "Wartosc liczby wynosi: " << iLiczba << std::endl;
    iLiczba += 10;
    std::cout << "Wartosc liczby wynosi: " << iLiczba << std::endl;
}

void wypisz( int & iLiczba ) //bierz cala liczbe a nie kopiuj jej
{
    std::cout << "Wartosc liczby wynosi: " << iLiczba << std::endl;
    iLiczba += 10;
    std::cout << "Wartosc liczby wynosi: " << iLiczba << std::endl;
}

int main()
{
    int iNaszaLiczba = 7;
    std::cout << "Nasza liczba = " << iNaszaLiczba << std::endl;
    wypisz1( iNaszaLiczba );
    std::cout << "Nasza liczba = " << iNaszaLiczba << std::endl;
    wypisz( iNaszaLiczba );
    std::cout << "Nasza liczba = " << iNaszaLiczba << std::endl;

    return 0;
}
