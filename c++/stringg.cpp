#include <string>
#include <iostream>
using namespace std;
int main(){
    string tablica[10];
    string suma;
cout<<"Napisz 10 wyrazow"<<endl;
for(int i=0;i<10;i++){
        cin>>tablica[i];
}
suma=tablica[0];
for(int i=1;i<10;i++){
    suma+=", "+tablica[i];}
    cout<<suma<<endl;

return 0;}
