#include <fstream>
#include <iostream>
using namespace std;
int main(){
std::ifstream plik;
std::string wiersz;
if(plik.good()){
plik.open("plik.txt");

while( std::getline( plik, wiersz ) ){
if(wiersz.find("damian")!=std::string::npos){
     std::cout << wiersz << std::endl;
}
else{
    cout<<"******************w tym wierszu nic nie ma"<<endl;
}
}
}
else{
    cout<<"zle";
}
plik.close();
return 0;
}
