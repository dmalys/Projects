/*
unsigned int find( char znak, unsigned int offset = 0 );
unsigned int find( const char * sNapis, unsigned int offset = 0 );
unsigned int find( const char * sNapis, unsigned int offset, unsigned int liczbaZnakow );
unsigned int find( const std::string & napis, unsigned int offset = 0 );

*/
#include <string>
#include <iostream>

void szukajZnaku( std::string &tekst, std::string szukanyZnak )
{
    size_t znalezionaPozycja = tekst.find( szukanyZnak );
    if( znalezionaPozycja == std::string::npos ){
         std::cout << "Nie znaleziono znaku w tekscie" << std::endl;
    return;
    }



    do
    {
        std::cout << "Znak zostal odnaleziony na pozycji " << znalezionaPozycja << std::endl;
        znalezionaPozycja = tekst.find( szukanyZnak, znalezionaPozycja +szukanyZnak.size() );
    } while( znalezionaPozycja != std::string::npos );
}

int main()
{
    std::string naszTekst = "Przylad z ursu C++ (http:/ursu/cpp0x.pl)";
    szukajZnaku( naszTekst, "ursu" ); //szuka litery 'k' w tekœcie
    return 0;
}
