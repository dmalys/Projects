#include <iostream>
using namespace std;
int tab[ 10 ] = { 0, 9, 1, 3, 8, 2, 6, 7, 5, 4 };
 int Max_element_indeks(int n)
   {
     int max = 0;
     for (int i = 1; i < n; i++)
       if (tab[i] > tab[max])
         max = i;
     return max;
   }

  void sortuj(int *pocz,int *koniec)
  {
      int n=koniec-pocz;
      //cout<<n<<endl;
    for (int i = n; i >= 2; i--)
    {
      int max = Max_element_indeks(i);
      if (max != i - 1)
        swap(tab[i - 1], tab[max]);
    }
  }


void tworzymy(int *poczatek, int *koniec, int wartosc){

while(poczatek != koniec){
    * poczatek=wartosc;
    wartosc++;
    poczatek++;

}


}
void wypisywanie(int *poczatek,int wielkosc){
while(wielkosc>0){
    cout<<*poczatek<<endl;
    poczatek++;
    wielkosc--;
    }
}

int main(){


    sortuj( tab, tab + 10 );
    wypisywanie( tab, 10 );

/*
int tabl[10];
tworzymy(tabl,tabl+10,150);
wypisywanie(tabl,10);
return 0;*/
}
