#include <iostream>
using namespace std;
bool czybylo(int &v,int &b,int &n,int tabll[][3]){
                    if(v<b&&b<n){
                            return false;
           }
return true;
} /// JEZELI TRUE NIE BIERZEMY, JEZELI FALSE ZNACZY ZE NIE BYLO BIERZEMY

int main(){
  //  int suma=0;
int tabl[100][3]={};
int i=0;
    for(int x=1;x<6;x++){
        for(int y=1;y<6;y++){
            for(int z=1;z<6;z++){
                    if(i<100){
                    if(!czybylo(x,y,z,tabl)){
                    tabl[i][0]=x;
                    tabl[i][1]=y;
                    tabl[i][2]=z;
                    cout<<"tablica : "<<i<<" "<<endl;
                    cout<<tabl[i][0]<<" "<<tabl[i][1]<<" "<<tabl[i][2]<<endl;
                    i++;
                    }
        }
    }
}
}
}
