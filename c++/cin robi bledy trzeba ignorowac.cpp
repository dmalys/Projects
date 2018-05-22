#include <iostream>
#include <string>

using namespace std;

int main()
{

    cout << "Podaj liczbê: ";
    int liczba;
    cin >> liczba;

    cout << "Podaj tekst: ";
    string tekst;
    cin.ignore(); // to wywo³anie usunie z bufora znak '\n' pozostawiony przez obiekt "cin"
    getline(cin, tekst);

    cout << liczba << ' ' << tekst << endl;

    return 0;
}
