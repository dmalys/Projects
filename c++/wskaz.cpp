#include <iostream>
using namespace std;
int main(){

int z=14;
int tablica[5]={1,2,3,4,5};

//int *wsk1=z;
int *wsk2=&z;
//int *wsk3=*z;

int *wsk4=tablica;
//int *wsk5=&tablica;
//int *wsk6=*tablica;
//cout<<wsk1<<endl;
//cout<<*wsk1<<endl;
//cout<<&wsk1<<endl;
int *wskpocz=tablica;
int *wspkon=tablica+5;
char tab[ 10 ] = { 'a', 's', 'd', 0 };
const int * p1; // WskaŸnik na sta³¹, bo const jest po stronie typu wskazywanego (const int)
int * const p2; // Sta³y wskaŸnik, bo const jest po stronie wskaŸnika
const int * const p3; // Sta³y wskaŸnik na sta³¹, bo const jest wszêdzie :)

std::cout << tab << std::endl;
const char * hello = "Hello world";
std::cout << hello << std::endl;
cout<<wspkon-wskpocz<<endl;
cout<<wsk2<<endl; //adres tej liczby
cout<<*wsk2<<endl; //ta liczba
cout<<&wsk2<<endl;//adres wskaznika

//cout<<wsk3<<endl;
//cout<<*wsk3<<endl;
//cout<<&wsk1<<endl;

cout<<wsk4<<endl;//adres pierszego elementu tablicy
cout<<*wsk4<<endl; //wartosc pierwszego elementu tablicy
cout<<&wsk4<<endl; //adres wskaznika do pierwszego elementuu tablicy

/*cout<<wsk5<<endl;
cout<<*wsk5<<endl;
cout<<&wsk5<<endl;

cout<<wsk6<<endl;
cout<<*wsk6<<endl;
cout<<&wsk6<<endl;
*/
return 0;
}
