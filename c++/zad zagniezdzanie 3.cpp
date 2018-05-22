#include <iostream>
using namespace std;
int main(){

    int numer=0;
    int z[6]={1,2,3,4,5,6};
while(true){

        if(z[5]!=z[4]&&z[5]!=z[3]&&z[5]!=z[2]&&z[5]!=z[1]&&z[5]!=z[0]){
        if(z[4]!=z[3]&&z[4]!=z[2]&&z[4]!=z[1]&&z[4]!=z[0]){
        if(z[3]!=z[2]&&z[3]!=z[1]&&z[3]!=z[0]){
        if(z[2]!=z[1]&&z[2]!=z[0]){
        if(z[1]!=z[0]){
cout<<numer<<endl;
numer++;
}}}}}
z[0]++;
if(z[0]>49){
    z[1]++;
    z[0]=1;
}
if(z[1]>49){
    z[2]++;
    z[1]=1;
}
if(z[2]>49){
    z[3]++;
    z[2]=1;
}
if(z[3]>49){
    z[4]++;
    z[3]=1;
}
if(z[4]>49){
    z[5]++;
    z[4]=1;
}

if(z[5]>49){
    cout<<numer<<endl;
return 0;
}
}
}
