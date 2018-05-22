#include <iostream>
using namespace std;
int main(){
    bool errorr;
    int liczba;
    do{

errorr =false;
cout<<"POdaj liczbe: ";
cin>>liczba;
if(!cin){
    errorr=true;
    cin.clear();
    cin.ignore();
}
else
    return 0;
    }while(errorr);
}
