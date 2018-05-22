#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int option;
    cout<<"WHich option of rand 1/2.   3 table  4 tablice do while";
    cin>> option;
    switch(option)
    {
    case 1:
        {
    srand( time( NULL ) );
    cout << "Wylosowanie pierwsze: " << rand() << endl;
    int liczba = rand();
    cout << "Wylosowanie drugie: " << liczba << endl;
    liczba = rand();
    cout << "Wylosowanie trzecie: " << liczba << endl;
    break;
}
    case 2:
        {


    std::cout << "Wylosowanie pierwsze: " <<(( std::rand() % 50 ) + 7 ) << std::endl;
    int liczba =( std::rand() % 50 ) + 7;
    std::cout << "Wylosowanie drugie: " << liczba << std::endl;
    liczba =( std::rand() % 50 ) + 7;
    std::cout << "Wylosowanie trzecie: " << liczba << std::endl;
    break;
        }
    case 3:
        {
        int liczby[ 3 ];
    std::cout << "Podaj liczbe 1:";
    std::cin >> liczby[ 0 ];
    std::cout << "Podaj liczbe 2:";
    std::cin >> liczby[ 1 ];
    liczby[ 2 ] = 567;
    std::cout << "liczby[2] wynosi " << liczby[ 2 ] << std::endl;
    int suma = liczby[ 0 ] + liczby[ 1 ] + liczby[ 2 ];
    std::cout << "Suma trzech liczb wynosi:" << suma << std::endl;
    break;
        }
    case 4:
        {
std::cout << "Podaj liczby: ";
    int liczba[ 10 ];
    int licznik = 0;
    do
    {
        std::cin >> liczba[ licznik ];
        licznik++;
    } while( licznik < 10 );

    std::cout << "Podales nastepujace liczby: ";
    licznik = 0;
    do
    {
        std::cout << liczba[ licznik ] << ", ";
        licznik++;
    } while( licznik < 10 );
    break;
        }
    }
    int choose;
    cout <<"0 - first option, 1 - second option.";
    cin>>choose;
    cout<< "do you want to show it on console? yes/no";
    string x;
    cin>>x;
    if(x=="yes"||x=="Yes"){
    switch(choose){
    case 0:
        {
    cout<< "Test dzialania Code::Blocks" ;
    break;
        }
    case 1:
        {
   cout<< "Test dzialania Code::Blocks111111111" ;
   break;
   }
    }
    }
    else
        return 0;
}
