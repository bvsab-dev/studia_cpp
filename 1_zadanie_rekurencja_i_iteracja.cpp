#include <iostream>
using namespace std;

int rekurencja(int n) {

    if(n==0) return 2;
    if(n==1) return 0;
    if(n==2) return 1;
    if(n>2) return rekurencja(n-1)-2*rekurencja(n-2)+rekurencja(n-3);
}

int iteracja(int n) {
    int a = 2;//wyraz 0
    int b = 0;//wyraz 1
    int c = 1;//wyraz 2
    int wynik = 0;
    if(n==0) return 2;
    if(n==1) return 0;
    if(n==2) return 1;
    
       for (int i = 3; i <= n; ++i) { //zaczynamy od 3 wyrazu gdyz wyraz 2 jest zdefiniowany
        wynik = c - 2 * b + a;//uzywamy wzoru c to wyraz n-1 b to wyraz n-2 a to wyraz n-3
        a = b; //przypisujemy wyraz n-3 jako kolejny wyraz czyli n-2
        b = c;//analogicznie jak wyzej tylko tutaj wyraz n-2 przypisujemy n-1
        c = wynik;//przypisz n-1 naszemu wynikowi ktory otrzymalismy wyzej przez obliczenia
    }
    return wynik;
}

int main() {

    cout<<rekurencja(5)<<endl;
    cout<<iteracja(5)<<endl;
    return 0;
}
