#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int losowanie(){
srand(time(NULL));
return (rand()%10)+1;
}

bool czyWylosowanaByla(int tablica[],int x,int ile){//ile ilosc liczb juz znalezionych x liczba szukana
    if(ile<=0)
        return false;


    for(int i=0;i<ile;i++){
    if(tablica[i]==x)
            return true;
    }
return false;
}
int main(){
int wylosowane[5];
int wylosowanych=0;
do{
    int liczba = losowanie();
    if(czyWylosowanaByla(wylosowane,liczba,wylosowanych)==false){
        wylosowane[wylosowanych]=liczba;
        wylosowanych++;
    }
}while (wylosowanych<5);

for(int i=0;i<5;i++){
    cout<<"liczby wylosowane: "<<wylosowane[i]<<endl;
}

return 0;
}
