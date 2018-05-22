#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int suma=0;
    int tablica[1000];

for(int i=0;i<1000;i++){
        tablica[i]=rand()%7+4;
cout<<"Elementy tablicy: numer "<<i<<" :"<<tablica[i]<<endl;
suma+=tablica[i];

}
cout<<"SUma: "<<suma<<endl;
return 0;
}
