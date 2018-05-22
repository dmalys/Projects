#include <iostream>
#include <fstream>
using namespace std;
int main(){
std::fstream plik;
plik.open("dane.txt");
if(!plik.good())
    return 0;

        int pozycja=0;
        while(!plik.eof()){
    plik.seekg( pozycja );
    pozycja+=3;
    int iLiczba;
    plik >> iLiczba;
    cout<<"Liczba: "<<iLiczba<<endl;
    if(plik.fail()){
            plik.clear();
        char znak;
        plik >> znak;

        if(plik.fail()){
                cout<<"blad"<<endl;
            break;
        }
        else{
            cout<<"Znak: "<<znak<<endl;
        }
    }

        }
}
