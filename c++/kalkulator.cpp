#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
float dodawanie(float x, float y){
return x+y;}
float odejmowanie(float x,float y){
return x-y;}
float mnozenie(float x,float y){
if(y==0){
cout<<"Nie mo¿na mnozyc przez 0"<<endl;
return 0;}
return x*y;}
float dzielenie(float x,float y){
if(y==0){
cout<<"Nie mo¿na dzielic przez 0"<<endl;
return 0;}
return x/y;}
void rezygnacja(){
cout<<"Koniec."<<endl;
}

int main(){
bool wantMore=true;
unsigned int liczba;
float pierwsza , druga;
do{
cout<<"Wybierz opcje: "<<endl;
cout<<"[0] Dodawanie \n[1] Odejmowanie \n[2] Mnozenie \n[3] Dzielenie \n[4] Rezygnacja"<<endl;
cin>>liczba;
if(!cin){
    cout<<"Wrong. It's not number!"<<endl;
    cin.clear();
    cin.ignore();
}
else{
switch(liczba){
case 0:
    cout<<"Wpisz pierwsza liczbe: ";
    cin>>pierwsza;
    cout<<"Wpisz druga liczbe: ";
    cin>>druga;
    cout<<dodawanie(pierwsza,druga)<<endl;
    break;
case 1:
    cout<<"Wpisz pierwsza liczbe: ";
    cin>>pierwsza;
    cout<<"Wpisz druga liczbe: ";
    cin>>druga;
    cout<<odejmowanie(pierwsza,druga)<<endl;
    break;
case 2:
    cout<<"Wpisz pierwsza liczbe: ";
    cin>>pierwsza;
    cout<<"Wpisz druga liczbe: ";
    cin>>druga;
    cout<<mnozenie(pierwsza,druga)<<endl;
    break;
case 3:
    cout<<"Wpisz pierwsza liczbe: ";
    cin>>pierwsza;
    cout<<"Wpisz druga liczbe: ";
    cin>>druga;
    cout<<dzielenie(pierwsza,druga)<<endl;
    break;
case 4:
    rezygnacja();
    wantMore=false;
    break;
default:
    cout<<"Wrong number. Try again."<<endl;
    break;
}}
}while(wantMore);
return 0;
}
