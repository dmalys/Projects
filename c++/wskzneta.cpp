#include <iostream>
using namespace std;

//test na referencje
void test_refe(int &r){
    r = 10;
}

//test na pointer
void test_point(int *p){

    *p = 666;
}

int main() {

    //test dot. referencji przekazanej do funkcji - zmienna sie zmienila!
    int r = 5;
    test_refe(r);
    cout << "r=" << r << endl;


    //test dot. wskaznika
    int x = 5;
    int *ptr = &x;
    test_point(ptr);
    cout << "p=" << x << endl;
    cout << "*ptr=" << *ptr << endl;
    cout << "ptr=" << ptr << endl;
    cout << "x=" << x << endl;
    return 0;

}
