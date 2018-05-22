#include <iostream>
using namespace std;
int main(){
    int m,j,k,l,i=1;
while(true){
        if(m>3){
                    m=1;
                    l++;
            }
 if(l>3){
                    l=1;
                    k++;
                }
                if(k>3){
                    k=1;
                    j++;
                }
                if(j>3){
                    j=1;
                    i++;
                }
                if(i>3){
                    return 0;
                }
                int tbl[5]={i,j,k,l,m};
                for(int x=0;x<5;x++){
                cout<<tbl[x]<<" ";
                }
                cout<<endl;
                m++;
            }
}
